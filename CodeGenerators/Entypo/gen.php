<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'Entypo',
    'Entypo.ttf',
    'Entypo',
    'Entypo+, carefully crafted premium pictograms by Daniel Bruce, http://www.entypo.com'
);

$generator->generateFromCssFile('style.css', 'entypo');
