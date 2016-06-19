<?php

class CodeGenerator
{
    // e.g. "FontAwesome"
    protected $fontIdentifier;

    // e.g. "FA"
    protected $iconTypePrefix;

    // e.g. "FontAwesome.otf"
    protected $fontFile;

    // e.g. "Font Awesome v4.5.0"
    protected $fontDescription;

    // e.g. "FontAwesome", or null to use the filename of $fontFile
    protected $fontName;

    // Whether moving the .h and .m files to the Xcode project.
    protected $moveToXcodeProject = true;

    // e.g. ['fa-wifi-o']
    protected $iconIdentifiers = [];

    // e.g. ['wifi-o']
    protected $iconNames = [];

    // e.g. ['f01a']
    protected $iconCodes = [];

    protected $classPrefix = 'IF';

    protected $hContent;
    protected $mContent;

    // The root path which stores IconFontKit classes.
    protected $xcodeProjectRoot;

    public function __construct($fontIdentifier,
                                $iconTypePrefix,
                                $fontFile,
                                $fontDescription = null,
                                $fontName = null,
                                $moveToXcodeProject = true)
    {
        $this->fontIdentifier = ucfirst($fontIdentifier);
        $this->iconTypePrefix = ucfirst($iconTypePrefix);
        $this->fontFile = $fontFile;
        $this->fontDescription = $fontDescription ?: $fontIdentifier;
        $this->fontName = $fontName;
        $this->moveToXcodeProject = (bool)$moveToXcodeProject;

        $this->xcodeProjectRoot = realpath(dirname(__FILE__) . '/../IconFontKit');

        // Change working directory to the directory of the current gen.php
        chdir(dirname($_SERVER['PHP_SELF']));
    }

    /**
     * Set icon identifiers, names, and codes.
     *
     * @param array $iconIdentifiers e.g. ['fa-wifi-o']
     * @param array $iconNames       e.g. ['wifi-o']
     * @param array $iconCodes       e.g. ['f01a']
     */
    public function setIcons($iconIdentifiers, $iconNames, $iconCodes)
    {
        $this->iconIdentifiers = (array)$iconIdentifiers;
        $this->iconNames = (array)$iconNames;
        $this->iconCodes = (array)$iconCodes;
    }

    /**
     * Generate from icon identifiers, names, and codes.
     */
    public function generate()
    {
        $this->generateContents();
        $this->writeCodeToFiles();
    }

    /**
     * Generate from CSS file.
     *
     * e.g. `.iconClassPrefix-icon-name: ... { content: "\f001" }`
     */
    public function generateFromCssFile($cssFile, $iconClassPrefix)
    {
        if ($this->parseCssFile($cssFile, $iconClassPrefix)) {
            $this->generate();
        } else {
            echo "Could not parse css file: $cssFile\n";
            exit;
        }
    }

    /**
     * Get icons number that icon aliases are not included.
     */
    public function getIconsCount()
    {
        return count(array_unique($this->iconCodes));
    }

    /**
     * Get generated ObjC class name.
     */
    protected function getClassName()
    {
        return $this->classPrefix . $this->fontIdentifier;
    }

    /**
     * Get generated ObjC icon type prefix.
     */
    protected function getTypePrefix()
    {
        return $this->classPrefix . $this->iconTypePrefix;
    }

    /**
     * Get code contents for the class interface.
     */
    protected function getHContent()
    {
        return $this->hContent;
    }

    /**
     * Get code contents for the class implementation.
     */
    protected function getMContent()
    {
        return $this->mContent;
    }

