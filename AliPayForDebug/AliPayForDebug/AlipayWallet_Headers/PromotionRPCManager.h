//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PromotionRPCManager : NSObject
{
}

+ (void)feedbackBehavior:(id)arg1 spaceCode:(id)arg2 objectId:(id)arg3 mrpRuleId:(id)arg4 extInfos:(id)arg5 completionOnMainQueue:(CDUnknownBlockType)arg6;
+ (id)sharedInstance;
- (id)vipSpaceCodesFromRpcSpaceCodes:(id)arg1 vipSpaceCodeList:(id)arg2;
- (void)querySpaceInfoBySpaceCodes:(id)arg1 extInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetCDPSpaceDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)validResponseSpaceInfo:(id)arg1;
- (id)renewUUidId;
- (void)updateCDPSpaceData:(id)arg1 extInfo:(id)arg2 needNoti:(_Bool)arg3 controller:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
