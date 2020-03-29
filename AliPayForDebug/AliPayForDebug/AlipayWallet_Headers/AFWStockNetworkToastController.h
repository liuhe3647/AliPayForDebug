//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface AFWStockNetworkToastController : NSObject
{
    _Bool _isSuspended;
    int _curNetworkStatus;
    UIView *_matchView;
    NSString *_scene;
}

@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) int curNetworkStatus; // @synthesize curNetworkStatus=_curNetworkStatus;
@property(nonatomic) __weak UIView *matchView; // @synthesize matchView=_matchView;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)showNotReachToast;
- (void)showBackEndToast;
- (void)showToast;
- (void)anyRequestFailure:(id)arg1;
- (void)networkStatusDidChange:(id)arg1;
- (void)addObserver;
- (void)leaveToastScope;
- (void)enterToastScope;
- (id)initWithToastMatchView:(id)arg1 scene:(id)arg2;
- (void)dealloc;

@end
