//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class BEEAsset, BEEPhotoCheckButton, BEEVideoLabelView, UIImage, UIImageView, UILabel;
@protocol BEEGridPickCellDelegate;

@interface BEEGridPickCell : UICollectionViewCell
{
    UILabel *_gifLabel;
    BEEVideoLabelView *_videoView;
    BEEPhotoCheckButton *_checkButton;
    _Bool _hasSetVoiceOver;
    UIImageView *_maskView;
    _Bool _isSelected;
    id <BEEGridPickCellDelegate> _delegate;
    BEEAsset *_beeAsset;
    UIImage *_thumbnailImage;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) BEEAsset *beeAsset; // @synthesize beeAsset=_beeAsset;
@property(nonatomic) __weak id <BEEGridPickCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setVoiceOverWithForce:(_Bool)arg1;
- (_Bool)shouldTapWithKey:(id)arg1;
- (void)clickCheckButton;
- (void)setIndex:(unsigned long long)arg1 animation:(_Bool)arg2;
- (void)setSelection:(_Bool)arg1 animation:(_Bool)arg2;
- (void)showMaskWithKey:(id)arg1;
- (id)gifLabel;
- (id)videoLabelView;
- (void)setBeeAsset:(id)arg1 selectWithIndex:(unsigned long long)arg2;
- (void)setBeeAsset:(id)arg1 withSelection:(_Bool)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

