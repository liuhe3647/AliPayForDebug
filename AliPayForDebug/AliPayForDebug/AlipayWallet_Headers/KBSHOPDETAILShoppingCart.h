//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBSHOPDETAILToString.h"

@class NSArray, NSString;

@interface KBSHOPDETAILShoppingCart : KBSHOPDETAILToString
{
    NSArray *_itemList;
    long long _originalPrice;
    long long _totalDiscount;
    long long _totalCount;
    NSString *_orderUrl;
}

+ (Class)itemListElementClass;
@property(retain, nonatomic) NSString *orderUrl; // @synthesize orderUrl=_orderUrl;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long totalDiscount; // @synthesize totalDiscount=_totalDiscount;
@property(nonatomic) long long originalPrice; // @synthesize originalPrice=_originalPrice;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;

@end
