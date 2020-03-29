//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface APTransRpcEngine : NSObject
{
    NSMutableArray *_rpcAsynCallers;
}

@property(retain, nonatomic) NSMutableArray *rpcAsynCallers; // @synthesize rpcAsynCallers=_rpcAsynCallers;
- (void).cxx_destruct;
- (void)startQueryExchangeRateWithRequest:(id)arg1 session:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startTranslateWithRequest:(id)arg1 session:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)executeRPCMethod:(CDUnknownBlockType)arg1 withRequest:(id)arg2;
- (id)sendRPCExecution:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 silent:(_Bool)arg3 session:(long long)arg4;
- (void)cancelAll;
- (void)dealloc;

@end
