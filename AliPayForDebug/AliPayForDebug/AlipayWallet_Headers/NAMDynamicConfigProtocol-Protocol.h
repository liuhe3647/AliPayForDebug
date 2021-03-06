//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol NAMDynamicConfigProtocol <NSObject>

@optional
- (id)clientConfigForKey:(NSString *)arg1 shortKey:(NSString *)arg2 error:(id *)arg3;
- (_Bool)callbackInHighPriorityAfterUnzip;
- (_Bool)enableAppPackageSourceLog;
- (_Bool)enableAppInfoSourceLog;
- (_Bool)enablePreDownloadWith4G:(NSString *)arg1;
- (_Bool)isPackageDowngradeSwitchOn;
- (_Bool)enableAsyncUnzipWhenLaunchingApps;
- (double)packageDowngradePrepareTimeLimit:(NSString *)arg1;
- (double)prepareTimeLimit:(NSString *)arg1;
- (_Bool)enablePreDownload:(NSString *)arg1;
- (NSDictionary *)resManifestSwitchers;
- (_Bool)forcedDownload;
- (unsigned long long)networkStatus;
- (NSString *)currentUserId;
- (_Bool)coverInstall;
- (NSString *)currentLanguage;
@end

