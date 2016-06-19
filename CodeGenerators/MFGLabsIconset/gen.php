<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'MFGLabsIconset',
    'mfglabsiconset-webfont.ttf',
    'MFGLabs',
    'MFG Labs iconset v1.0 http://mfglabs.github.io/mfglabs-iconset',
    'MFG Labs Iconset'
);

$generator->generateFromCssFile('mfglabs_iconset.css', 'icon');
