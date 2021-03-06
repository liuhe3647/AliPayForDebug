//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BRZAuthManagerDelagete-Protocol.h"
#import "BRZBleCenterDelagete-Protocol.h"
#import "BRZCmdHandleProtocol-Protocol.h"

@class BRZAuthManager, BRZOtaManager, CBCentralManager, CBPeripheral, NSMutableArray, NSString;
@protocol BRZCenterProtocol;

@interface Breeze : NSObject <BRZBleCenterDelagete, BRZAuthManagerDelagete, BRZCmdHandleProtocol>
{
    BRZAuthManager *_authManager;
    id <BRZCenterProtocol> _bleCenter;
    BRZOtaManager *_otaManager;
    CBPeripheral *_peripheral;
    NSString *_peripheralMac;
    NSMutableArray *_cmdHandlers;
    NSMutableArray *_delagetes;
}

@property(retain, nonatomic) NSMutableArray *delagetes; // @synthesize delagetes=_delagetes;
@property(retain, nonatomic) NSMutableArray *cmdHandlers; // @synthesize cmdHandlers=_cmdHandlers;
@property(copy, nonatomic) NSString *peripheralMac; // @synthesize peripheralMac=_peripheralMac;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) BRZOtaManager *otaManager; // @synthesize otaManager=_otaManager;
@property(retain, nonatomic) id <BRZCenterProtocol> bleCenter; // @synthesize bleCenter=_bleCenter;
@property(retain, nonatomic) BRZAuthManager *authManager; // @synthesize authManager=_authManager;
- (void).cxx_destruct;
- (void)enumerateBreezeDelagetes:(CDUnknownBlockType)arg1;
- (void)removeBreezeDelagete:(id)arg1;
- (void)addBreezeDelagete:(id)arg1;
- (void)handleCmd:(long long)arg1 data:(id)arg2 msgId:(long long)arg3 error:(id)arg4;
- (_Bool)canHandleCmd:(long long)arg1;
- (void)authManager:(id)arg1 doAuthResult:(long long)arg2 error:(id)arg3;
- (void)breezeBleCentral:(id)arg1 didReceivedData:(id)arg2 cmd:(unsigned long long)arg3 msgId:(int)arg4 error:(id)arg5;
- (void)breezeBleCentral:(id)arg1 didConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)breezeBleCentral:(id)arg1 didCentralStateChanged:(long long)arg2;
- (void)breezeBleCentral:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 extra:(id)arg5;
- (void)breezeBleCentral:(id)arg1 didPeripheralConnectStateChanged:(long long)arg2;
- (unsigned long long)sendAliPayData:(id)arg1;
- (unsigned long long)sendSystemData:(id)arg1;
- (unsigned long long)sendProvisionData:(id)arg1;
- (id)connectedPerpheralDeviceData;
- (id)connectedPeripheralMac;
- (void)notifyOtaPeripheralDisconnected:(id)arg1;
- (void)releaseOtaManager;
- (id)createOtaManager;
- (_Bool)isPeripheralReady;
@property(readonly, nonatomic) CBCentralManager *centralManage;
- (unsigned long long)sendData:(id)arg1 cmdObj:(id)arg2;
- (unsigned long long)sendData:(id)arg1 cmd:(unsigned long long)arg2;
- (unsigned long long)sendData:(id)arg1 needResponse:(_Bool)arg2;
- (void)disconnectPeripheral;
- (void)connectPeripheral:(id)arg1;
- (void)connectPeripheralUseMac:(id)arg1;
- (void)stopDiscoverPeripheral;
- (void)discoverPeripheral;
- (void)initializeMockupMode:(_Bool)arg1;
- (id)initWithMockupMode:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

