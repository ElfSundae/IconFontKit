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
#import <JTSImageViewController/JTSImageViewController.h>
#import "MyFontIcons.h"

@interface ExplorerViewController ()
<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UISearchBarDelegate,
JTSImageViewControllerDismissalDelegate, UIActionSheetDelegate>
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) UISearchBar *searchBar;
@property (nonatomic, strong) NSMutableArray *icons;
@property (nonatomic, strong) NSArray *allIcons;
@property (nonatomic, strong) NSArray *fontClasses;
@property (nonatomic) NSUInteger selectedFontIndex;

- (UIButton *)titleButton;
@end

@implementation ExplorerViewController

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.title = @"Explorer";
        self.tabBarItem.image = [IFFontAwesome imageWithType:IFFASearch color:nil fontSize:26];
        self.icons = [NSMutableArray array];
        self.fontClasses = @[[IFFontAwesome class],
                             [MyFontIcons class],
                             [IFOcticons class],
                             [IFFoundationIcons class],
                             [IFIonicons class],
                             [IFMaterialDesignIcons class],
                             [IFElusiveIcons class],
                             [IFMaterialIcons class],
                             [IFZocialButtons class],
                             [IFTypicons class],
                             [IFOpenIconic class],
                             [IFMetrizeIcons class],
                             [IFMeteocons class],
                             [IFMFGLabsIconset class],
                             [IFLineariconsFree class],
                             [IFIcoMoonFree class],
                             ];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button addTarget:self action:@selector(titleButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.titleView = button;
    
    UICollectionViewFlowLayout *collectionLayout = [[UICollectionViewFlowLayout alloc] init];
    collectionLayout.sectionInset = UIEdgeInsetsMake(0, 10.0, 0, 10.0);
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
    
    [self reloadIcons];
}

- (void)viewWillLayoutSubviews
{
    self.searchBar.frame = CGRectMake(0, self.navigationController.navigationBar.frame.origin.y + self.navigationController.navigationBar.frame.size.height, self.view.frame.size.width, 44);
    self.collectionView.frame = CGRectMake(0, self.view.bounds.origin.y + 44, self.view.bounds.size.width, self.view.bounds.size.height - 44);
}

- (UIButton *)titleButton
{
    return (UIButton *)self.navigationItem.titleView;
}

- (void)setSelectedFontIndex:(NSUInteger)index
{
    if (_selectedFontIndex != index && index < self.fontClasses.count) {
        _selectedFontIndex = index;
        
        if (self.isViewLoaded) {
            [self reloadIcons];
            [self searchWithKeyword:self.searchBar.text];
        }
    }
}

- (void)titleButtonTapped:(UIButton *)button
{
    UIActionSheet *sheet = [[UIActionSheet alloc] initWithTitle:@"Select Icon Fonts" delegate:self cancelButtonTitle:nil destructiveButtonTitle:nil otherButtonTitles: nil];
    for (Class cls in self.fontClasses) {
        [sheet addButtonWithTitle:NSStringFromClass(cls)];
    }
    [sheet addButtonWithTitle:@"Cancel"];
    sheet.cancelButtonIndex = sheet.numberOfButtons - 1;
    sheet.tag = 100;
    [sheet showFromTabBar:self.tabBarController.tabBar];
    
    [self setNavigationTitleWithFontSelectorExpanded:YES];
}

