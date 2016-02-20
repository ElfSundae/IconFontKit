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
<UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate>
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) UISearchBar *searchBar;
@property (nonatomic, strong) UISegmentedControl *segmentedControl;
@property (nonatomic, strong) NSMutableArray *icons;
@property (nonatomic, strong) NSArray *fullIcons;
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
    collectionLayout.itemSize = CGSizeMake(70, 90);
    self.collectionView = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:collectionLayout];
    self.collectionView.dataSource = self;
    self.collectionView.delegate = self;
    self.collectionView.backgroundColor = [UIColor whiteColor];
    [self.collectionView registerClass:[ExplorerIconCell class] forCellWithReuseIdentifier:@"cellID"];
    [self.view addSubview:self.collectionView];
    
    self.searchBar = [[UISearchBar alloc] initWithFrame:CGRectZero];
    self.searchBar.showsCancelButton = YES;
    self.searchBar.placeholder = @"Search Icons";
    self.searchBar.delegate = self;
    [self.view addSubview:self.searchBar];
    
    self.segmentedControl.selectedSegmentIndex = 0;
    [self.segmentedControl sendActionsForControlEvents:UIControlEventValueChanged];
}

- (void)viewWillLayoutSubviews
{
    self.searchBar.frame = CGRectMake(0, self.navigationController.navigationBar.frame.origin.y + self.navigationController.navigationBar.frame.size.height, self.view.frame.size.width, 44);
    self.collectionView.frame = CGRectMake(0, self.view.bounds.origin.y + 44, self.view.bounds.size.width, self.view.bounds.size.height - 44);
}

- (void)segmentedControlValueDidChange:(UISegmentedControl *)seg
{
    Class FontClass;
    switch (seg.selectedSegmentIndex) {
        default:
            FontClass = [IFFontAwesome class];
    }
    
    [self.icons removeAllObjects];
    
    NSDictionary *allIcons = [FontClass performSelector:@selector(allIcons)];
    NSArray *sortedIdentifiers = [[allIcons allKeys] sortedArrayUsingSelector:@selector(compare:)];
    for (NSString *identifier in sortedIdentifiers) {
        NSString *code = allIcons[identifier];
        IFIcon *icon = [FontClass performSelector:@selector(iconWithCode:fontSize:) withObject:code withObject:@(50.0)];
        [icon setValue:identifier forKey:@"_identifier"];
        NSMutableParagraphStyle *paragraphStyle = [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
        paragraphStyle.alignment = NSTextAlignmentCenter;
        [icon addAttribute:NSParagraphStyleAttributeName value:paragraphStyle];
        [self.icons addObject:icon];
    }
    self.fullIcons = [self.icons copy];
    [self.collectionView reloadData];
}

- (void)searchWithKeyword:(NSString *)keyword
{
    keyword || (keyword = @"");
    keyword = [keyword stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    self.icons = [self.fullIcons mutableCopy];
    [self.icons filterUsingPredicate:[NSPredicate predicateWithFormat:@"%K contains[cd] %@", @"identifier", keyword]];
    if (keyword.length == 0) {
        [self.segmentedControl sendActionsForControlEvents:UIControlEventValueChanged];
    } else {
        [self.collectionView reloadData];
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - UICollectionView Delegate

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

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    [self.searchBar resignFirstResponder];
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - UISearchBar Delegate

- (BOOL)searchBar:(UISearchBar *)searchBar shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
    NSString *keyword = [self.searchBar.text stringByReplacingCharactersInRange:range withString:text];
    [self searchWithKeyword:keyword];
    return YES;
}

- (void)searchBar:(UISearchBar *)searchBar textDidChange:(NSString *)searchText
{
    [self searchWithKeyword:searchText];
}

- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar
{
    [searchBar resignFirstResponder];
    [self searchWithKeyword:searchBar.text];
}

- (void)searchBarCancelButtonClicked:(UISearchBar *)searchBar
{
    [searchBar resignFirstResponder];
    self.searchBar.text = nil;
    [self searchWithKeyword:nil];
}

@end
