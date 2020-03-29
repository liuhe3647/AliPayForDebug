//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class O2OTagInfo, UIImageView, UILabel;

@interface O2OTipView : UIView
{
    _Bool _isTagLeft;
    int _showIndex;
    UILabel *_tagLabel;
    O2OTagInfo *_tagInfo;
    UIImageView *_tagImage_left;
    UIImageView *_tagImage_right;
    UIView *_contentView;
}

@property(nonatomic) _Bool isTagLeft; // @synthesize isTagLeft=_isTagLeft;
@property(nonatomic) int showIndex; // @synthesize showIndex=_showIndex;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *tagImage_right; // @synthesize tagImage_right=_tagImage_right;
@property(retain, nonatomic) UIImageView *tagImage_left; // @synthesize tagImage_left=_tagImage_left;
@property(retain, nonatomic) O2OTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void).cxx_destruct;
- (void)setupTag:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isTagLeft:(_Bool)arg2;

@end
