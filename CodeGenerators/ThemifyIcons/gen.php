<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'ThemifyIcons',
    'themify.ttf',
    'Themify',
    'ThemifyIcons, handcrafted icons that draw inspiration from Apple iOS 7, http://themify.me/themify-icons'
);

$generator->generateFromCssFile('themify-icons.css', 'ti');
