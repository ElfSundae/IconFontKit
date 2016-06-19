<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'FontAwesome',
    'FontAwesome.otf',
    'FA',
    "Font Awesome v4.6.3 http://fontawesome.io/icons"
);

$generator->generateFromCssFile('font-awesome.css', 'fa');
