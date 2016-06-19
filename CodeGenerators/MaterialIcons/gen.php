<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'MaterialIcons',
    'MaterialIcons-Regular.ttf',
    'MI',
    'Material Icons by Google, v2.2.3 https://design.google.com/icons',
    'Material Icons'
);

$iconIdentifiers = [];
$iconNames = [];
$iconCodes = [];

foreach (file('codepoints') as $line) {
    if (preg_match("#^([^ ]+) ([0-9a-f]+)#", $line, $matches)) {
        $iconNames[] = $matches[1];
        $iconCodes[] = $matches[2];
        $iconIdentifiers[] = $matches[1];
    }
}

$generator->setIcons($iconIdentifiers, $iconNames, $iconCodes);
$generator->generate();
