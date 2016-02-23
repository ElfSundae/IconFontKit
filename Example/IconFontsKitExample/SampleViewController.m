//
//  SampleViewController.m
//  IconFontsKitExample
//
//  Created by Elf Sundae on 16/2/17.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import "SampleViewController.h"
#import <IconFontsKit/IconFontsKit.h>

@implementation SampleViewController
{
    UIImageView *_imageView1;
    UIImageView *_imageView2;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.title = @"Sample";
        self.tabBarItem.image = [IFFontAwesome imageWithType:IFFACodiepie color:nil fontSize:26];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    UILabel *titleLabel = [[UILabel alloc] initWithFrame:CGRectZero];
    NSMutableAttributedString *titleString = [[NSMutableAttributedString alloc] initWithString:self.title attributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:17]}];
    IFFontAwesome *titleIcon = [IFFontAwesome iconWithType:IFFAMotorcycle fontSize:17 color:[UIColor purpleColor]];
    [titleString insertAttributedString:[titleIcon attributedString] atIndex:0];
    [titleString insertAttributedString:[[NSAttributedString alloc] initWithString:@" "] atIndex:1];
    titleLabel.attributedText = titleString;
    [titleLabel sizeToFit];
    self.navigationItem.titleView = titleLabel;
    
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithImage:[IFFontAwesome imageWithType:IFFACog color:nil fontSize:26]
                                                                             style:UIBarButtonItemStylePlain target:nil action:nil];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithImage:[IFFontAwesome imageWithType:IFFAShareAlt color:nil fontSize:26]
                                                                              style:UIBarButtonItemStylePlain target:nil action:nil];
    
    IFFontAwesome *container = [IFFontAwesome iconWithType:IFFASquareO fontSize:100.0 color:[UIColor colorWithWhite:0.88 alpha:1.0]];
    
    IFFontAwesome *twitterIcon = [IFFontAwesome iconWithType:IFFATwitter fontSize:60 color:[UIColor colorWithRed:0.25f green:0.60f blue:1.00f alpha:1.00f]];
    UIImage *twitter = [UIImage if_imageWithStackedIcons:@[container, twitterIcon] imageSize:CGSizeMake(100, 100)];
    UIImageView *twitterImageView = [[UIImageView alloc] initWithImage:twitter];
    [self.view addSubview:twitterImageView];
    _imageView1 = twitterImageView;
    
    IFFontAwesome *usbIcon = [IFFontAwesome iconWithType:IFFAUsb fontSize:40];
    IFFontAwesome *forbidden = [IFFontAwesome iconWithType:IFFABan fontSize:60.0 color:[[UIColor redColor] colorWithAlphaComponent:0.6]];
    container.drawingPositionAdjustment = UIOffsetMake(0, 4);
    UIImage *usb = [UIImage if_imageWithStackedIcons:@[container, usbIcon, forbidden] imageSize:CGSizeMake(100, 100)];
    UIImageView *usbImageView = [[UIImageView alloc] initWithImage:usb];
    [self.view addSubview:usbImageView];
    _imageView2 = usbImageView;
}

- (void)viewDidLayoutSubviews
{
    _imageView1.center = CGPointMake(self.view.center.x, _imageView1.frame.size.height / 2.0 + self.navigationController.navigationBar.frame.size.height + 40.0);
    _imageView2.center = CGPointMake(self.view.center.x, CGRectGetMaxY(_imageView1.frame) + _imageView2.frame.size.height / 2.0);
}

@end
