//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSString;

@interface O2OLcVideoPlayListModel : O2OMistModel
{
    _Bool _hasNext;
    NSString *_contentId;
    NSString *_paginationSymbol;
}

@property(copy, nonatomic) NSString *paginationSymbol; // @synthesize paginationSymbol=_paginationSymbol;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;
- (id)templateConfig;
- (void)preloadImageWithUrl:(id)arg1;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (id)templatesFromResponse:(id)arg1;
- (id)operationType;
- (_Bool)hasMore;
- (void)reset;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;

@end

