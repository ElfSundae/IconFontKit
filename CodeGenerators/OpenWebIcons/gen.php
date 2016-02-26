<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'OpenWebIcons';
$fontDescription    = 'OpenWebIcons v1.4.0 http://pfefferle.github.io/openwebicons';
$iconTypePrefix     = 'OpenWeb';
$fontFile           = 'openwebicons.ttf';
$fontName           = 'OpenWeb Icons';

generatorFromCSS('style.css', 'openwebicons');
