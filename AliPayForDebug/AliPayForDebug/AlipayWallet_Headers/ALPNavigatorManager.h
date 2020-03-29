//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class ALPNavigator, NSString;

@interface ALPNavigatorManager : NSObject <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    ALPNavigator *_navigator;
    ALPNavigator *_topNavigator;
}

+ (void)openUrl:(id)arg1 appendDTLog:(_Bool)arg2;
+ (void)openUrl:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) ALPNavigator *topNavigator; // @synthesize topNavigator=_topNavigator;
- (void).cxx_destruct;
- (void)registUrl4ViewController;
@property(readonly, nonatomic) ALPNavigator *navigator; // @synthesize navigator=_navigator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
