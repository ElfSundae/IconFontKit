<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'FontAwesome';
$fontDescription    = 'Font Awesome v4.6.3 http://fontawesome.io/icons';
$iconTypePrefix     = 'FA';
$fontFile           = 'FontAwesome.otf';

generatorFromCSS('font-awesome.css', 'fa');
