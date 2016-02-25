<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'HawconsStroke';
$fontDescription    = 'Hawcons, stroke style, v1.0 http://hawcons.com';
$iconTypePrefix     = 'HawconsStroke';
$fontFile           = 'Hawcons-Stroke.ttf';

generatorFromCSS('style.css', 'hawcons-stroke');
