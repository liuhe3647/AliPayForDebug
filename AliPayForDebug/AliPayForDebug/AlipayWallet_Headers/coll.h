//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDocBaseModel.h"

@class NSNumber, NSString;

@interface coll : ZDocBaseModel
{
    NSString *_docType;
    NSNumber *_pageNo;
    NSNumber *_uiType;
    NSNumber *_algoType;
    NSNumber *_retryLimit;
    NSNumber *_scanTimeout;
}

@property(retain, nonatomic) NSNumber *scanTimeout; // @synthesize scanTimeout=_scanTimeout;
@property(retain, nonatomic) NSNumber *retryLimit; // @synthesize retryLimit=_retryLimit;
@property(retain, nonatomic) NSNumber *algoType; // @synthesize algoType=_algoType;
@property(retain, nonatomic) NSNumber *uiType; // @synthesize uiType=_uiType;
@property(retain, nonatomic) NSNumber *pageNo; // @synthesize pageNo=_pageNo;
@property(copy, nonatomic) NSString *docType; // @synthesize docType=_docType;
- (void).cxx_destruct;

@end
