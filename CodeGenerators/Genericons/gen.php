<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Genericons',
    'Genericons.ttf',
    'Genericon',
    'Genericons v3.4.1 http://genericons.com'
);

$generator->generateFromCssFile('genericons.css', 'genericon');
