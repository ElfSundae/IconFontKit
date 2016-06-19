<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'IcoMoonFree',
    'IcoMoon-Free.ttf',
    'IMF',
    'IcoMoon Free Pack, v1.0.0 https://icomoon.io/#preview-free'
);

$generator->generateFromCssFile('style.css', 'imf');
