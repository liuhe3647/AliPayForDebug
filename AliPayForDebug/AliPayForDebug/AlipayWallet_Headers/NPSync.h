//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncDownCallback-Protocol.h"

@class NSString;

@interface NPSync : NSObject <SyncDownCallback>
{
}

+ (id)sharedInstance;
- (void)onReceiveMessageNotification:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)refreshSyncSkey:(id)arg1 sKey:(id)arg2;
- (void)responseSyncNotify:(id)arg1;
- (void)unregisterSync:(id)arg1 productName:(id)arg2;
- (void)registerSync:(id)arg1 productName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
