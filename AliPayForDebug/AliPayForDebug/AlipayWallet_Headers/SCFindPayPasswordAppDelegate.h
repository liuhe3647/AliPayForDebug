//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class ASH5ServiceDelegate, NSString, UIViewController;

@interface SCFindPayPasswordAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    NSString *_passwordType;
    NSString *_loginId;
    NSString *_userId;
    NSString *_urlScheme;
    NSString *_bizScene;
    _Bool _isFindSucess;
    UIViewController *_rootController;
    ASH5ServiceDelegate *_h5delegate;
}

@property(retain, nonatomic) ASH5ServiceDelegate *h5delegate; // @synthesize h5delegate=_h5delegate;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)monitorLoginIdMismatch;
- (void)monitorLogin;
- (void)loadWebViewWith:(id)arg1;
- (void)doSixPSWViewController;
- (void)existApp;
- (_Bool)isTheUserLogin;
- (void)applicationWillTerminate:(id)arg1;
- (void)restoreLoginApp;
- (void)findPasswordWithParams:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (id)rootControllerInApplication:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

