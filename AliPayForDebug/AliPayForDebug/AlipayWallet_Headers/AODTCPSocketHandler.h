//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncSocketDelegate-Protocol.h"

@class GCDAsyncSocket, NSString;

@interface AODTCPSocketHandler : NSObject <GCDAsyncSocketDelegate>
{
    CDUnknownBlockType _connectCallback;
    CDUnknownBlockType _messageCallback;
    CDUnknownBlockType _errorCallback;
    CDUnknownBlockType _closeCallback;
    GCDAsyncSocket *_socket;
    NSString *_appId;
    NSString *_socketId;
}

+ (id)hexStringToData:(id)arg1;
@property(retain, nonatomic) NSString *socketId; // @synthesize socketId=_socketId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(copy, nonatomic) CDUnknownBlockType messageCallback; // @synthesize messageCallback=_messageCallback;
@property(copy, nonatomic) CDUnknownBlockType connectCallback; // @synthesize connectCallback=_connectCallback;
- (void).cxx_destruct;
- (void)sendError:(id)arg1 code:(long long)arg2 errorMessage:(id)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)sendMessage:(id)arg1 isHex:(_Bool)arg2 offset:(id)arg3 length:(id)arg4;
- (void)disconnect;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3;
- (_Bool)isConnected;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 socketId:(id)arg2;

@end
