<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'OpenWebIcons',
    'openwebicons.ttf',
    'OpenWeb',
    'OpenWebIcons v1.4.0 http://pfefferle.github.io/openwebicons',
    'OpenWeb Icons'
);

$generator->generateFromCssFile('style.css', 'openwebicons');
