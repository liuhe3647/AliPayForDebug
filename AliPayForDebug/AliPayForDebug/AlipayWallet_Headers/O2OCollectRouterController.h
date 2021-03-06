//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCommonSchemeProtocol-Protocol.h"
#import "O2OPageViewControllerDelegate-Protocol.h"

@class AUBarButtonItem, NSArray, NSString, O2OCollectShopListViewController, O2OPageViewController, UIView, UIViewController;

@interface O2OCollectRouterController : O2OListViewController <O2OCommonSchemeProtocol, O2OPageViewControllerDelegate>
{
    O2OCollectShopListViewController *_collectShopListViewController;
    NSString *_jumpUrl;
    AUBarButtonItem *_rightShopInfoItem;
    UIView *_rightShopInfoButtonView;
    NSArray *_tabItems;
    UIViewController *_currentSubVC;
    O2OPageViewController *_pageView;
    AUBarButtonItem *_backBarButtonItem;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) AUBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) O2OPageViewController *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) UIViewController *currentSubVC; // @synthesize currentSubVC=_currentSubVC;
@property(retain, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
@property(retain, nonatomic) UIView *rightShopInfoButtonView; // @synthesize rightShopInfoButtonView=_rightShopInfoButtonView;
@property(retain, nonatomic) AUBarButtonItem *rightShopInfoItem; // @synthesize rightShopInfoItem=_rightShopInfoItem;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) O2OCollectShopListViewController *collectShopListViewController; // @synthesize collectShopListViewController=_collectShopListViewController;
- (void).cxx_destruct;
- (void)showRightShopInfoItem;
- (void)hideRightShopInfoItem;
- (void)didSelectMenuView:(id)arg1 selectedIndex:(unsigned long long)arg2 currentIndex:(unsigned long long)arg3 isScrolled:(_Bool)arg4;
- (id)pageSpm;
- (void)back;
- (id)pageViewConfig;
- (void)configSubVCInfo:(id)arg1 tabId:(id)arg2;
- (void)setTabItems:(id)arg1 selectedTabId:(id)arg2;
- (id)initialTabItemWithId:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

