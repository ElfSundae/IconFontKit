<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'MapIcons',
    'map-icons.ttf',
    'MapIcon',
    'MapIcons v3.0.0 http://map-icons.com'
);

$generator->generateFromCssFile('map-icons.css', 'map-icon');
