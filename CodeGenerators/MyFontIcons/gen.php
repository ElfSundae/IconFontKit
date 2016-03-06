<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'MyFontIcons';
$fontDescription    = 'Demonstrator for using custom icon fonts. https://github.com/ElfSundae/IconFontKit';
$iconTypePrefix     = 'MF';
$fontFile           = 'myfonticons.ttf';
$moveToProject      = false;
$classPrefix        = '';

generatorFromCSS('myfonticons.css', 'icon');
