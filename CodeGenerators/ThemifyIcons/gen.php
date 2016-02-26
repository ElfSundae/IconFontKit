<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'ThemifyIcons';
$fontDescription    = 'ThemifyIcons, handcrafted icons that draw inspiration from Apple iOS 7, http://themify.me/themify-icons';
$iconTypePrefix     = 'Themify';
$fontFile           = 'themify.ttf';

generatorFromCSS('themify-icons.css', 'ti');
