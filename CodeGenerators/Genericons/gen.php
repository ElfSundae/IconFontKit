<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Genericons';
$fontDescription    = 'Genericons v3.4.1 http://genericons.com';
$iconTypePrefix     = 'Genericon';
$fontFile           = 'Genericons.ttf';

generatorFromCSS('genericons.css', 'genericon');
