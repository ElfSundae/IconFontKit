<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'StreamlineFree';
$fontDescription    = 'Streamline Free Pack, v2, free iOS 8 vector icons, http://streamlineicons.com/free-icons.html';
$iconTypePrefix     = 'Streamline';
$fontFile           = 'StreamlineFree.ttf';

generatorFromCSS('style.css', 'sf');
