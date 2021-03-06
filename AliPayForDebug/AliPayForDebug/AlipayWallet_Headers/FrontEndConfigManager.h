//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@interface FrontEndConfigManager : NSObject
{
    NSMutableDictionary *_scenario2ConfigMeta;
    NSMutableDictionary *_spm2Scenario;
    NSString *_uniqueId;
    NSString *_identificationCode;
    NSString *_tag;
    NSString *_configDictKey;
    NSString *_dimensionDictKey;
    NSString *_errorDictKey;
    NSString *_identificationCodeKey;
    long long _diversionType;
    long long _interval;
    _Bool _isRefreshing;
    long long _retryTimes;
    long long _retryInterval;
    NSDate *_lastRefreshDate;
    NSString *_localConfigSign;
    _Bool _updated;
    long long _status;
    long long _shouldDumpCnt;
    long long _realDumpCnt;
}

@property long long realDumpCnt; // @synthesize realDumpCnt=_realDumpCnt;
@property long long shouldDumpCnt; // @synthesize shouldDumpCnt=_shouldDumpCnt;
@property _Bool updated; // @synthesize updated=_updated;
@property long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)setScenarioKey:(id)arg1 forSpmA:(id)arg2;
- (void)buildIndexWith:(id)arg1 dimension:(id)arg2 error:(id)arg3;
- (void)updateConfigWithArray:(id)arg1;
- (id)createParamWithKey:(id)arg1 value:(id)arg2;
- (id)clearExpiredExp:(id)arg1;
- (void)buildRemoteLogDict:(id)arg1 withRequest:(id)arg2 andResponse:(id)arg3 andRpcStatus:(id)arg4 andReason:(long long)arg5 andLocalExps:(id)arg6;
- (void)getSystemConfig;
- (void)handleResponse:(id)arg1;
- (id)buildRequest;
- (_Bool)makeRpc:(int)arg1 WithReason:(long long)arg2;
- (void)refreshWithRetry:(long long)arg1 interval:(long long)arg2 reason:(long long)arg3;
- (_Bool)loadIdentificationCode;
- (_Bool)dumpIdentificationCode;
- (_Bool)checkIfNeedFetchWhenForeground;
- (_Bool)checkIfNeedFetchWhenLogin;
- (_Bool)reset;
- (void)trackDimension:(id)arg1 value:(id)arg2 scenarioKey:(id)arg3;
- (void)trackError:(id)arg1 subErrorType:(id)arg2 scenarioKey:(id)arg3;
- (void)trackError:(id)arg1 scenarioKey:(id)arg2;
- (id)getExtInfoForSpmA:(id)arg1;
- (void)fetchExpConfigWithReason:(long long)arg1;
- (id)experimentsWithSpmA:(id)arg1;
- (id)paramsForScenarioKey:(id)arg1;
- (_Bool)dump;
- (_Bool)load;
- (id)initWithUniqueId:(id)arg1 DiversionType:(long long)arg2;
- (id)init;

@end

