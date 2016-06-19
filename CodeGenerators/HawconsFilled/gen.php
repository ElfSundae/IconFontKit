<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'HawconsFilled',
    'Hawcons-Filled.ttf',
    'HawconsFilled',
    'Hawcons, filled style, v1.0 http://hawcons.com'
);

$generator->generateFromCssFile('style.css', 'hawcons-filled');
