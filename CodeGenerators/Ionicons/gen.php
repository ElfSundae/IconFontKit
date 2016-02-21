<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Ionicons';
$fontDescription    = 'Ionicons v2.0.1 http://ionicons.com';
$iconTypePrefix     = 'Ion';
$fontFile           = 'ionicons.ttf';
$fontName           = 'Ionicons';

$variables = file_get_contents('ionicons.css');
$variables = preg_replace_callback("#^\\.ion-[^,\\n]+,[^{]+({[^\\n]+})#im", function($matches) {
    return str_replace(',', $matches[1], $matches[0]);
}, $variables);
preg_match_all("#^\\.ion-([^:]+):[^\"}]*\"\\\\([0-9a-f]+)#im", $variables, $matches);
$iconNames = $matches[1];
$iconCodes = $matches[2];
foreach ($matches[1] as $str) {
    $iconIdentifiers[] = 'ion-' . $str;
}

CodeGenerator();
