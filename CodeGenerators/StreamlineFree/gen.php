<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'StreamlineFree',
    'StreamlineFree.ttf',
    'Streamline',
    'Streamline Free Pack, v2, free iOS 8 vector icons, http://streamlineicons.com/free-icons.html'
);

$generator->generateFromCssFile('style.css', 'sf');
