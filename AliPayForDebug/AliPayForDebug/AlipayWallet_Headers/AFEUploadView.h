//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFEUploadMaskView, APBZolozUploadToastView, UIImage, UIImageView, UILabel;

@interface AFEUploadView : UIView
{
    UILabel *_label;
    UIView *_backgroundView;
    UIImageView *_backgroundImageView;
    UIImage *_uploadingImage;
    AFEUploadMaskView *_uploadingView;
    APBZolozUploadToastView *_zolozUploadingView;
}

@property(retain, nonatomic) APBZolozUploadToastView *zolozUploadingView; // @synthesize zolozUploadingView=_zolozUploadingView;
@property(retain, nonatomic) AFEUploadMaskView *uploadingView; // @synthesize uploadingView=_uploadingView;
@property(retain, nonatomic) UIImage *uploadingImage; // @synthesize uploadingImage=_uploadingImage;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)verifyAnimation:(long long)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)stopUploading;
- (void)beginUploading;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

