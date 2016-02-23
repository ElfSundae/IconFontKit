<?php

$fontIdentifier     = '';   // e.g. "FontAwesome"
$fontDescription    = '';   // e.g. "Font Awesome v4.5.0"
$iconTypePrefix     = '';   // e.g. "FA"
$fontFile           = '';   // e.g. "FontAwesome.otf"
$fontName           = null; // e.g. "FontAwesome" or null to use the filename of $fontFile
$iconIdentifiers    = [];   // e.g. ['fa-wifi-o']
$iconNames          = [];   // e.g. ['wifi-o']
$iconCodes          = [];   // e.g. ['f01a']
$moveToProject      = true; // determines move .h and .m files to Xcode project

$hContent           = '';
$mContent           = '';

function hFilename()
{
    global $fontIdentifier;
    return 'IF' . $fontIdentifier . '.h';
}

function mFilename()
{
    global $fontIdentifier;
    return 'IF' . $fontIdentifier . '.m';
}

/**
 * Generate .h and .m code contents using $iconIdentifiers, $iconNames, and $iconCodes.
 * And set them to $hContent and $mContent.
 */
function generateContents()
{
    global $fontIdentifier, $fontDescription, $iconTypePrefix, $fontFile, $fontName;
    global $iconIdentifiers, $iconNames, $iconCodes;
    global $hContent, $mContent;

    $className = "IF$fontIdentifier";
    $tab = "    ";

    $hContent = "#import <IconFontsKit/IFIcon.h>\n\n";
    $hContent .= "/// {$fontIdentifier} icon types.\n";
    $hContent .= "typedef NS_ENUM(IFIconType, {$className}Type) {\n";
    for ($i = 0; $i < count($iconIdentifiers); ++$i) {
        $name = $iconNames[$i];
        $name = ucfirst($name);
        $name = preg_replace_callback("#[-_.]+[0-9a-z]{1}#i",
            function($matches) {
                return strtoupper(preg_replace("#[-_.]#", '', $matches[0]));
            }, $name);
        $type = sprintf("{$tab}IF%s%-35s = 0x%s,\n", $iconTypePrefix, $name, $iconCodes[$i]);
        $hContent .= "{$tab}/// Identifier: \"$iconIdentifiers[$i]\"\n";
        $hContent .= $type;
    }
    $hContent .= "};\n\n";
    $fontDesc = str_replace("\n", "\n *", $fontDescription);
    $hContent .= "/*!\n * $fontDescription\n */\n";
    $hContent .= "@interface $className : IFIcon\n";
    $hContent .= "@end\n";

    $mContent .= "#import \"$className.h\"\n\n";
    $mContent .= "@implementation $className\n";
    $mContent .= "\n+ (NSURL *)fontFileURL\n{\n";
    $mContent .= "{$tab}return [[[NSBundle mainBundle] resourceURL] URLByAppendingPathComponent:@\"$fontFile\"];\n";
    $mContent .= "}\n";
    if (!empty($fontName)) {
        $mContent .= "\n+ (NSString *)fontName\n{\n";
        $mContent .= "{$tab}return @\"$fontName\";\n";
        $mContent .= "}\n";
    }
    $mContent .= "\n+ (NSDictionary *)allIcons\n{\n";
    $mContent .= "{$tab}return @{\n";
    for ($i = 0; $i < count($iconIdentifiers); ++$i) {
        $idKey = "@\"$iconIdentifiers[$i]\": ";
        $code = $iconCodes[$i];
        if (hexdec($code) <= 0xff) {
            $code = "[NSString stringWithFormat:@\"%C\", 0x{$code}]";
        } else {
            $code = "@\"\\u{$code}\"";
        }
        $mContent .= sprintf("%13s%-44s%s,\n", " ", $idKey, $code);
    }
    $mContent .= sprintf("%13s};\n", " ");
    $mContent .= "}\n";

    $mContent .= "\n@end\n";
}

/**
 * Write code contents to files.
 */
function writeToFile()
{
    global $hContent, $mContent, $moveToProject;
    global $fontIdentifier, $iconIdentifiers;

    $hFile = hFilename();
    $mFile = mFilename();

    file_put_contents($hFile, $hContent);
    file_put_contents($mFile, $mContent);

    if ($moveToProject) {
        rename($hFile, "../../IconFontsKit/$hFile");
        rename($mFile, "../../IconFontsKit/$mFile");
    }

    echo "$fontIdentifier contains " . count($iconIdentifiers) . " icons (including aliases).\n";
}

/**
 * Generate code contents and write to files.
 */
function generator()
{
    generateContents();
    writeToFile();
}

function generatorFromCSS($cssFile, $iconPrefix)
{
    parseCSS($cssFile, $iconPrefix);
    generator();
}

/**
 * Parse CSS file to get icon names and codes.
 *
 * CSS file looks like: .iconPrefix-icon-name:... { xxxx "\f001" }
 * e.g.
 *
 *   .fa-play-circle-o:before {
 *     content: "\f01d";
 *   }
 *
 *   .fa-rotate-right:before,
 *   .fa-repeat:before {
 *     content: "\f01e";
 *   }
 *
 *   .ion-android-add:before { content: "\f2c7"; }
 *
 *   .zocial.aol:before { content: "\f104"; }
 *
 */
function parseCSS($cssFile, $iconPrefix)
{
    global $iconNames, $iconCodes, $iconIdentifiers;

    $variables = file_get_contents($cssFile);
    $variables = preg_replace_callback("#^\\.{$iconPrefix}[-_.][^,\\n]+,[^{]+({[^}]+})#im", function($matches) {
        return str_replace(',', $matches[1], $matches[0]);
    }, $variables);

    if (preg_match_all("#^\\.{$iconPrefix}([-_.])([^:]+):[^\"'}]*[\"']\\\\([0-9a-f]+)#im", $variables, $matches)) {
        $iconNames = $matches[2];
        $iconCodes = $matches[3];
        foreach ($matches[2] as $str) {
            $iconIdentifiers[] = $iconPrefix . $matches[1][0] . $str;
        }
    }
}
