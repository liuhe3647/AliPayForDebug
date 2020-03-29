//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AUBadgeView, AURichTextLabel, CALayer, FHAssetsHeaderV4ItemDataModel, UIImageView;
@protocol FHFloatOutTipsBarDelegate;

@interface FHFloatOutTipsBar : UIControl
{
    UIImageView *_iconView;
    AURichTextLabel *_textLabel;
    AUBadgeView *_redPoint;
    UIImageView *_arrowViewOne;
    UIImageView *_arrowViewTwo;
    CALayer *_shapeLayer;
    FHAssetsHeaderV4ItemDataModel *_itemDataModel;
    id <FHFloatOutTipsBarDelegate> _delegate;
}

@property(nonatomic) __weak id <FHFloatOutTipsBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidShow;
- (void)showInView:(id)arg1 atPoint:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)showingTimeOut;
- (void)cancelDismissTimer;
- (void)startDismissTimer;
- (void)didClickView;
- (id)keyframeAnimation:(double)arg1 toValue:(double)arg2;
- (void)applyCornerRadiusToLayer:(id)arg1;
- (void)applyGradientLayer;
- (void)layoutSubviews;
- (id)initWithDataModel:(id)arg1;
- (void)dealloc;

@end
