<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Entypo';
$fontDescription    = 'Entypo+, carefully crafted premium pictograms by Daniel Bruce, http://www.entypo.com';
$iconTypePrefix     = 'Entypo';
$fontFile           = 'Entypo.ttf';

generatorFromCSS('style.css', 'entypo');
