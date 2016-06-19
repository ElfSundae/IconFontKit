<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Devicons',
    'devicons.ttf',
    'DEV',
    "Devicons, v1.8.0, https://github.com/vorillaz/devicons"
);

$generator->generateFromCssFile('devicons.css', 'devicons');
