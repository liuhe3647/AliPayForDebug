//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEPopupView.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface ARPopTipsView : BEEPopupView
{
    CDUnknownBlockType _actionBlock;
    UIView *_contentBackView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_actionButton;
    UIImageView *_mainBgView;
    UIImageView *_mainHeadView;
}

@property(retain, nonatomic) UIImageView *mainHeadView; // @synthesize mainHeadView=_mainHeadView;
@property(retain, nonatomic) UIImageView *mainBgView; // @synthesize mainBgView=_mainBgView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentBackView; // @synthesize contentBackView=_contentBackView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)relaseAllSubViews;
- (void)updateViewsData:(id)arg1;
- (void)handleActionClick:(id)arg1;
- (void)setupViewsConstraint:(id)arg1;
- (void)showPromptViewWithModel:(id)arg1;
- (id)init;

@end

