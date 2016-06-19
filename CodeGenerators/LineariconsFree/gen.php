<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'LineariconsFree',
    'Linearicons-Free.ttf',
    'LinearFree',
    'Linearicons Free Version, v1.0.0 https://linearicons.com/free'
);

$generator->generateFromCssFile('style.css', 'lnr');
