<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'MaterialDesignIcons',
    'materialdesignicons-webfont.ttf',
    'MDI',
    'Material Design Icons v1.6.50 https://materialdesignicons.com',
    'Material Design Icons'
);

$generator->generateFromCssFile('materialdesignicons.css', 'mdi');
