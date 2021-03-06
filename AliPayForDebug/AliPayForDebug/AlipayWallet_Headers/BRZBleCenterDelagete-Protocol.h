//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBPeripheral, NSData, NSDictionary, NSError, NSNumber;
@protocol BRZCenterProtocol;

@protocol BRZBleCenterDelagete <NSObject>
- (void)breezeBleCentral:(id <BRZCenterProtocol>)arg1 didReceivedData:(NSData *)arg2 cmd:(unsigned long long)arg3 msgId:(int)arg4 error:(NSError *)arg5;
- (void)breezeBleCentral:(id <BRZCenterProtocol>)arg1 didCentralStateChanged:(long long)arg2;
- (void)breezeBleCentral:(id <BRZCenterProtocol>)arg1 didPeripheralConnectStateChanged:(long long)arg2;
- (void)breezeBleCentral:(id <BRZCenterProtocol>)arg1 didConnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)breezeBleCentral:(id <BRZCenterProtocol>)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4 extra:(NSDictionary *)arg5;
@end

