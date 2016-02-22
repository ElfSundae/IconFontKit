//
//  MyFontIcons.m
//  IconFontsKitExample
//
//  Created by Elf Sundae on 16/2/23.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import "MyFontIcons.h"

@implementation MyFontIcons

+ (NSURL *)fontFileURL
{
    return [[[NSBundle mainBundle] resourceURL] URLByAppendingPathComponent:@"myfonticons.ttf"];
}

// Optional becase the font name is the same as the filename of font.
//+ (NSString *)fontName
//{
//    return @"myfonticons";
//}

+ (NSDictionary *)allIcons
{
    return @{
             @"icon-facebook-squared":                   @"\ua100",
             @"icon-chat":                               @"\ua101",
             @"icon-emo-happy":                          @"\ua102",
             @"icon-thumbs-up":                          @"\ua103",
             @"icon-thumbs-up-alt":                      @"\ua104",
             @"icon-link-ext":                           @"\ua105",
             @"icon-volume-up":                          @"\ua106",
             @"icon-cog-alt":                            @"\ua107",
             @"icon-code":                               @"\ua108",
             };
}

@end
