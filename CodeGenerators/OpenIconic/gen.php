<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'OpenIconic';
$fontDescription    = 'Open Iconic: the open source sibling of Iconic, v1.1.1 https://useiconic.com/open';
$iconTypePrefix     = 'OpenIconic';
$fontFile           = 'open-iconic.ttf';

$cssFile = 'open-iconic.css';
$iconPrefix = 'oi';
$variables = file_get_contents($cssFile);
$variables = preg_replace_callback("#^\\.{$iconPrefix}\\[data-glyph=[^,\\n]+,[^{]+({[^}]+})#im", function($matches) {
    return str_replace(',', $matches[1], $matches[0]);
}, $variables);

if (preg_match_all("#^\\.{$iconPrefix}(\\[data-glyph=)([^\\]]+)\\][^\"'}]*[\"']\\\\([0-9a-f]{4})#im", $variables, $matches)) {
    $iconNames = $matches[2];
    $iconCodes = $matches[3];
    foreach ($matches[2] as $str) {
        $iconIdentifiers[] = $iconPrefix . '-' . $str;
    }
}

generator();