- (void)reloadIcons
{
    Class FontClass = self.fontClasses[self.selectedFontIndex];
    
    [self.icons removeAllObjects];
    
    NSDictionary *allIcons = [FontClass performSelector:@selector(allIcons)];
    NSArray *sortedIdentifiers = [[allIcons allKeys] sortedArrayUsingSelector:@selector(compare:)];
    for (NSString *identifier in sortedIdentifiers) {
        NSString *code = allIcons[identifier];
        IFIcon *icon = [FontClass performSelector:@selector(iconWithCode:fontSize:) withObject:code withObject:@(50.0)];
        if (icon) {
            [icon setValue:identifier forKey:@"_identifier"];
            NSMutableParagraphStyle *paragraphStyle = [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
            paragraphStyle.alignment = NSTextAlignmentCenter;
            [icon addAttribute:NSParagraphStyleAttributeName value:paragraphStyle];
            [self.icons addObject:icon];            
        }
    }
    self.allIcons = [self.icons copy];
    
    [self setNavigationTitleWithFontSelectorExpanded:NO];
}

- (void)setNavigationTitleWithFontSelectorExpanded:(BOOL)fontSelectorExpanded
{
    CGFloat fontSize = [UIFont buttonFontSize];
    NSMutableAttributedString *title = [[NSMutableAttributedString alloc] initWithString:[NSStringFromClass(self.fontClasses[self.selectedFontIndex]) stringByAppendingString:@" "]
                                                                              attributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:fontSize],
                                                                                           NSForegroundColorAttributeName: [UIColor blackColor]}];
    IFFontAwesome *icon = [IFFontAwesome iconWithType:(fontSelectorExpanded ? IFFAArrowCircleUp : IFFAArrowCircleDown) fontSize:fontSize + 2 color:[UIColor purpleColor]];
    [title appendAttributedString:icon.attributedString];
    NSMutableAttributedString *highlightedTitle = [title mutableCopy];
    [highlightedTitle addAttribute:NSForegroundColorAttributeName value:[UIColor colorWithWhite:0.4 alpha:1.0] range:NSMakeRange(0, highlightedTitle.length)];
    if (fontSelectorExpanded) {
        [self.titleButton setAttributedTitle:highlightedTitle forState:UIControlStateNormal];
    } else {
        [self.titleButton setAttributedTitle:title forState:UIControlStateNormal];
    }
    [self.titleButton setAttributedTitle:highlightedTitle forState:UIControlStateSelected];
    [self.titleButton setAttributedTitle:highlightedTitle forState:UIControlStateHighlighted];
    [self.titleButton sizeToFit];
}

- (void)searchWithKeyword:(NSString *)keyword
{
    keyword || (keyword = @"");
    keyword = [keyword stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    if (keyword.length == 0) {
        [self reloadIcons];
    } else {
        self.icons = [self.allIcons mutableCopy];
        [self.icons filterUsingPredicate:[NSPredicate predicateWithFormat:@"%K contains[cd] %@", @"identifier", keyword]];
    }
    [self.collectionView reloadData];
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

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    UICollectionViewFlowLayout *layout = (UICollectionViewFlowLayout *)collectionViewLayout;
    CGFloat maxWidth = collectionView.frame.size.width - layout.sectionInset.left - layout.sectionInset.right;
    return [ExplorerIconCell sizeForIcon:self.icons[indexPath.row] maxWidth:maxWidth];
}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    [self.searchBar resignFirstResponder];
}

- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath
{
    ExplorerIconCell *cell = (ExplorerIconCell *)[collectionView cellForItemAtIndexPath:indexPath];
    IFIcon *icon = [self.icons[indexPath.row] copy];
    icon.fontSize = fmin(self.view.frame.size.width, self.view.frame.size.height) * 0.75;
    icon.color = [UIColor colorWithRed:(CGFloat)arc4random()/UINT_MAX green:(CGFloat)arc4random()/UINT_MAX blue:(CGFloat)arc4random()/UINT_MAX alpha:1.f];
    
    JTSImageInfo *imageInfo = [[JTSImageInfo alloc] init];
    imageInfo.image = [icon imageWithSize:icon.suggestedSize];
    imageInfo.referenceView = cell.iconLabel.superview;
    imageInfo.referenceRect = cell.iconLabel.frame;
    JTSImageViewController *imageViewController = [[JTSImageViewController alloc] initWithImageInfo:imageInfo
                                                                                               mode:JTSImageViewControllerMode_Image
                                                                                    backgroundStyle:JTSImageViewControllerBackgroundOption_Blurred];
    imageViewController.dismissalDelegate = self;
    [imageViewController showFromViewController:self.tabBarController transition:JTSImageViewControllerTransition_FromOriginalPosition];
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - JTSImageViewController Delegate

- (void)imageViewerDidDismiss:(JTSImageViewController *)imageViewer
{
    NSIndexPath *selectedIndexPath = [self.collectionView indexPathsForSelectedItems].firstObject;
    if (selectedIndexPath) {
        [self.collectionView deselectItemAtIndexPath:selectedIndexPath animated:YES];
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - UIActionSheet Delegate

- (void)actionSheet:(UIActionSheet *)actionSheet didDismissWithButtonIndex:(NSInteger)buttonIndex
{
    if (100 == actionSheet.tag) {
        if (buttonIndex < self.fontClasses.count && buttonIndex != self.selectedFontIndex) {
            self.selectedFontIndex = buttonIndex;
        } else {
            [self setNavigationTitleWithFontSelectorExpanded:NO];
        }
    }
}

@end
