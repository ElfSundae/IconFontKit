//
//  ExplorerViewController.m
//  IconFontsKitExample
//
//  Created by Elf Sundae on 16/2/17.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import "ExplorerViewController.h"
#import <IconFontsKit/IconFontsKit.h>

@implementation ExplorerViewController

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.title = @"Explorer";
        self.tabBarItem.image = [IFFontAwesome imageWithType:IFFASearch color:nil fontSize:26];
    }
    return self;
}

@end
