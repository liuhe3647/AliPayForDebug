//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WHNewComerGuidanceView : UIView
{
    CDUnknownBlockType _finishedCallback;
    UIView *_maskView;
    UIView *_firstPageContainerView;
    UIView *_secondPageContainerView;
    UIImageView *_gifImageView;
    double _offsetTop;
    double _offsetBottom;
}

@property(nonatomic) double offsetBottom; // @synthesize offsetBottom=_offsetBottom;
@property(nonatomic) double offsetTop; // @synthesize offsetTop=_offsetTop;
@property(retain, nonatomic) UIImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
@property(retain, nonatomic) UIView *secondPageContainerView; // @synthesize secondPageContainerView=_secondPageContainerView;
@property(retain, nonatomic) UIView *firstPageContainerView; // @synthesize firstPageContainerView=_firstPageContainerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType finishedCallback; // @synthesize finishedCallback=_finishedCallback;
- (void).cxx_destruct;
- (id)buttonWithTitle:(id)arg1;
- (void)startGifAnimation;
- (void)didTappedFinishButton;
- (void)didTappedNextButton;
- (id)initWithFrame:(struct CGRect)arg1 offsetTop:(double)arg2 offsetBottom:(double)arg3;

@end

