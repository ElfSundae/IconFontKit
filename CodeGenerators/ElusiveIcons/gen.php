<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'ElusiveIcons';
$fontDescription    = 'Elusive Icons v2.0.0 http://elusiveicons.com';
$iconTypePrefix     = 'EL';
$fontFile           = 'elusiveicons-webfont.ttf';
$fontName           = 'elusiveicons';

generatorFromCSS('elusive-icons.css', 'el');
