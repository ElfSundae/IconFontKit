<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Typicons',
    'typicons.ttf',
    'Typicon',
    'Typicons v2.0.7 http://www.typicons.com',
    'Typicons'
);

$generator->generateFromCssFile('typicons.css', 'typcn');
