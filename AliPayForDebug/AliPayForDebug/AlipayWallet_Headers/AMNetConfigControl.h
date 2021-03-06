//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MACtlInterface-Protocol.h"

@class NSString;

@interface AMNetConfigControl : NSObject <MACtlInterface>
{
}

+ (void)breakAMNetLongLink;
+ (void)getBifrostFlag:(id)arg1;
+ (id)getQOSInfo;
+ (id)getMTAG;
+ (_Bool)useBifrost;
+ (void)refreshIp;
- (_Bool)bifrostNoDowngradeSwitchFromSetting;
- (id)getUtdId;
- (id)getUserId;
- (id)getCookieSessionId;
- (_Bool)fetchFilter;
- (void)closeIPv6Temporary;
- (void)changeNetLibray:(_Bool)arg1;
- (_Bool)BackgroundFetch;
- (_Bool)UserInRadicalNetDetect;
- (_Bool)SmartHearbeatSwitch;
- (void)MAAccessDidRecvCmdListData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

