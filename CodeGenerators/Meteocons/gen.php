<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Meteocons';
$fontDescription    = 'Meteocons: free weather icons, v1.0 http://www.alessioatzeni.com/meteocons';
$iconTypePrefix     = 'Meteocons';
$fontFile           = 'meteocons.ttf';

generatorFromCSS('meteocons.css', 'icon');
