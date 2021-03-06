//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface REDataEngine : NSObject
{
    NSMutableArray *_rpcQueue;
}

@property(retain, nonatomic) NSMutableArray *rpcQueue; // @synthesize rpcQueue=_rpcQueue;
- (void).cxx_destruct;
- (void)getSceneTemplates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPageHbTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareGiftAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadTemplateConfigsForMarket:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendThanksRemark:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateOrderNo:(id)arg1 prodType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getShareInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)upgradeRealName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validPassCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)receiveRedEnvelope:(id)arg1 completion:(CDUnknownBlockType)arg2 silent:(_Bool)arg3;
- (void)receiverDetailQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryRedEnvelopeStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryRedEnvelopeFlowDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHbTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createDirectRedEnvelope:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)querySumInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteFromList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)querySentGiftList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryReceiveGiftList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRPCRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 silent:(_Bool)arg3 fullySilent:(_Bool)arg4;
- (void)sendRPCRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 silent:(_Bool)arg3;
- (void)sendRPCRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)init;

@end

