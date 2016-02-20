//
//  ExplorerIconCell.m
//  IconFontsKitExample
//
//  Created by Elf Sundae on 16/2/20.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import "ExplorerIconCell.h"

@implementation ExplorerIconCell

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.iconLabel = [[UILabel alloc] initWithFrame:CGRectZero];
        [self.contentView addSubview:self.iconLabel];
        
        self.iconIdentifierLabel = [[UILabel alloc] initWithFrame:CGRectZero];
        self.iconIdentifierLabel.numberOfLines = 0;
        self.iconIdentifierLabel.font = [UIFont systemFontOfSize:15.0];
        self.iconIdentifierLabel.lineBreakMode = NSLineBreakByCharWrapping;
        self.iconIdentifierLabel.textAlignment = NSTextAlignmentCenter;
        [self.contentView addSubview:self.iconIdentifierLabel];
    }
    return self;
}

- (void)setSelected:(BOOL)selected
{
    [super setSelected:selected];
    self.icon.color = (selected ? [UIColor redColor] : nil);
    self.iconLabel.attributedText = self.icon.attributedString;
    self.iconIdentifierLabel.textColor = (selected ? [UIColor colorWithRed:0.191 green:0.415 blue:1.000 alpha:1.000] : nil);
}

- (void)setIcon:(IFIcon *)icon
{
    _icon = icon;
    self.iconLabel.attributedText = _icon.attributedString;
    self.iconIdentifierLabel.text = _icon.identifier;
    [self setNeedsLayout];
}

- (void)layoutSubviews
{
    [self.iconIdentifierLabel sizeToFit];
    self.iconIdentifierLabel.frame = CGRectMake(0, self.contentView.frame.size.height - self.iconIdentifierLabel.frame.size.height, self.contentView.frame.size.width, self.iconIdentifierLabel.frame.size.height);
    self.iconLabel.frame = CGRectMake(0, 0, self.contentView.frame.size.width, self.contentView.frame.size.height - self.iconIdentifierLabel.frame.size.height);
}

@end
