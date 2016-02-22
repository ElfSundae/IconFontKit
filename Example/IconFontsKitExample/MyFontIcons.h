//
//  MyFontIcons.h
//  IconFontsKitExample
//
//  Created by Elf Sundae on 16/2/23.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import <IconFontsKit/IFIcon.h>

typedef NS_ENUM(IFIconType, MyFontIconsType) {
    MFFacebookSquared                     = 0xa100,
    MFChat                                = 0xa101,
    MFEmoHappy                            = 0xa102,
    MFThumbsUp                            = 0xa103,
    MFThumbsUpAlt                         = 0xa104,
    MFLinkExt                             = 0xa105,
    MFVolumeUp                            = 0xa106,
    MFCogAlt                              = 0xa107,
    MFCode                                = 0xa108,
};

/*!
 * Demonstrator for using custom icon fonts.
 */
@interface MyFontIcons : IFIcon
@end
