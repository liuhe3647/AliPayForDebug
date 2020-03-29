//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NBDebugPermission, NSString;

@interface NebulaDebug : NSObject
{
    NBDebugPermission *_permissionConfig;
    NSString *_debugAppId;
}

+ (id)shared;
@property(copy, nonatomic) NSString *debugAppId; // @synthesize debugAppId=_debugAppId;
@property(retain, nonatomic) NBDebugPermission *permissionConfig; // @synthesize permissionConfig=_permissionConfig;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setWeinreSwitch:(_Bool)arg1;
- (_Bool)weinreSwitch;
- (void)setHybridSwitch:(_Bool)arg1;
- (_Bool)hybridSwitch;
- (void)setShowIcon:(_Bool)arg1;
- (_Bool)showIcon;
- (void)setUserSource:(id)arg1;
- (id)userSource;
- (void)setWeinreServer:(id)arg1;
- (id)weinreServer;
- (void)setCustomServer:(id)arg1;
- (id)customServer;
- (void)resetSwitchSettings;
- (void)onReceiveLoginNotification:(id)arg1;
- (void)didDebugStatusUpdated:(id)arg1;
- (id)switchViewController;
- (void)handleSyncPushNotification:(id)arg1;
- (void)dealloc;
- (void)invokeHybridDebug;
- (id)initInPrivate;
- (id)init;

@end
