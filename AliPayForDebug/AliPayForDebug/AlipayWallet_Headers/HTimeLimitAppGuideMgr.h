//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUV2PopTipView;

@interface HTimeLimitAppGuideMgr : NSObject
{
    AUV2PopTipView *_timeLimitAppGuideView;
    long long _minClickTimes;
    long long _maxExposureTimes;
}

+ (id)sharedMgr;
@property(nonatomic) long long maxExposureTimes; // @synthesize maxExposureTimes=_maxExposureTimes;
@property(nonatomic) long long minClickTimes; // @synthesize minClickTimes=_minClickTimes;
@property(nonatomic) __weak AUV2PopTipView *timeLimitAppGuideView; // @synthesize timeLimitAppGuideView=_timeLimitAppGuideView;
- (void).cxx_destruct;
- (id)clickCountWithRecordInfo:(id)arg1;
- (void)dismissPopTipView;
- (void)clearTimeLimitGuideInfo;
- (id)recordExposureAndGetSpmInfo;
- (_Bool)recordClickAppId:(id)arg1;
- (void)consumeAppId:(id)arg1;
- (id)refreshPopTipViewWithLastApp:(id)arg1 confirmAction:(CDUnknownBlockType)arg2 closeAction:(CDUnknownBlockType)arg3;
- (id)init;

@end
