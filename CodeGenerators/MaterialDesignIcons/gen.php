<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'MaterialDesignIcons';
$fontDescription    = 'Material Design Icons v1.4.57 https://materialdesignicons.com';
$iconTypePrefix     = 'Mdi';
$fontFile           = 'materialdesignicons-webfont.ttf';
$fontName           = 'Material Design Icons';

$variables = file_get_contents('materialdesignicons.css');
preg_match_all("#^\\.mdi-([^:]+):[^\"]*\"\\\\([0-9a-f]+)#im", $variables, $matches);
$iconNames = $matches[1];
$iconCodes = $matches[2];
foreach ($matches[1] as $str) {
    $iconIdentifiers[] = 'mdi-' . $str;
}

CodeGenerator();
