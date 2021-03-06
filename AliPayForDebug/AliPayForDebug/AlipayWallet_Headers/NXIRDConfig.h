//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class NSDate, NSString;
@protocol APConfigService;

@interface NXIRDConfig : NSObject <APConfigObserverProtocol>
{
    id <APConfigService> _configService;
    NSDate *_appModeBeginTime;
    NSString *_enableMutipleDebugAppValue;
}

@property(copy, nonatomic) NSString *enableMutipleDebugAppValue; // @synthesize enableMutipleDebugAppValue=_enableMutipleDebugAppValue;
@property(retain, nonatomic) NSDate *appModeBeginTime; // @synthesize appModeBeginTime=_appModeBeginTime;
@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
- (void).cxx_destruct;
- (_Bool)enableTemplateApp;
- (_Bool)enableNebulaTAHandle;
- (_Bool)enableMutipleDebugApp;
- (id)stringValue:(id)arg1;
- (id)dicValue:(id)arg1;
- (double)preferConfigWaitTime;
- (_Bool)enableTinyModeSwitch;
- (double)preferExpiredTime;
- (_Bool)enablePreferApplist;
- (_Bool)enableDebugRpc;
- (_Bool)enableNebulaDebugMode;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

