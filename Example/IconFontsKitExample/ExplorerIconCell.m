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
    self.iconIdentifierLabel.attributedText = [[NSAttributedString alloc] initWithString:_icon.identifier attributes:[[self class] identifierAttributes]];
    [self setNeedsLayout];
}

- (void)layoutSubviews
{
    [super layoutSubviews];
    
    CGRect iconFrame = CGRectZero;
    iconFrame.size = self.icon.suggestedSize;
    iconFrame.size.width = self.contentView.frame.size.width;
    iconFrame.size.height = fmin(iconFrame.size.height, self.contentView.frame.size.height);
    self.iconLabel.frame = iconFrame;
    
    self.iconIdentifierLabel.frame = CGRectMake(0, self.iconLabel.frame.size.height, self.contentView.frame.size.width, self.contentView.frame.size.height - self.iconLabel.frame.size.height);
}

+ (NSDictionary *)identifierAttributes
{
    static NSDictionary *__identifierAttributes;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableParagraphStyle *pStyle = [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
        pStyle.lineBreakMode = NSLineBreakByCharWrapping;
        pStyle.alignment = NSTextAlignmentCenter;
        __identifierAttributes = @{NSFontAttributeName: [UIFont systemFontOfSize:15.0],
                                   NSParagraphStyleAttributeName: pStyle};
        
    });
    return __identifierAttributes;
}

+ (CGSize)sizeForIcon:(IFIcon *)icon maxWidth:(CGFloat)maxWidth
{
    CGSize iconSize = icon.suggestedSize;
    CGFloat cellMaxWidth = fmin(maxWidth, fmax(iconSize.width, icon.fontSize + 8));
    CGSize identifierSize = [icon.identifier boundingRectWithSize:CGSizeMake(cellMaxWidth, CGFLOAT_MAX) options:NSStringDrawingUsesLineFragmentOrigin|NSStringDrawingUsesFontLeading attributes:[self identifierAttributes] context:nil].size;
    return CGSizeMake(fmax(iconSize.width, identifierSize.width), iconSize.height + identifierSize.height + 3.0);
}

@end
