//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol NebulaAppProtocol <NSObject, NSCopying>
- (void)clearLastRefreshTime;
- (NSDictionary *)apiPermission;
- (NSDictionary *)thirdPlatformInfo;
- (void)removeIncrementalResource;
- (_Bool)needDownload;
- (_Bool)isIncremental;
- (_Bool)isInstalled;
- (NSString *)downloadUrl;
- (NSString *)downloadPath;
- (NSString *)unzipPath;
- (NSString *)tarPath;
- (NSString *)amrPath;
- (NSDictionary *)dictionary;
- (id)initWithDict:(NSDictionary *)arg1;
@end

