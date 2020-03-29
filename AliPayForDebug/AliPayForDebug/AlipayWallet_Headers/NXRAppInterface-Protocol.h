//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVRAppInterfaceDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, NXRApp;

@protocol NXRAppInterface <RVRAppInterfaceDelegate>

@optional
- (_Bool)disableCancelHighPriorityTask;
- (_Bool)enableSyncUnzipPresetAmr;
- (NSDictionary *)presetAmrApps;
- (_Bool)enableForceDownloadCancel;
- (_Bool)isResApp:(NSString *)arg1;
- (_Bool)enableIgnorePresetVersion;
- (_Bool)enableLoadPkgResApps:(id *)arg1;
- (_Bool)enableLoadPubAppId:(NSString *)arg1 contextApp:(NXRApp *)arg2 version:(id *)arg3;
- (_Bool)enableStableReq;
- (NSString *)sceneForApp:(NSString *)arg1;
- (_Bool)enableCommonResourceDegrade:(NSString *)arg1;
- (NSArray *)permanentVersionsForApp:(NSString *)arg1 sceneType:(unsigned long long)arg2;
- (NXRApp *)findApp:(NSString *)arg1 version:(NSString *)arg2;
- (_Bool)supportNebulaApp:(NSString *)arg1 version:(NSString *)arg2 nebulaVersion:(id *)arg3;
- (_Bool)supportNebulaApp:(NSString *)arg1 version:(NSString *)arg2;
@end
