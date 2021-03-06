//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIFont, UIImage, UIImageView, UILabel;

@interface APSocialButton : UIView
{
    UILabel *_contentLabel;
    UIImageView *_contentImageView;
    _Bool _disableText;
    _Bool _isNotShowImg;
    _Bool _preSelectBool;
    long long _indexSub;
    NSString *_type;
    NSString *_selectBoolStr;
    NSString *_norImageStr;
    NSString *_hightImageStr;
    NSString *_titleStr;
    NSString *_normalColorStr;
    NSString *_hightColorTitle;
    NSDictionary *_infoDic;
    UIImage *_normalImg;
    UIFont *_textFont;
    UIView *_splitLine;
    struct CGRect _frameRect;
    struct CGRect _imgViewRect;
    struct CGRect _labelRect;
}

@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) _Bool preSelectBool; // @synthesize preSelectBool=_preSelectBool;
@property(nonatomic) _Bool isNotShowImg; // @synthesize isNotShowImg=_isNotShowImg;
@property(retain, nonatomic) UIImage *normalImg; // @synthesize normalImg=_normalImg;
@property(retain, nonatomic) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(nonatomic) struct CGRect labelRect; // @synthesize labelRect=_labelRect;
@property(retain, nonatomic) NSString *hightColorTitle; // @synthesize hightColorTitle=_hightColorTitle;
@property(retain, nonatomic) NSString *normalColorStr; // @synthesize normalColorStr=_normalColorStr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSString *hightImageStr; // @synthesize hightImageStr=_hightImageStr;
@property(retain, nonatomic) NSString *norImageStr; // @synthesize norImageStr=_norImageStr;
@property(nonatomic) _Bool disableText; // @synthesize disableText=_disableText;
@property(nonatomic) struct CGRect imgViewRect; // @synthesize imgViewRect=_imgViewRect;
@property(nonatomic) struct CGRect frameRect; // @synthesize frameRect=_frameRect;
@property(retain, nonatomic) NSString *selectBoolStr; // @synthesize selectBoolStr=_selectBoolStr;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long indexSub; // @synthesize indexSub=_indexSub;
- (void).cxx_destruct;
- (void)dealloc;
- (void)anmiatendWithNotShowImg:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)refreshButton:(id)arg1;
- (void)updateSubViewsFrame;
- (void)refreshImgView:(id)arg1 select:(_Bool)arg2;
- (void)updateImgWithSelect:(_Bool)arg1;
- (void)refreshImgWith:(id)arg1;
- (void)updateLabelColor:(id)arg1;
- (void)updateLabelColorWithBool:(_Bool)arg1;
- (void)refreshLabel:(id)arg1 select:(_Bool)arg2;
- (void)setupSubViews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withDic:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

