<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'IcoMoonFree';
$fontDescription    = 'IcoMoon Free Pack, v1.0.0 https://icomoon.io/#preview-free';
$iconTypePrefix     = 'IMF';
$fontFile           = 'IcoMoon-Free.ttf';

generatorFromCSS('style.css', 'imf');
