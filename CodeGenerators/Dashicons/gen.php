<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Dashicons',
    'dashicons.ttf',
    'Dash',
    "Dashicons v3.8 https://developer.wordpress.org/resource/dashicons"
);

$generator->generateFromCssFile('dashicons.css', 'dashicons');
