<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Dripicons',
    'dripicons.ttf',
    'Dripicon',
    "Dripicons v1.0 http://demo.amitjakhu.com/dripicons"
);

$generator->generateFromCssFile('webfont.css', 'icon');
