//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CreateReq : NSObject
{
    long long _total;
    NSString *_giftPlayType;
    NSString *_preBiz;
    NSString *_chatUserType;
    NSString *_targetId;
    NSArray *_wordDetails;
    NSString *_formToken;
    NSString *_skinId;
    NSString *_prodCode;
    NSString *_createStage;
    NSString *_crowdNo;
    NSString *_verifyId;
    NSString *_securityId;
    long long _applyShare;
    NSString *_lackShareAmount;
    NSString *_goldPrice;
    long long _tradeTime;
    NSString *_quotationId;
}

+ (Class)wordDetailsElementClass;
@property(retain, nonatomic) NSString *quotationId; // @synthesize quotationId=_quotationId;
@property(nonatomic) long long tradeTime; // @synthesize tradeTime=_tradeTime;
@property(retain, nonatomic) NSString *goldPrice; // @synthesize goldPrice=_goldPrice;
@property(retain, nonatomic) NSString *lackShareAmount; // @synthesize lackShareAmount=_lackShareAmount;
@property(nonatomic) long long applyShare; // @synthesize applyShare=_applyShare;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(retain, nonatomic) NSString *createStage; // @synthesize createStage=_createStage;
@property(retain, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(retain, nonatomic) NSString *skinId; // @synthesize skinId=_skinId;
@property(retain, nonatomic) NSString *formToken; // @synthesize formToken=_formToken;
@property(retain, nonatomic) NSArray *wordDetails; // @synthesize wordDetails=_wordDetails;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *chatUserType; // @synthesize chatUserType=_chatUserType;
@property(retain, nonatomic) NSString *preBiz; // @synthesize preBiz=_preBiz;
@property(retain, nonatomic) NSString *giftPlayType; // @synthesize giftPlayType=_giftPlayType;
@property(nonatomic) long long total; // @synthesize total=_total;
- (void).cxx_destruct;

@end

