<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Dripicons';
$fontDescription    = 'Dripicons v1.0 http://demo.amitjakhu.com/dripicons';
$iconTypePrefix     = 'Dripicon';
$fontFile           = 'dripicons.ttf';

generatorFromCSS('webfont.css', 'icon');
