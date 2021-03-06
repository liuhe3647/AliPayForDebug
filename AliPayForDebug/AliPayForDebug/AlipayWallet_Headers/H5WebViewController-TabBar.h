//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "H5WebViewController.h"

#import "AUSearchBarDelegate-Protocol.h"
#import "AUSearchTitleViewDelegate-Protocol.h"
#import "TabBarProtocol-Protocol.h"

@class H5TabbarManager, NSDictionary, NSMutableArray, NSString, UITabBar, UIViewController;

@interface H5WebViewController (TabBar) <AUSearchTitleViewDelegate, AUSearchBarDelegate, TabBarProtocol>
+ (void)load;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)nbViewWillDestroy;
- (void)h5tab_viewDidDisappear:(_Bool)arg1;
- (void)h5tab_viewWillDisappear:(_Bool)arg1;
- (void)h5tab_viewDidAppear:(_Bool)arg1;
- (void)h5tab_viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
@property(retain, nonatomic) H5TabbarManager *tabBarManager;
- (id)createTheTabBarManager;

// Remaining properties
@property(retain, nonatomic) NSDictionary *cachedChildViewControllers;
@property(nonatomic) __weak UIViewController *cachedParentViewController;
@property(readonly, nonatomic) unsigned long long childTabCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSMutableArray *delayTabBarTasks;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAlphaBackgroundColor;
@property(readonly, nonatomic) _Bool hasChildTab;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isChildTab;
@property(readonly, nonatomic) _Bool isNotVisibleWhenMultiTab;
@property(retain, nonatomic) UITabBar *placeholderTabBar;
@property(retain, nonatomic) NSString *selectedTag;
@property(readonly, nonatomic) UIViewController *selectedViewController;
@property(nonatomic) _Bool stopConstructAppearance;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITabBar *tabBar;
@end

