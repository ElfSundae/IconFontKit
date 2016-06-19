<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Stroke7Icons',
    'Pe-icon-7-stroke.ttf',
    'PE7S',
    'Stroke7Icons, v1.2, http://themes-pixeden.com/font-demos/7-stroke/index.html'
);

$generator->generateFromCssFile('pe-icon-7-stroke.css', 'pe-7s');
