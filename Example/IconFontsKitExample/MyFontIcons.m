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
             @"facebook-squared":                   @"\ua100",
             @"chat":                               @"\ua101",
             @"emo-happy":                          @"\ua102",
             @"thumbs-up":                          @"\ua103",
             @"thumbs-up-alt":                      @"\ua104",
             @"link-ext":                           @"\ua105",
             @"volume-up":                          @"\ua106",
             @"cog-alt":                            @"\ua107",
             @"code":                               @"\ua108",
             };
}

@end
