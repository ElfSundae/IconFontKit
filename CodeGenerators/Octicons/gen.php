<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Octicons';
$fontDescription    = 'GitHub Octicons v3.5.0 https://octicons.github.com';
$iconTypePrefix     = 'Octicon';
$fontFile           = 'octicons.ttf';

$variables = file_get_contents('octicons.css');
$variables = preg_replace_callback("#^\\.octicon-[^,\\n]+,[^{]+({[^\\n]+})#im", function($matches) {
    return str_replace(',', $matches[1], $matches[0]);
}, $variables);
preg_match_all("#^\\.octicon-([^:]+):[^']*'\\\\([0-9a-f]+)#im", $variables, $matches);
$iconNames = $matches[1];
$iconCodes = $matches[2];
foreach ($matches[1] as $str) {
    $iconIdentifiers[] = 'octicon-' . $str;
}

CodeGenerator();
