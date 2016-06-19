<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'EvilIcons',
    'EvilIcons.ttf',
    'Evil',
    'Evil Icons, v1.8.0, http://evil-icons.io'
);

$generator->generateFromCssFile('style.css', 'ei');
