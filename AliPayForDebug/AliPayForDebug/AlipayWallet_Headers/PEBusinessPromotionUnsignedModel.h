//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PEBusinessPromotionBaseModel.h"

@class NSString;

@interface PEBusinessPromotionUnsignedModel : PEBusinessPromotionBaseModel
{
    _Bool _isSigned;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageUrl;
    NSString *_url;
    NSString *_redDotStyle;
}

@property(nonatomic) _Bool isSigned; // @synthesize isSigned=_isSigned;
@property(retain, nonatomic) NSString *redDotStyle; // @synthesize redDotStyle=_redDotStyle;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isSameWithOther:(id)arg1;
- (id)getSpaceObjInfo;
- (void)feedbackWithBehavior:(id)arg1;

@end
