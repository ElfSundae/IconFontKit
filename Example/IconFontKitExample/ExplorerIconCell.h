//
//  ExplorerIconCell.h
//  IconFontKitExample
//
//  Created by Elf Sundae on 16/2/20.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <IconFontKit/IconFontKit.h>

@interface ExplorerIconCell : UICollectionViewCell
@property (nonatomic, strong) UILabel *iconLabel;
@property (nonatomic, strong) UILabel *iconIdentifierLabel;

@property (nonatomic, strong) IFIcon *icon;

+ (CGSize)sizeForIcon:(IFIcon *)icon maxWidth:(CGFloat)maxWidth;

@end
