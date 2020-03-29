//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "O2OGuessYouLikeScrollViewListener-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;
@protocol VZMistItem;

@interface O2OGuessYouLikeChannelImageView : UIView <O2OGuessYouLikeScrollViewListener>
{
    NSArray *_imageViews;
    NSArray *_imageViews2;
    NSArray *_shadows;
    NSMutableArray *_maskViews;
    NSDictionary *_imageConfig;
    double _imageWidth;
    double _viewHeight;
    double _animationDistance;
    double _animationDistancePercent;
    NSArray *_titles;
    NSArray *_subTitles;
    id <VZMistItem> _item;
}

@property(nonatomic) __weak id <VZMistItem> item; // @synthesize item=_item;
@property(copy, nonatomic) NSArray *subTitles; // @synthesize subTitles=_subTitles;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) double animationDistancePercent; // @synthesize animationDistancePercent=_animationDistancePercent;
@property(nonatomic) double animationDistance; // @synthesize animationDistance=_animationDistance;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(copy, nonatomic) NSDictionary *imageConfig; // @synthesize imageConfig=_imageConfig;
@property(retain, nonatomic) NSMutableArray *maskViews; // @synthesize maskViews=_maskViews;
@property(copy, nonatomic) NSArray *shadows; // @synthesize shadows=_shadows;
@property(copy, nonatomic) NSArray *imageViews2; // @synthesize imageViews2=_imageViews2;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)changeTitleAtIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1 ceilingDistance:(double)arg2;
- (void)tryToAddVCScrollViewListener;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)setProgress:(double)arg1 forImage2:(id)arg2;
- (void)setProgress:(double)arg1 forShadow:(id)arg2;
- (void)setProgress:(double)arg1 forMainImage:(id)arg2;
- (void)setProgress:(double)arg1;
- (id)shadowImageViewWithAnimation;
- (id)createImageViewWithConfig:(id)arg1 index:(unsigned long long)arg2;
- (void)setConfig:(id)arg1 item:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
