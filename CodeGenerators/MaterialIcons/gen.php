<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'MaterialIcons';
$fontDescription    = 'Material Icons by Google, v2.2.0 https://design.google.com/icons';
$iconTypePrefix     = 'MI';
$fontFile           = 'MaterialIcons-Regular.ttf';
$fontName           = 'Material Icons';

foreach (file('codepoints') as $line) {
    if (preg_match("#^([^ ]+) ([0-9a-f]+)#", $line, $matches)) {
        $iconNames[] = $matches[1];
        $iconCodes[] = $matches[2];
        $iconIdentifiers[] = $matches[1];
    }
}

generator();
