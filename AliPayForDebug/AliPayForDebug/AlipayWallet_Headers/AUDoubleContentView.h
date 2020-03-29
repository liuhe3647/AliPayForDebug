//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AUListItemModel, NSString, TTTAttributedLabel, UIImageView, UILabel;
@protocol AUDoubleTitleListItemModelDelegate><TTTAttributeLabelDelagate;

@interface AUDoubleContentView : UIView <TTTAttributedLabelDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_leftImageView;
    UILabel *_timeLabel;
    UILabel *_rightAssistLabel;
    unsigned long long _style;
    long long _subtitleLines;
    long long _accessoryType;
    TTTAttributedLabel *_attributelabel;
    double _maxWidth;
    AUListItemModel<AUDoubleTitleListItemModelDelegate><TTTAttributeLabelDelagate> *_model;
    struct CGSize _leftimageSize;
}

+ (double)cellMaxWidthByModel:(id)arg1 style:(long long)arg2;
+ (id)DoubleTitleParagraphStyle;
+ (double)accessoryViewSize:(long long)arg1;
@property(retain, nonatomic) AUListItemModel<AUDoubleTitleListItemModelDelegate><TTTAttributeLabelDelagate> *model; // @synthesize model=_model;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) TTTAttributedLabel *attributelabel; // @synthesize attributelabel=_attributelabel;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) long long subtitleLines; // @synthesize subtitleLines=_subtitleLines;
@property(nonatomic) struct CGSize leftimageSize; // @synthesize leftimageSize=_leftimageSize;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *rightAssistLabel; // @synthesize rightAssistLabel=_rightAssistLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeOfleftImage;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setTTTAttributeText:(id)arg1 linkText:(id)arg2;
- (void)updateRightAssistWidth:(double)arg1;
- (void)layoutSubviews;
- (double)setupRightTextLabels;
- (double)realCellHeight;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
