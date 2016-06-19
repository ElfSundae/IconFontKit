<?php

chdir(dirname(__FILE__));
require '../CodeGenerator.php';

$generator = new CodeGenerator(
    'WeatherIcons',
    'weathericons-regular-webfont.ttf',
    'WeatherIcon',
    'WeatherIcons v2.0.10 http://erikflowers.github.io/weather-icons',
    'Weather Icons'
);

$generator->generateFromCssFile('weather-icons.css', 'wi');
