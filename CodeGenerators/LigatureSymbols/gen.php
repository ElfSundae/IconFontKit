<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'LigatureSymbols';
$fontDescription    = 'LigatureSymbols v2.11 http://kudakurage.com/ligature_symbols';
$iconTypePrefix     = 'LS';
$fontFile           = 'LigatureSymbols.ttf';

generatorFromCSS('style.css', 'ls');
