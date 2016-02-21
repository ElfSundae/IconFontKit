<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Ionicons';
$fontDescription    = 'Ionicons v2.0.1 http://ionicons.com';
$iconTypePrefix     = 'Ion';
$fontFile           = 'ionicons.ttf';
$fontName           = 'Ionicons';

parseCSS('ionicons.css', 'ion');
CodeGenerator();
