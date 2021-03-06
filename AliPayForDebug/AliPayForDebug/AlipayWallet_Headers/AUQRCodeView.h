//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUButton, AUIActionButton, AUILoadingIndicatorView, AULabel, QRDataModel, UIImageView, UIScrollView;

@interface AUQRCodeView : UIView
{
    UIScrollView *_maskView;
    UIView *_containerView;
    UIImageView *_topLeftImageView;
    AULabel *_topTitleLabel;
    AULabel *_topSubtitleLabel;
    UIImageView *_qrCodeView;
    AULabel *_bottomTitleLabel;
    AULabel *_bottomMessageLabel;
    AUIActionButton *_actionButton;
    AUButton *_secondActionButton;
    QRDataModel *_model;
    AUILoadingIndicatorView *_indicatorView;
    UIView *_topImageContainer;
    UIView *_subContainer;
}

@property(retain, nonatomic) UIView *subContainer; // @synthesize subContainer=_subContainer;
@property(retain, nonatomic) UIView *topImageContainer; // @synthesize topImageContainer=_topImageContainer;
@property(retain, nonatomic) AUILoadingIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) QRDataModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AUButton *secondActionButton; // @synthesize secondActionButton=_secondActionButton;
@property(retain, nonatomic) AUIActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) AULabel *bottomMessageLabel; // @synthesize bottomMessageLabel=_bottomMessageLabel;
@property(retain, nonatomic) AULabel *bottomTitleLabel; // @synthesize bottomTitleLabel=_bottomTitleLabel;
@property(retain, nonatomic) UIImageView *qrCodeView; // @synthesize qrCodeView=_qrCodeView;
@property(retain, nonatomic) AULabel *topSubtitleLabel; // @synthesize topSubtitleLabel=_topSubtitleLabel;
@property(retain, nonatomic) AULabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIImageView *topLeftImageView; // @synthesize topLeftImageView=_topLeftImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)downloadImageWithUrl:(id)arg1 withView:(id)arg2;
- (void)setupSubViews;
- (void)sizeFitLabels;
- (void)checkNeedShowScrollIndicator;
- (double)sizeForLabel:(id)arg1;
- (void)layoutContainer;
- (void)layoutSubviews;
- (id)imageForAlbumSizeAfterScale;
- (id)imageForAlbum;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect)arg1 model:(CDUnknownBlockType)arg2;

@end

