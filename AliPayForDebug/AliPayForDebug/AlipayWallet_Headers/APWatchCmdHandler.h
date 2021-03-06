//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APWCSessionProtocal-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface APWatchCmdHandler : NSObject <APWCSessionProtocal>
{
    NSObject<OS_dispatch_queue> *_watch_queue;
    NSMutableDictionary *_watchInstructionMaps;
    NSString *_watchDeviceId;
    NSString *_watchDeviceModel;
}

@property(copy, nonatomic) NSString *watchDeviceModel; // @synthesize watchDeviceModel=_watchDeviceModel;
@property(copy, nonatomic) NSString *watchDeviceId; // @synthesize watchDeviceId=_watchDeviceId;
- (void).cxx_destruct;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)observeConfigKeyChanged;
- (void)sessionReachabilityDidChange;
- (void)didReceiveUserInfo:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)didReceiveMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleChangeCodeSwitchRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleWatchMsg:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleQueryQRPayResult:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleSyncQRPaySatusRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleDeviceIdRequestChangeCode:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleDeviceIdRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleUnbindChangeCodeMainAccountRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleUnbindChangeCodeRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleUnbindAppleWatchRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleSeedRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (id)replaceNILString:(id)arg1;
- (void)handleFundRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleRateListRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleChangeCodeBalanceRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleBalanceRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleWatchSwitchRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)syncBusCodeResult:(id)arg1;
- (void)handleQueryBusCodeResult:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleUpdateSelectedCardRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleBusCardListRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleBusCodeRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleBusCodeDetailRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleOptCodeRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)handleLoginRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2;
- (void)notifyAccountDidExit:(id)arg1;
- (void)notifyAccountDidLogin:(id)arg1;
- (void)prepareInstrunctions;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

