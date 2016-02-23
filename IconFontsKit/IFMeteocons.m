#import "IFMeteocons.h"

@implementation IFMeteocons

+ (NSURL *)fontFileURL
{
    return [[[NSBundle mainBundle] resourceURL] URLByAppendingPathComponent:@"meteocons.ttf"];
}

+ (NSDictionary *)allIcons
{
    return @{
             @"icon-windy-rain-inv":                     @"\ue800",
             @"icon-snow-inv":                           @"\ue801",
             @"icon-snow-heavy-inv":                     @"\ue802",
             @"icon-hail-inv":                           @"\ue803",
             @"icon-clouds-inv":                         @"\ue804",
             @"icon-clouds-flash-inv":                   @"\ue805",
             @"icon-temperature":                        @"\ue806",
             @"icon-compass":                            @"\ue807",
             @"icon-na":                                 @"\ue808",
             @"icon-celcius":                            @"\ue809",
             @"icon-fahrenheit":                         @"\ue80a",
             @"icon-clouds-flash-alt":                   @"\ue80b",
             @"icon-sun-inv":                            @"\ue80c",
             @"icon-moon-inv":                           @"\ue80d",
             @"icon-cloud-sun-inv":                      @"\ue80e",
             @"icon-cloud-moon-inv":                     @"\ue80f",
             @"icon-cloud-inv":                          @"\ue810",
             @"icon-cloud-flash-inv":                    @"\ue811",
             @"icon-drizzle-inv":                        @"\ue812",
             @"icon-rain-inv":                           @"\ue813",
             @"icon-windy-inv":                          @"\ue814",
             @"icon-sunrise":                            @"\ue815",
             @"icon-sun":                                @"\ue816",
             @"icon-moon":                               @"\ue817",
             @"icon-eclipse":                            @"\ue818",
             @"icon-mist":                               @"\ue819",
             @"icon-wind":                               @"\ue81a",
             @"icon-snowflake":                          @"\ue81b",
             @"icon-cloud-sun":                          @"\ue81c",
             @"icon-cloud-moon":                         @"\ue81d",
             @"icon-fog-sun":                            @"\ue81e",
             @"icon-fog-moon":                           @"\ue81f",
             @"icon-fog-cloud":                          @"\ue820",
             @"icon-fog":                                @"\ue821",
             @"icon-cloud":                              @"\ue822",
             @"icon-cloud-flash":                        @"\ue823",
             @"icon-cloud-flash-alt":                    @"\ue824",
             @"icon-drizzle":                            @"\ue825",
             @"icon-rain":                               @"\ue826",
             @"icon-windy":                              @"\ue827",
             @"icon-windy-rain":                         @"\ue828",
             @"icon-snow":                               @"\ue829",
             @"icon-snow-alt":                           @"\ue82a",
             @"icon-snow-heavy":                         @"\ue82b",
             @"icon-hail":                               @"\ue82c",
             @"icon-clouds":                             @"\ue82d",
             @"icon-clouds-flash":                       @"\ue82e",
             };
}

@end
