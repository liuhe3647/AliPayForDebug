//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class DTRpcAsyncCaller, NSString, UIViewController;

@interface BarcodePayAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    NSString *_callbackAppId;
    NSString *_callbackUrl;
    NSString *_source;
    long long _tabIndex;
    UIViewController *_rootController;
    NSString *_tabName;
    DTRpcAsyncCaller *_caller;
}

@property(retain, nonatomic) DTRpcAsyncCaller *caller; // @synthesize caller=_caller;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(copy, nonatomic) NSString *callbackAppId; // @synthesize callbackAppId=_callbackAppId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)resetParamsIfFromSpecialSceneWithLaunchParam:(id)arg1;
- (_Bool)isLegalScheme:(id)arg1;
- (void)sendCTUIfNeed:(id)arg1;
- (void)recordFrom:(id)arg1;
- (void)asyncForceExit;
- (id)parseTabName:(id)arg1;
- (_Bool)startBusCodeApp;
- (_Bool)startScanApp;
- (void)gotoPaySetting;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)delayDisplaySuccPay:(id)arg1;
- (void)displayVC:(id)arg1 params:(id)arg2;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

