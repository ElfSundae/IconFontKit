<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'ZocialButtons';
$fontDescription    = 'ZocialButtons v1.2.0 http://zocial.smcllns.com';
$iconTypePrefix     = 'ZB';
$fontFile           = 'zocial.ttf';

parseCSS('zocial.css', 'zocial');
CodeGenerator();
