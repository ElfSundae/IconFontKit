<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'MetrizeIcons',
    'Metrize-Icons.ttf',
    'Metrize',
    'Metrize Icons v1.0 http://www.alessioatzeni.com/metrize-icons'
);

$generator->generateFromCssFile('style.css', 'icon');
