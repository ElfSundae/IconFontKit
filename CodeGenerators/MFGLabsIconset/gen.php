<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'MFGLabsIconset';
$fontDescription    = 'MFG Labs iconset v1.0 http://mfglabs.github.io/mfglabs-iconset';
$iconTypePrefix     = 'MFGLabs';
$fontFile           = 'mfglabsiconset-webfont.ttf';
$fontName           = 'MFG Labs Iconset';

generatorFromCSS('mfglabs_iconset.css', 'icon');
