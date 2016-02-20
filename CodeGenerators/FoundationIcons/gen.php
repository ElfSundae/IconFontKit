<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'FoundationIcons';
$fontDescription    = 'Foundation Icon Fonts 3 http://zurb.com/playground/foundation-icon-fonts-3';
$iconTypePrefix     = 'FI';
$fontFile           = 'foundation-icons.ttf';
$fontName           = 'fontcustom';

$variables = file_get_contents('foundation-icons.css');
$variables = preg_replace_callback("#^\\.fi-[^,\\n]+,[^{]+({[^\\n]+})#im", function($matches) {
    return str_replace(',', $matches[1], $matches[0]);
}, $variables);
preg_match_all("#^\\.fi-([^:]+):[^\"]*\"\\\\([0-9a-f]+)#im", $variables, $matches);
$iconNames = $matches[1];
$iconCodes = $matches[2];
foreach ($matches[1] as $str) {
    $iconIdentifiers[] = 'fi-' . $str;
}

CodeGenerator();
