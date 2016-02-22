<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'FoundationIcons';
$fontDescription    = 'Foundation Icon Fonts 3 http://zurb.com/playground/foundation-icon-fonts-3';
$iconTypePrefix     = 'FI';
$fontFile           = 'foundation-icons.ttf';
$fontName           = 'fontcustom';

generatorFromCSS('foundation-icons.css', 'fi');
