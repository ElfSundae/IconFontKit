<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Devicons';
$fontDescription    = 'Devicons, v1.8.0, https://github.com/vorillaz/devicons';
$iconTypePrefix     = 'DEV';
$fontFile           = 'devicons.ttf';

generatorFromCSS('devicons.css', 'devicons');
