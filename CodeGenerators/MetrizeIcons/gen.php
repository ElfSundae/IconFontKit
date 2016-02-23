<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'MetrizeIcons';
$fontDescription    = 'Metrize Icons v1.0 http://www.alessioatzeni.com/metrize-icons';
$iconTypePrefix     = 'Metrize';
$fontFile           = 'Metrize-Icons.ttf';

generatorFromCSS('style.css', 'icon');
