<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Meteocons',
    'meteocons.ttf',
    'Meteocons',
    'Meteocons: free weather icons, v1.0 http://www.alessioatzeni.com/meteocons'
);

$generator->generateFromCssFile('meteocons.css', 'icon');
