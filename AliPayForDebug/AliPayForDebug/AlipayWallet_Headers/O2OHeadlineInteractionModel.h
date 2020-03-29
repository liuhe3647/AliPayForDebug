//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

#import "O2OHeadlineInteractionModel-Protocol.h"

@class NSString;

@interface O2OHeadlineInteractionModel : O2OHTTPModel <O2OHeadlineInteractionModel>
{
    NSString *_interactionType;
    NSString *_principalType;
    NSString *_principalId;
    NSString *_action;
}

@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(retain, nonatomic) NSString *principalType; // @synthesize principalType=_principalType;
@property(retain, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
- (void).cxx_destruct;
- (id)operationType;
- (SEL)selectorNameForRPCService;
- (id)rpcRequest;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;

@end
