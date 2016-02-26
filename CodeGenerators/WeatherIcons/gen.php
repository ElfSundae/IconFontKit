<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'WeatherIcons';
$fontDescription    = 'WeatherIcons v2.0.10 http://erikflowers.github.io/weather-icons';
$iconTypePrefix     = 'WeatherIcon';
$fontFile           = 'weathericons-regular-webfont.ttf';
$fontName           = 'Weather Icons';

generatorFromCSS('weather-icons.css', 'wi');
