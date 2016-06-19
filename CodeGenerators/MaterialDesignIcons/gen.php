<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'MaterialDesignIcons';
$fontDescription    = 'Material Design Icons v1.6.50 https://materialdesignicons.com';
$iconTypePrefix     = 'MDI';
$fontFile           = 'materialdesignicons-webfont.ttf';
$fontName           = 'Material Design Icons';

generatorFromCSS('materialdesignicons.css', 'mdi');
