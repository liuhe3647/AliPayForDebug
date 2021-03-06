//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCMCUMessageParser.h"

#import "ARTVCMessageSendProtocol-Protocol.h"
#import "ARTVCPureWebsocketDelegate-Protocol.h"

@class ARTVCMessageCache, ARTVCPureWebsocket, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ARTVCNetworkChannel : ARTVCMCUMessageParser <ARTVCPureWebsocketDelegate, ARTVCMessageSendProtocol>
{
    CriticalSection_e2a1dca8 selflock_;
    _Bool _wssHasOpenedOnce;
    ARTVCPureWebsocket *_websocket;
    ARTVCMessageCache *_msgCache;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_sessionHBTimers;
    NSString *_sessionId4Heartbeat;
}

+ (id)builtinUrlWithRoomServerType:(int)arg1;
@property(nonatomic) _Bool wssHasOpenedOnce; // @synthesize wssHasOpenedOnce=_wssHasOpenedOnce;
@property(copy, nonatomic) NSString *sessionId4Heartbeat; // @synthesize sessionId4Heartbeat=_sessionId4Heartbeat;
@property(retain, nonatomic) NSMutableDictionary *sessionHBTimers; // @synthesize sessionHBTimers=_sessionHBTimers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) ARTVCMessageCache *msgCache; // @synthesize msgCache=_msgCache;
@property(retain, nonatomic) ARTVCPureWebsocket *websocket; // @synthesize websocket=_websocket;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeMessageInCache:(id)arg1;
- (void)sendAllCachedMessage;
- (void)sendHeartbeatReqeustWithSessionId:(id)arg1;
- (void)sendHeartbeatIfNeed;
- (void)sendAckToNotify:(id)arg1;
- (void)stopHeartbeatWithSessionId:(id)arg1;
- (void)stopHeartbeat;
- (void)startHeartbeat:(int)arg1 withSessionId:(id)arg2;
- (void)didWebsocketConnectionStatusChangeTo:(int)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)sendReplyRequest:(id)arg1;
- (void)sendInviteRequest:(id)arg1;
- (void)sendIMRequest:(id)arg1;
- (void)sendHangupStatsRequest:(id)arg1;
- (void)sendRealtimeStatsRequest:(id)arg1;
- (void)sendAckReqeust:(id)arg1;
- (void)sendHeartbeatReqeust:(id)arg1;
- (void)sendIceMsgReqeust:(id)arg1;
- (void)sendUnsubscribeReqeust:(id)arg1;
- (void)sendSubscribeReqeust:(id)arg1;
- (void)sendUnpublishReqeust:(id)arg1;
- (void)sendPublishReqeust:(id)arg1;
- (void)sendLeaveRoomReqeust:(id)arg1;
- (void)sendJoinRoomReqeust:(id)arg1;
- (void)sendCreateRoomReqeust:(id)arg1;
- (void)dealloc;
- (id)initWithRoomServerUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

