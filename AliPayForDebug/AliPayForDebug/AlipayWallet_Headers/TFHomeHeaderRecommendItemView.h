//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AUBadgeView, TFHomeHeaderRecommendItemModel, UIImageView, UILabel;

@interface TFHomeHeaderRecommendItemView : UIControl
{
    AUBadgeView *_redPoint;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    CDUnknownBlockType _actionBlock;
    TFHomeHeaderRecommendItemModel *_data;
}

@property(retain, nonatomic) TFHomeHeaderRecommendItemModel *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AUBadgeView *redPoint; // @synthesize redPoint=_redPoint;
- (void).cxx_destruct;
- (void)didClicked:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateData:(id)arg1;
- (id)init;

@end

