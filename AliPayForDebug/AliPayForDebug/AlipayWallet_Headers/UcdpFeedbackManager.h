//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UcdpFeedbackManager : NSObject
{
}

+ (id)sharedManager;
- (_Bool)shouldRpcReportWithBehavior:(id)arg1 positionBody:(id)arg2 creativeBody:(id)arg3 context:(id)arg4;
- (void)rpcReportWithBehavior:(id)arg1 positionBody:(id)arg2 creativeBody:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)spmReportWithBehavior:(id)arg1 positionBody:(id)arg2 creativeBody:(id)arg3 context:(id)arg4;
- (void)updateFatigueRule:(id)arg1 behavior:(id)arg2 context:(id)arg3;
- (void)updateFatigueRules:(id)arg1 behavior:(id)arg2 context:(id)arg3;
- (void)updateFatigueWithBehavior:(id)arg1 positionBody:(id)arg2 creativeBody:(id)arg3 context:(id)arg4;
- (void)feedbackWithReq:(id)arg1 positionBody:(id)arg2 creativeBody:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)feedback:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
