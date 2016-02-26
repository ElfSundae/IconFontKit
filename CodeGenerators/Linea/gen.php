<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Linea';
$fontDescription    = 'Linea, a free outline iconset designed by Dario Ferrando, v1.0 http://www.linea.io';
$iconTypePrefix     = 'Linea';
$fontFile           = 'Linea.ttf';

generatorFromCSS('style.css', 'linea');
