<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Stroke7Icons';
$fontDescription    = 'Stroke7Icons, v1.2, http://themes-pixeden.com/font-demos/7-stroke/index.html';
$iconTypePrefix     = 'PE7S';
$fontFile           = 'Pe-icon-7-stroke.ttf';

generatorFromCSS('pe-icon-7-stroke.css', 'pe-7s');
