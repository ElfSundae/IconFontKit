#import "MyFontIcons.h"

@implementation MyFontIcons

+ (NSURL *)fontFileURL
{
    return [[[NSBundle mainBundle] resourceURL] URLByAppendingPathComponent:@"myfonticons.ttf"];
}

+ (NSDictionary *)allIcons
{
    return @{
             @"icon-camera":                             @"\uf100",
             @"icon-thumbs-up":                          @"\uf101",
             @"icon-thumbs-up-alt":                      @"\uf102",
             @"icon-smiley":                             @"\uf103",
             @"icon-verified":                           @"\uf104",
             @"icon-logo-gist":                          @"\uf105",
             @"icon-logo-github":                        @"\uf106",
             };
}

@end
