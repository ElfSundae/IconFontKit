<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'FontAwesome';
$fontDescription    = 'Font Awesome v4.5.0 http://fontawesome.io/icons';
$iconTypePrefix     = 'FA';
$fontFile           = 'FontAwesome.otf';

$variables = file_get_contents('_variables.scss');
preg_match_all('#^\\$fa-var-([^:]+):\\s+\"\\\\([0-9a-f]+)#im', $variables, $matches);
$iconNames = $matches[1];
$iconCodes = $matches[2];
foreach ($matches[1] as $str) {
    $iconIdentifiers[] = 'fa-' . $str;
}

CodeGenerator();
