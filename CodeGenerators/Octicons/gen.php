<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'Octicons';
$fontDescription    = 'GitHub Octicons v3.5.0 https://octicons.github.com';
$iconTypePrefix     = 'OI';
$fontFile           = 'octicons.ttf';

parseCSS('octicons.css', 'octicon');
CodeGenerator();
