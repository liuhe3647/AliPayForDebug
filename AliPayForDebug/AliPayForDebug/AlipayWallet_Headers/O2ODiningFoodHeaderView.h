//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, NSMutableArray, UIImageView;

@interface O2ODiningFoodHeaderView : UIView
{
    long long _pageType;
    UIView *_gradientBgView;
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_gradientLayer;
    UIImageView *_guideImageView;
    NSMutableArray *_attachedViews;
}

@property(retain, nonatomic) NSMutableArray *attachedViews; // @synthesize attachedViews=_attachedViews;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *gradientBgView; // @synthesize gradientBgView=_gradientBgView;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (void)setGuideImageViewFrameWithImage:(id)arg1;
- (void)drawArcWithGradientBgHeight:(double)arg1;
- (void)removeBackgroundSubView;
- (void)addBackgroundSubView;
- (void)addTakeSubView;
- (void)addGradientViewWithItem:(id)arg1;
- (void)updateViews:(id)arg1;
- (void)updateData:(id)arg1;
- (id)initWithPageType:(long long)arg1;

@end

