<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'MapIcons';
$fontDescription    = 'MapIcons v3.0.0 http://map-icons.com';
$iconTypePrefix     = 'MapIcons';
$fontFile           = 'map-icons.ttf';

generatorFromCSS('map-icons.css', 'map-icon');
