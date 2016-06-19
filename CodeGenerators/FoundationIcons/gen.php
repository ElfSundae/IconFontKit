<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'FoundationIcons',
    'foundation-icons.ttf',
    'FI',
    'Foundation Icon Fonts 3 http://zurb.com/playground/foundation-icon-fonts-3',
    'fontcustom'
);

$generator->generateFromCssFile('foundation-icons.css', 'fi');
