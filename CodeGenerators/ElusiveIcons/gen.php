<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'ElusiveIcons';
$fontDescription    = 'Elusive Icons v2.0.0 http://elusiveicons.com';
$iconTypePrefix     = 'EL';
$fontFile           = 'elusiveicons-webfont.ttf';
$fontName           = 'elusiveicons';

$variables = file_get_contents('elusive-icons.css');
preg_match_all("#^\\.el-([^:]+):[^\"}]*\"\\\\([0-9a-f]+)#im", $variables, $matches);
$iconNames = $matches[1];
$iconCodes = $matches[2];
foreach ($matches[1] as $str) {
    $iconIdentifiers[] = 'el-' . $str;
}

CodeGenerator();
