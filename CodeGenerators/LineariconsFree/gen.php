<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'LineariconsFree';
$fontDescription    = 'Linearicons Free Version, v1.0.0 https://linearicons.com/free';
$iconTypePrefix     = 'LinearFree';
$fontFile           = 'Linearicons-Free.ttf';

generatorFromCSS('style.css', 'lnr');
