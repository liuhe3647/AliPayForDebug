//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncUpCallback-Protocol.h"

@class HCSnapDelegate, HomeCardDataCenter, NSString;

@interface HomeCardHideCardDelegate : NSObject <SyncUpCallback>
{
    HomeCardDataCenter *_dataCenter;
    HCSnapDelegate *_snapDelegate;
}

- (void).cxx_destruct;
- (void)sendResultBizInfo:(id)arg1 syncUpState:(long long)arg2;
- (void)sendResultBiz:(id)arg1 msgID:(id)arg2 syncUpState:(long long)arg3;
- (void)hideCard:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)hideCard:(id)arg1;
- (void)hideAlert:(id)arg1;
- (void)setSnapDelegate:(id)arg1;
- (void)setHomeDataCenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
