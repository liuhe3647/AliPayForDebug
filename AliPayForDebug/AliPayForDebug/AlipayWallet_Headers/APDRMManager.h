//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APDRMBBManager, APDRMHHManager, NSString;
@protocol OS_dispatch_queue;

@interface APDRMManager : NSObject
{
    NSString *_productVersion;
    NSString *_rootPath;
    NSString *_metaInfoPath;
    NSObject<OS_dispatch_queue> *_workQueue;
    APDRMHHManager *_hhManager;
    APDRMBBManager *_bbManager;
}

+ (id)defaultManager;
@property(retain, nonatomic) APDRMBBManager *bbManager; // @synthesize bbManager=_bbManager;
@property(retain, nonatomic) APDRMHHManager *hhManager; // @synthesize hhManager=_hhManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSString *metaInfoPath; // @synthesize metaInfoPath=_metaInfoPath;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
- (void).cxx_destruct;
- (id)findAppBBById:(id)arg1;
- (id)findServiceBBWByName:(id)arg1;
- (void)ddBBWithResId:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (long long)loadBBWithResId:(id)arg1;
- (id)getLocalLoadedBBs;
- (void)markBBIgnored;
- (void)loadBBWhenStartApp;
- (_Bool)execHHWithError:(id *)arg1 type:(long long)arg2 scriptId:(id)arg3 background:(_Bool)arg4;
- (void)markHHIgnored;
- (void)setHHImmediatelyExecute:(_Bool)arg1;
- (id)getRollbackHHUUIDs;
- (id)getExecutionFailedHHUUIDs;
- (id)getExecutedHHUUIDs;
- (id)getHHUUIDs;
- (void)fillUnionParameters:(id)arg1;
- (_Bool)handleInfo:(id)arg1;
- (_Bool)needRestartApp;
- (void)onReachabilityChanged:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)resetEnvironmentAfterUpdate;
- (_Bool)initPath;
- (void)dealloc;
- (id)init;

@end

