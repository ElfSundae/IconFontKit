<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Ionicons',
    'ionicons.ttf',
    'II',
    'Ionicons v2.0.1 http://ionicons.com',
    'Ionicons'
);

$generator->generateFromCssFile('ionicons.css', 'ion');
