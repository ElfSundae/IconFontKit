<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Genericons';
$fontDescription    = 'Genericons v3.4.1 http://genericons.com';
$iconTypePrefix     = 'Genericons';
$fontFile           = 'Genericons.ttf';

generatorFromCSS('genericons.css', 'genericon');
