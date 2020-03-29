//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MACtlInterface <NSObject>
- (NSString *)getUtdId;
- (NSString *)getUserId;
- (NSString *)getCookieSessionId;
- (_Bool)fetchFilter;
- (_Bool)BackgroundFetch;

@optional
- (_Bool)bifrostNoDowngradeSwitchFromSetting;
- (void)closeIPv6Temporary;
- (void)changeNetLibray:(_Bool)arg1;
- (_Bool)UserInRadicalNetDetect;
- (_Bool)SmartHearbeatSwitch;
- (void)MAAccessDidRecvCmdListData:(NSData *)arg1;
@end
