<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Linea',
    'Linea.ttf',
    'Linea',
    'Linea, a free outline iconset designed by Dario Ferrando, v1.0 http://www.linea.io'
);

$generator->generateFromCssFile('style.css', 'linea');
