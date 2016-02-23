#import <IconFontsKit/IFIcon.h>

/// Meteocons icon types.
typedef NS_ENUM(IFIconType, IFMeteoconsType) {
    /// Identifier: "icon-windy-rain-inv"
    IFMeteoconsWindyRainInv                        = 0xe800,
    /// Identifier: "icon-snow-inv"
    IFMeteoconsSnowInv                             = 0xe801,
    /// Identifier: "icon-snow-heavy-inv"
    IFMeteoconsSnowHeavyInv                        = 0xe802,
    /// Identifier: "icon-hail-inv"
    IFMeteoconsHailInv                             = 0xe803,
    /// Identifier: "icon-clouds-inv"
    IFMeteoconsCloudsInv                           = 0xe804,
    /// Identifier: "icon-clouds-flash-inv"
    IFMeteoconsCloudsFlashInv                      = 0xe805,
    /// Identifier: "icon-temperature"
    IFMeteoconsTemperature                         = 0xe806,
    /// Identifier: "icon-compass"
    IFMeteoconsCompass                             = 0xe807,
    /// Identifier: "icon-na"
    IFMeteoconsNa                                  = 0xe808,
    /// Identifier: "icon-celcius"
    IFMeteoconsCelcius                             = 0xe809,
    /// Identifier: "icon-fahrenheit"
    IFMeteoconsFahrenheit                          = 0xe80a,
    /// Identifier: "icon-clouds-flash-alt"
    IFMeteoconsCloudsFlashAlt                      = 0xe80b,
    /// Identifier: "icon-sun-inv"
    IFMeteoconsSunInv                              = 0xe80c,
    /// Identifier: "icon-moon-inv"
    IFMeteoconsMoonInv                             = 0xe80d,
    /// Identifier: "icon-cloud-sun-inv"
    IFMeteoconsCloudSunInv                         = 0xe80e,
    /// Identifier: "icon-cloud-moon-inv"
    IFMeteoconsCloudMoonInv                        = 0xe80f,
    /// Identifier: "icon-cloud-inv"
    IFMeteoconsCloudInv                            = 0xe810,
    /// Identifier: "icon-cloud-flash-inv"
    IFMeteoconsCloudFlashInv                       = 0xe811,
    /// Identifier: "icon-drizzle-inv"
    IFMeteoconsDrizzleInv                          = 0xe812,
    /// Identifier: "icon-rain-inv"
    IFMeteoconsRainInv                             = 0xe813,
    /// Identifier: "icon-windy-inv"
    IFMeteoconsWindyInv                            = 0xe814,
    /// Identifier: "icon-sunrise"
    IFMeteoconsSunrise                             = 0xe815,
    /// Identifier: "icon-sun"
    IFMeteoconsSun                                 = 0xe816,
    /// Identifier: "icon-moon"
    IFMeteoconsMoon                                = 0xe817,
    /// Identifier: "icon-eclipse"
    IFMeteoconsEclipse                             = 0xe818,
    /// Identifier: "icon-mist"
    IFMeteoconsMist                                = 0xe819,
    /// Identifier: "icon-wind"
    IFMeteoconsWind                                = 0xe81a,
    /// Identifier: "icon-snowflake"
    IFMeteoconsSnowflake                           = 0xe81b,
    /// Identifier: "icon-cloud-sun"
    IFMeteoconsCloudSun                            = 0xe81c,
    /// Identifier: "icon-cloud-moon"
    IFMeteoconsCloudMoon                           = 0xe81d,
    /// Identifier: "icon-fog-sun"
    IFMeteoconsFogSun                              = 0xe81e,
    /// Identifier: "icon-fog-moon"
    IFMeteoconsFogMoon                             = 0xe81f,
    /// Identifier: "icon-fog-cloud"
    IFMeteoconsFogCloud                            = 0xe820,
    /// Identifier: "icon-fog"
    IFMeteoconsFog                                 = 0xe821,
    /// Identifier: "icon-cloud"
    IFMeteoconsCloud                               = 0xe822,
    /// Identifier: "icon-cloud-flash"
    IFMeteoconsCloudFlash                          = 0xe823,
    /// Identifier: "icon-cloud-flash-alt"
    IFMeteoconsCloudFlashAlt                       = 0xe824,
    /// Identifier: "icon-drizzle"
    IFMeteoconsDrizzle                             = 0xe825,
    /// Identifier: "icon-rain"
    IFMeteoconsRain                                = 0xe826,
    /// Identifier: "icon-windy"
    IFMeteoconsWindy                               = 0xe827,
    /// Identifier: "icon-windy-rain"
    IFMeteoconsWindyRain                           = 0xe828,
    /// Identifier: "icon-snow"
    IFMeteoconsSnow                                = 0xe829,
    /// Identifier: "icon-snow-alt"
    IFMeteoconsSnowAlt                             = 0xe82a,
    /// Identifier: "icon-snow-heavy"
    IFMeteoconsSnowHeavy                           = 0xe82b,
    /// Identifier: "icon-hail"
    IFMeteoconsHail                                = 0xe82c,
    /// Identifier: "icon-clouds"
    IFMeteoconsClouds                              = 0xe82d,
    /// Identifier: "icon-clouds-flash"
    IFMeteoconsCloudsFlash                         = 0xe82e,
};

/*!
 * Meteocons: free weather icons, v1.0 http://www.alessioatzeni.com/meteocons
 */
@interface IFMeteocons : IFIcon
@end
