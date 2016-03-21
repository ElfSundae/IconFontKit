<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'EvilIcons';
$fontDescription    = 'Evil Icons, v1.8.0, http://evil-icons.io';
$iconTypePrefix     = 'Evil';
$fontFile           = 'EvilIcons.ttf';

generatorFromCSS('style.css', 'ei');
