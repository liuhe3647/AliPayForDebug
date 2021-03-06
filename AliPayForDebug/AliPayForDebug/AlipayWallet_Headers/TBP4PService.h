//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class NSString;

@interface TBP4PService : NSObject <TBSDKServerDelegate>
{
}

+ (void)invalidClickUserTrackLogWithArgs:(id)arg1;
+ (void)endClickUserTrackLogsWithRedirectURL:(id)arg1 epid:(id)arg2 clickId:(id)arg3 aliTrackId:(id)arg4;
+ (void)beginClickUserTrackLogsWithEURL:(id)arg1 aurl:(id)arg2 epid:(id)arg3 clickId:(id)arg4 aliTrackId:(id)arg5;
+ (void)sendData:(id)arg1 ApiName:(id)arg2 TimeOut:(int)arg3 SuccessBlock:(CDUnknownBlockType)arg4 FailBlock:(CDUnknownBlockType)arg5;
+ (void)sendData:(id)arg1 AdType:(int)arg2 ApiType:(long long)arg3 TimeOut:(int)arg4 SuccessBlock:(CDUnknownBlockType)arg5 FailBlock:(CDUnknownBlockType)arg6;
+ (id)shared;
- (void)reformedRequestFailed:(id)arg1;
- (void)reformedRequestSuccess:(id)arg1;
- (id)getActionEventMethod:(int)arg1;
- (id)getCommitterEventMethod:(int)arg1;
- (id)getClickEventMethod:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

