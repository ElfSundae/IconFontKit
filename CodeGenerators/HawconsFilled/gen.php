<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'HawconsFilled';
$fontDescription    = 'Hawcons, filled style, v1.0 http://hawcons.com';
$iconTypePrefix     = 'HawconsFilled';
$fontFile           = 'Hawcons-Filled.ttf';

generatorFromCSS('style.css', 'hawcons-filled');
