//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTPRODBaseRpcReq.h"

@class NSString;

@interface KBCONTENTPRODRecommendListQueryRpcReq : KBCONTENTPRODBaseRpcReq
{
    _Bool _isNative;
    NSString *_paginationSymbol;
    NSString *_contentId;
}

@property(nonatomic) _Bool isNative; // @synthesize isNative=_isNative;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *paginationSymbol; // @synthesize paginationSymbol=_paginationSymbol;
- (void).cxx_destruct;

@end

