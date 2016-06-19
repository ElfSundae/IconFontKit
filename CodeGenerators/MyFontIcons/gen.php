<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'MyFontIcons',
    'myfonticons.ttf',
    'MF',
    "Demonstrator for using custom icon fonts.  \nhttps://github.com/ElfSundae/IconFontKit",
    null,
    false
);

$generator->setClassPrefix(null);
$generator->generateFromCssFile('myfonticons.css', 'icon');
