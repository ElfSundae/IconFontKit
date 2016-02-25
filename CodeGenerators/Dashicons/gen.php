<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Dashicons';
$fontDescription    = 'Dashicons v3.8 https://developer.wordpress.org/resource/dashicons/';
$iconTypePrefix     = 'Dash';
$fontFile           = 'dashicons.ttf';

generatorFromCSS('dashicons.css', 'dashicons');