    /**
     * Generate .h and .m code contents, and set $hContent and $mContent.
     */
    protected function generateContents()
    {
        $tab = "    ";
        $className = $this->getClassName();
        $typePrefix = $this->getTypePrefix();

        // $hContent = "#import <IconFontKit/IFIcon.h>\n\n";
        $hContent = '#import "IFIcon.h"' . "\n\n";
        $hContent .= "/**\n";
        $hContent .= " * {$this->fontIdentifier} icon types.\n";
        $hContent .= " */\n";
        $hContent .= "typedef NS_ENUM(IFIconType, {$className}Type) {\n\n";
        for ($i = 0; $i < count($this->iconIdentifiers); ++$i) {
            $name = $this->iconNames[$i];
            $name = ucfirst($name);
            $name = preg_replace_callback("#[-_.]+[0-9a-z]#i",
                function($matches) {
                    return strtoupper(preg_replace("#[-_.]#", '', $matches[0]));
                }, $name);
            $type = sprintf("{$tab}{$typePrefix}%-35s = 0x%s,\n", $name, $this->iconCodes[$i]);

            $hContent .= "{$tab}/// Identifier: \"". $this->iconIdentifiers[$i] ."\"\n";
            $hContent .= $type;
            $hContent .= "\n";
        }
        $hContent .= "};\n\n";

        $fontDesc = str_replace("\n", "\n * ", $this->fontDescription);
        $hContent .= "/**\n * $fontDesc\n */\n";
        $hContent .= "@interface $className : IFIcon\n";
        $hContent .= "@end\n";

        $mContent = "#import \"$className.h\"\n\n";
        $mContent .= "@implementation $className\n";
        $mContent .= "\n+ (NSURL *)fontFileURL\n{\n";
        $mContent .= "{$tab}return [[[NSBundle mainBundle] resourceURL] URLByAppendingPathComponent:@\"$this->fontFile\"];\n";
        $mContent .= "}\n";

        if (!empty($this->fontName)) {
            $mContent .= "\n+ (NSString *)fontName\n{\n";
            $mContent .= "{$tab}return @\"$this->fontName\";\n";
            $mContent .= "}\n";
        }

        $mContent .= "\n+ (NSDictionary *)allIcons\n{\n";
        $mContent .= "{$tab}return @{\n";
        for ($i = 0; $i < count($this->iconIdentifiers); ++$i) {
            $idKey = "@\"{$this->iconIdentifiers[$i]}\": ";
            $code = $this->iconCodes[$i];
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

        $this->hContent = $hContent;
        $this->mContent = $mContent;
    }

    /**
     * Write code contents to files.
     */
    protected function writeCodeToFiles()
    {
        $hFilename = $this->getClassName() . '.h';
        $mFilename = $this->getClassName() . '.m';

        if (
            file_put_contents($hFilename, $this->getHContent()) &&
            file_put_contents($mFilename, $this->getMContent())
        ) {
            if ($this->moveToXcodeProject) {
                rename($hFilename, $this->xcodeProjectRoot.'/'.$hFilename);
                rename($mFilename, $this->xcodeProjectRoot.'/'.$mFilename);
            }

            echo "$this->fontIdentifier contains " .
                 $this->getIconsCount() .
                 " icons.\n";

        } else {
            echo "Could not write code to file.\n";
        }
    }

    /**
     * Parse CSS file to get icon names and codes.
     *
     * CSS file looks like: .iconClassPrefix-icon-name:... { content: "\f001" }
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
    protected function parseCssFile($cssFile, $iconClassPrefix)
    {
        $variables = file_get_contents($cssFile);
        if (empty($variables)) {
            return false;
        }

        $variables = preg_replace_callback(
            "#^\\.{$iconClassPrefix}[-_.][^,\\n]+,[^{]+({[^}]+})#im",
            function($matches) {
                return str_replace(',', $matches[1], $matches[0]);
            },
            $variables
        );

        if (preg_match_all(
                "#^\\.{$iconClassPrefix}([-_.])([^: ]+)[: ][^\"'}]*[\"']\\\\([0-9a-f]+)#im",
                $variables,
                $matches)
        ) {
            $this->iconNames = $matches[2];
            $this->iconCodes = $matches[3];
            foreach ($matches[2] as $str) {
                $this->iconIdentifiers[] = $iconClassPrefix . $matches[1][0] . $str;
            }
            return true;
        }

        return false;
    }
}
