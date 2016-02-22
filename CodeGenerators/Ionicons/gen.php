<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Ionicons';
$fontDescription    = 'Ionicons v2.0.1 http://ionicons.com';
$iconTypePrefix     = 'II';
$fontFile           = 'ionicons.ttf';
$fontName           = 'Ionicons';

generatorFromCSS('ionicons.css', 'ion');
