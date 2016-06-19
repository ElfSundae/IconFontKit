<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'LigatureSymbols',
    'LigatureSymbols.ttf',
    'LS',
    'LigatureSymbols v2.11 http://kudakurage.com/ligature_symbols'
);

$generator->generateFromCssFile('style.css', 'ls');
