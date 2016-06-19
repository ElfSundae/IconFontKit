<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Octicons';
$fontDescription    = 'GitHub Octicons v4.2.0 https://octicons.github.com';
$iconTypePrefix     = 'Octicon';
$fontFile           = 'octicons.ttf';

generatorFromCSS('octicons.css', 'octicon');
