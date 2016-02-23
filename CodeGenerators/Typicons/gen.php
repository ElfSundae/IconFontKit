<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Typicons';
$fontDescription    = 'Typicons v2.0.7 http://www.typicons.com';
$iconTypePrefix     = 'TYP';
$fontFile           = 'typicons.ttf';
$fontName           = 'Typicons';

generatorFromCSS('typicons.css', 'typcn');
