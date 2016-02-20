//
//  ExplorerViewController.m
//  IconFontsKitExample
//
//  Created by Elf Sundae on 16/2/17.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import "ExplorerViewController.h"
#import <IconFontsKit/IconFontsKit.h>
#import "ExplorerIconCell.h"

@interface ExplorerViewController ()
<UICollectionViewDataSource>
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) UISearchBar *searchBar;
@property (nonatomic, strong) UISegmentedControl *segmentedControl;
@property (nonatomic, strong) NSMutableArray *icons;
@end

@implementation ExplorerViewController

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.title = @"Explorer";
        self.tabBarItem.image = [IFFontAwesome imageWithType:IFFASearch color:nil fontSize:26];
        self.icons = [NSMutableArray array];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.segmentedControl = [[UISegmentedControl alloc] initWithItems:@[@"FontAwesome"]];
    [self.segmentedControl addTarget:self action:@selector(segmentedControlValueDidChange:) forControlEvents:UIControlEventValueChanged];
    self.navigationItem.titleView = self.segmentedControl;
    
    UICollectionViewFlowLayout *collectionLayout = [[UICollectionViewFlowLayout alloc] init];
    collectionLayout.sectionInset = UIEdgeInsetsMake(0, 5.0, 0, 5.0);
    CGFloat iconWidth = (self.view.bounds.size.width / 4.0) - 10.0;
    collectionLayout.itemSize = CGSizeMake(iconWidth, iconWidth + 20);
    self.collectionView = [[UICollectionView alloc] initWithFrame:self.view.bounds collectionViewLayout:collectionLayout];
    self.collectionView.dataSource = self;
    self.collectionView.backgroundColor = [UIColor whiteColor];
    [self.collectionView registerClass:[ExplorerIconCell class] forCellWithReuseIdentifier:@"cellID"];
    [self.view addSubview:self.collectionView];
    
    self.segmentedControl.selectedSegmentIndex = 0;
    [self.segmentedControl sendActionsForControlEvents:UIControlEventValueChanged];
}

- (void)segmentedControlValueDidChange:(UISegmentedControl *)seg
{
    Class FontClass;
    switch (seg.selectedSegmentIndex) {
        default:
            FontClass = [IFFontAwesome class];
    }
    
    [self.icons removeAllObjects];
    for (NSString *code in [[FontClass performSelector:@selector(allIcons)] allValues]) {
        IFIcon *icon = [FontClass performSelector:@selector(iconWithCode:fontSize:) withObject:code withObject:@(50.0)];
        NSMutableParagraphStyle *paragraphStyle = [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
        paragraphStyle.alignment = NSTextAlignmentCenter;
        [icon addAttribute:NSParagraphStyleAttributeName value:paragraphStyle];
        [self.icons addObject:icon];
    }
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return self.icons.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    ExplorerIconCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"cellID" forIndexPath:indexPath];
    cell.icon = self.icons[indexPath.row];
    return cell;
}


@end
