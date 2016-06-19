<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'HawconsStroke',
    'Hawcons-Stroke.ttf',
    'HawconsStroke',
    'Hawcons, stroke style, v1.0 http://hawcons.com'
);

$generator->generateFromCssFile('style.css', 'hawcons-stroke');
