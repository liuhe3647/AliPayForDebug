//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXZWifiLinkProtocol-Protocol.h"
#import "EasyLinkFTCDelegate-Protocol.h"

@class EASYLINK, NSMutableDictionary, NSString;

@interface EasyLinkForAXZWifiLink : NSObject <EasyLinkFTCDelegate, AXZWifiLinkProtocol>
{
    EASYLINK *_easylink_config;
    CDUnknownBlockType _callback;
    NSString *_model;
    NSMutableDictionary *_aLinkDict;
}

- (void).cxx_destruct;
- (void)onDisconnectFromFTC:(id)arg1 withError:(_Bool)arg2;
- (void)onFound:(id)arg1 withName:(id)arg2 mataData:(id)arg3;
- (void)onFoundByFTC:(id)arg1 withConfiguration:(id)arg2;
- (void)searchForCell:(id)arg1;
- (void)stopLink;
- (void)startLinkWith:(id)arg1 andPassword:(id)arg2 andModel:(id)arg3 andCallback:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
