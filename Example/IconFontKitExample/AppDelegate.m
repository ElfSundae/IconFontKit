//
//  AppDelegate.m
//  IconFontKitExample
//
//  Created by Elf Sundae on 16/2/17.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import "AppDelegate.h"
#import "SampleViewController.h"
#import "ExplorerViewController.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor whiteColor];

    UITabBarController *tabBarController = [[UITabBarController alloc] init];
    tabBarController.viewControllers =
    @[[[UINavigationController alloc] initWithRootViewController:[[SampleViewController alloc] init]],
      [[UINavigationController alloc] initWithRootViewController:[[ExplorerViewController alloc] init]]];
    self.window.rootViewController = tabBarController;

    [self.window makeKeyAndVisible];
    return YES;
}

@end
