//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PEBusinessPromotionBaseModel.h"

@class BusinessMoreVo, NSArray, NSString;

@interface PEBusinessPromotionRpcModel : PEBusinessPromotionBaseModel
{
    NSString *_businessRecommendTitle;
    NSArray *_businessRecommendVoList;
    BusinessMoreVo *_businessMoreVo;
}

+ (Class)businessRecommendVoListElementClass;
+ (id)defaultValue;
@property(retain, nonatomic) BusinessMoreVo *businessMoreVo; // @synthesize businessMoreVo=_businessMoreVo;
@property(retain, nonatomic) NSArray *businessRecommendVoList; // @synthesize businessRecommendVoList=_businessRecommendVoList;
@property(retain, nonatomic) NSString *businessRecommendTitle; // @synthesize businessRecommendTitle=_businessRecommendTitle;
- (void).cxx_destruct;
- (_Bool)isSameWithOther:(id)arg1;
- (_Bool)hasContentItems;
- (_Bool)hasMoreVo;
- (double)getHeight;
- (void)spmLogWithBehavior:(id)arg1 itemIndex:(long long)arg2;
- (void)feedbackWithBehavior:(id)arg1;
- (_Bool)isValid;

@end

