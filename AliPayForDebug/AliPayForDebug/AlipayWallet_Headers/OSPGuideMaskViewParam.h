//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSPGuideMaskViewParam : NSObject
{
    _Bool _isHorizontalScreen;
    _Bool _needBlurEffect;
    NSString *_title;
    NSString *_desc;
    NSString *_btnTitle;
    CDUnknownBlockType _btnBlock;
    NSString *_linkBtnTitle;
    CDUnknownBlockType _linkBtnBlock;
    unsigned long long _viewType;
}

@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool needBlurEffect; // @synthesize needBlurEffect=_needBlurEffect;
@property(nonatomic) _Bool isHorizontalScreen; // @synthesize isHorizontalScreen=_isHorizontalScreen;
@property(copy, nonatomic) CDUnknownBlockType linkBtnBlock; // @synthesize linkBtnBlock=_linkBtnBlock;
@property(retain, nonatomic) NSString *linkBtnTitle; // @synthesize linkBtnTitle=_linkBtnTitle;
@property(copy, nonatomic) CDUnknownBlockType btnBlock; // @synthesize btnBlock=_btnBlock;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

