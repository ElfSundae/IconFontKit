<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'ElusiveIcons',
    'elusiveicons-webfont.ttf',
    'EL',
    'Elusive Icons v2.0.0 http://elusiveicons.com',
    'elusiveicons'
);

$generator->generateFromCssFile('elusive-icons.css', 'el');
