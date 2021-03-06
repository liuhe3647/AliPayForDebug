//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLTabBarViewController.h"

#import "H5ServiceDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class NSDictionary, NSString, UIView;

@interface BLLauncherController : BLTabBarViewController <UITabBarControllerDelegate, H5ServiceDelegate>
{
    NSDictionary *_params;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)doNotifycationShouldChangeTabbarStatusFromH5:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)subControllerNeedToExecutingTopView;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDict:(id)arg1;
- (id)initWithDict:(id)arg1 pageType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

