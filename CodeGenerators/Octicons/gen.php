<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Octicons',
    'octicons.ttf',
    'Octicon',
    'GitHub Octicons v4.3.0 https://octicons.github.com'
);

$generator->generateFromCssFile('octicons.css', 'octicon');
