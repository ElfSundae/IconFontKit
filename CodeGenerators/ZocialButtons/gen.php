<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'ZocialButtons',
    'zocial.ttf',
    'ZB',
    'ZocialButtons v1.2.0 http://zocial.smcllns.com'
);

$generator->generateFromCssFile('zocial.css', 'zocial');
