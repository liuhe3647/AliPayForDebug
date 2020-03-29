//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFEWebGuideView, CABasicAnimation, CADisplayLink, NSMutableAttributedString, NSString, UIButton, UIImage, UIImageView, UILabel, UIView, ZDocCameraDrawView, ZDocCardManagerBaseViewController, alertText;

@interface ZDocUIController : NSObject
{
    _Bool _haveInitialized;
    _Bool _continuously;
    _Bool _isLabelReady;
    _Bool _flashOn;
    int _reflectLightTime;
    int _incompleteTime;
    int _vagueTime;
    int _displayLinkTime;
    int _fallDisplayLinkTime;
    ZDocCardManagerBaseViewController *_cardManagerVC;
    UIImage *_captureImage;
    UIImageView *_lastShowImage;
    unsigned long long _uiState;
    UIImage *_dealtImg;
    double _iosFlashTimeInterval;
    CDUnknownBlockType _takePhoto;
    CDUnknownBlockType _touchQuitBtn;
    CDUnknownBlockType _touchContinueCapture;
    CDUnknownBlockType _touchRecapture;
    CDUnknownBlockType _touchCaptureNext;
    CDUnknownBlockType _clickCardView;
    CDUnknownBlockType _clickBottom;
    CDUnknownBlockType _showTriggerAlert;
    CDUnknownBlockType _stopRunAlgorithm;
    CDUnknownBlockType _clickFlashBtn;
    CDUnknownBlockType _flashTextShown;
    unsigned long long _uiMode;
    unsigned long long _scanMode;
    AFEWebGuideView *_guideView;
    UIView *_containerView;
    UIImageView *_statusIconImage;
    ZDocCameraDrawView *_cameraDrawView;
    UIView *_cardView;
    UIView *_leftView;
    UIView *_shadowTop;
    UIView *_shadowBot;
    UIView *_shadowLeft;
    UIView *_shadowRight;
    UIView *_shadowLeftContainerView;
    UIView *_turnContainerView;
    long long _leftButtonWidth;
    double _point;
    UIButton *_reCaptureBtn;
    UIButton *_continueCaptureBtn;
    UIButton *_finishCaptureBtn;
    UIButton *_bigReCaptureBtn;
    UIButton *_celbtn;
    UIButton *_bigCelbtn;
    UIButton *_captureBtn;
    UIImageView *_headImage;
    UIImageView *_nationalIconImage;
    NSString *_titleText;
    NSMutableAttributedString *_attributedTitleText;
    alertText *_infoTextView;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    double _timePoint;
    UIView *_topNavigationBarView;
    UIView *_bottomWhiteView;
    UIButton *_navigationBackButton;
    UILabel *_navigationTitle;
    UIImageView *_bottomFrontView;
    UIImageView *_bottomBackView;
    UIImageView *_bottomFrontPrivateStamp;
    UIImageView *_bottomBackPrivateStamp;
    UIView *_processOne;
    UIView *_processTwo;
    UIView *_processThree;
    UIView *_processFour;
    UIImage *_frontImage;
    UIView *_shakeBox;
    UIImageView *_toastIcon;
    UILabel *_toastLabel;
    UIImageView *_finishUploadIcon;
    CADisplayLink *_displayLink;
    CADisplayLink *_fallDisplayLink;
    UIImageView *_scanLine;
    NSString *_priorTopToastText;
    UIImageView *_fallImageView;
    CABasicAnimation *_scanAnimation;
    UIButton *_flashBtn;
    UIImageView *_flashIcon;
    UILabel *_flashLabel;
    double _flashTimePoint;
    struct CGRect _idCardRangeRect;
    struct CGRect _selfBound;
    struct CGRect _originImageRect;
    struct CGRect _endImageRect;
}

@property(nonatomic) double flashTimePoint; // @synthesize flashTimePoint=_flashTimePoint;
@property(nonatomic) _Bool flashOn; // @synthesize flashOn=_flashOn;
@property(retain, nonatomic) UILabel *flashLabel; // @synthesize flashLabel=_flashLabel;
@property(retain, nonatomic) UIImageView *flashIcon; // @synthesize flashIcon=_flashIcon;
@property(retain, nonatomic) UIButton *flashBtn; // @synthesize flashBtn=_flashBtn;
@property(retain, nonatomic) CABasicAnimation *scanAnimation; // @synthesize scanAnimation=_scanAnimation;
@property(retain, nonatomic) UIImageView *fallImageView; // @synthesize fallImageView=_fallImageView;
@property(copy, nonatomic) NSString *priorTopToastText; // @synthesize priorTopToastText=_priorTopToastText;
@property(retain, nonatomic) UIImageView *scanLine; // @synthesize scanLine=_scanLine;
@property(nonatomic) int fallDisplayLinkTime; // @synthesize fallDisplayLinkTime=_fallDisplayLinkTime;
@property(nonatomic) struct CGRect endImageRect; // @synthesize endImageRect=_endImageRect;
@property(nonatomic) struct CGRect originImageRect; // @synthesize originImageRect=_originImageRect;
@property(retain, nonatomic) CADisplayLink *fallDisplayLink; // @synthesize fallDisplayLink=_fallDisplayLink;
@property(nonatomic) int displayLinkTime; // @synthesize displayLinkTime=_displayLinkTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIImageView *finishUploadIcon; // @synthesize finishUploadIcon=_finishUploadIcon;
@property(retain, nonatomic) UILabel *toastLabel; // @synthesize toastLabel=_toastLabel;
@property(retain, nonatomic) UIImageView *toastIcon; // @synthesize toastIcon=_toastIcon;
@property(retain, nonatomic) UIView *shakeBox; // @synthesize shakeBox=_shakeBox;
@property(retain, nonatomic) UIImage *frontImage; // @synthesize frontImage=_frontImage;
@property(retain, nonatomic) UIView *processFour; // @synthesize processFour=_processFour;
@property(retain, nonatomic) UIView *processThree; // @synthesize processThree=_processThree;
@property(retain, nonatomic) UIView *processTwo; // @synthesize processTwo=_processTwo;
@property(retain, nonatomic) UIView *processOne; // @synthesize processOne=_processOne;
@property(retain, nonatomic) UIImageView *bottomBackPrivateStamp; // @synthesize bottomBackPrivateStamp=_bottomBackPrivateStamp;
@property(retain, nonatomic) UIImageView *bottomFrontPrivateStamp; // @synthesize bottomFrontPrivateStamp=_bottomFrontPrivateStamp;
@property(retain, nonatomic) UIImageView *bottomBackView; // @synthesize bottomBackView=_bottomBackView;
@property(retain, nonatomic) UIImageView *bottomFrontView; // @synthesize bottomFrontView=_bottomFrontView;
@property(retain, nonatomic) UILabel *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(retain, nonatomic) UIButton *navigationBackButton; // @synthesize navigationBackButton=_navigationBackButton;
@property(retain, nonatomic) UIView *bottomWhiteView; // @synthesize bottomWhiteView=_bottomWhiteView;
@property(retain, nonatomic) UIView *topNavigationBarView; // @synthesize topNavigationBarView=_topNavigationBarView;
@property(nonatomic) double timePoint; // @synthesize timePoint=_timePoint;
@property(nonatomic) _Bool isLabelReady; // @synthesize isLabelReady=_isLabelReady;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) alertText *infoTextView; // @synthesize infoTextView=_infoTextView;
@property(retain, nonatomic) NSMutableAttributedString *attributedTitleText; // @synthesize attributedTitleText=_attributedTitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImageView *nationalIconImage; // @synthesize nationalIconImage=_nationalIconImage;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UIButton *captureBtn; // @synthesize captureBtn=_captureBtn;
@property(retain, nonatomic) UIButton *bigCelbtn; // @synthesize bigCelbtn=_bigCelbtn;
@property(retain, nonatomic) UIButton *celbtn; // @synthesize celbtn=_celbtn;
@property(retain, nonatomic) UIButton *bigReCaptureBtn; // @synthesize bigReCaptureBtn=_bigReCaptureBtn;
@property(retain, nonatomic) UIButton *finishCaptureBtn; // @synthesize finishCaptureBtn=_finishCaptureBtn;
@property(retain, nonatomic) UIButton *continueCaptureBtn; // @synthesize continueCaptureBtn=_continueCaptureBtn;
@property(retain, nonatomic) UIButton *reCaptureBtn; // @synthesize reCaptureBtn=_reCaptureBtn;
@property(nonatomic) double point; // @synthesize point=_point;
@property(nonatomic) long long leftButtonWidth; // @synthesize leftButtonWidth=_leftButtonWidth;
@property(nonatomic) struct CGRect selfBound; // @synthesize selfBound=_selfBound;
@property(retain, nonatomic) UIView *turnContainerView; // @synthesize turnContainerView=_turnContainerView;
@property(retain, nonatomic) UIView *shadowLeftContainerView; // @synthesize shadowLeftContainerView=_shadowLeftContainerView;
@property(retain, nonatomic) UIView *shadowRight; // @synthesize shadowRight=_shadowRight;
@property(retain, nonatomic) UIView *shadowLeft; // @synthesize shadowLeft=_shadowLeft;
@property(retain, nonatomic) UIView *shadowBot; // @synthesize shadowBot=_shadowBot;
@property(retain, nonatomic) UIView *shadowTop; // @synthesize shadowTop=_shadowTop;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) ZDocCameraDrawView *cameraDrawView; // @synthesize cameraDrawView=_cameraDrawView;
@property(retain, nonatomic) UIImageView *statusIconImage; // @synthesize statusIconImage=_statusIconImage;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AFEWebGuideView *guideView; // @synthesize guideView=_guideView;
@property(nonatomic) unsigned long long scanMode; // @synthesize scanMode=_scanMode;
@property(nonatomic) unsigned long long uiMode; // @synthesize uiMode=_uiMode;
@property(copy) CDUnknownBlockType flashTextShown; // @synthesize flashTextShown=_flashTextShown;
@property(copy) CDUnknownBlockType clickFlashBtn; // @synthesize clickFlashBtn=_clickFlashBtn;
@property(copy) CDUnknownBlockType stopRunAlgorithm; // @synthesize stopRunAlgorithm=_stopRunAlgorithm;
@property(copy) CDUnknownBlockType showTriggerAlert; // @synthesize showTriggerAlert=_showTriggerAlert;
@property(copy) CDUnknownBlockType clickBottom; // @synthesize clickBottom=_clickBottom;
@property(copy) CDUnknownBlockType clickCardView; // @synthesize clickCardView=_clickCardView;
@property(copy) CDUnknownBlockType touchCaptureNext; // @synthesize touchCaptureNext=_touchCaptureNext;
@property(copy) CDUnknownBlockType touchRecapture; // @synthesize touchRecapture=_touchRecapture;
@property(copy) CDUnknownBlockType touchContinueCapture; // @synthesize touchContinueCapture=_touchContinueCapture;
@property(copy) CDUnknownBlockType touchQuitBtn; // @synthesize touchQuitBtn=_touchQuitBtn;
@property(copy) CDUnknownBlockType takePhoto; // @synthesize takePhoto=_takePhoto;
@property(nonatomic) _Bool continuously; // @synthesize continuously=_continuously;
@property(nonatomic) double iosFlashTimeInterval; // @synthesize iosFlashTimeInterval=_iosFlashTimeInterval;
@property(nonatomic) _Bool haveInitialized; // @synthesize haveInitialized=_haveInitialized;
@property(nonatomic) int vagueTime; // @synthesize vagueTime=_vagueTime;
@property(nonatomic) int incompleteTime; // @synthesize incompleteTime=_incompleteTime;
@property(nonatomic) int reflectLightTime; // @synthesize reflectLightTime=_reflectLightTime;
@property(retain, nonatomic) UIImage *dealtImg; // @synthesize dealtImg=_dealtImg;
@property(nonatomic) unsigned long long uiState; // @synthesize uiState=_uiState;
@property(nonatomic) struct CGRect idCardRangeRect; // @synthesize idCardRangeRect=_idCardRangeRect;
@property(retain, nonatomic) UIImageView *lastShowImage; // @synthesize lastShowImage=_lastShowImage;
@property(retain, nonatomic) UIImage *captureImage; // @synthesize captureImage=_captureImage;
@property(nonatomic) __weak ZDocCardManagerBaseViewController *cardManagerVC; // @synthesize cardManagerVC=_cardManagerVC;
- (void).cxx_destruct;
- (void)reCapture:(id)arg1;
- (void)captrueNext:(id)arg1;
- (void)continueCapture:(id)arg1;
- (void)capture:(id)arg1;
- (void)cancelSelf:(id)arg1;
- (void)clickBottomBack;
- (void)clickBottomFront;
- (void)cardViewClicked:(id)arg1;
- (void)flashBtnClicked;
- (id)rotateImage:(id)arg1;
- (id)cutImage:(id)arg1;
- (void)shakeToast;
- (void)rotate;
- (void)goToNextPageAnimation;
- (void)afterShowBottomImageSucceed;
- (void)showBottomImage;
- (void)fall;
- (void)fallAnimation;
- (void)stopScanLineAnimation;
- (void)startScanLineAnimation;
- (void)stopAllInnerAnimation;
- (void)fetchAnimationConfig;
- (void)fetchConfig;
- (void)autoShutFlash;
- (void)showFlashBtn:(_Bool)arg1 haveTimeLimit:(_Bool)arg2;
- (void)updatePortraitTitleAreaWithUIState:(unsigned long long)arg1 string:(id)arg2;
- (id)imageWithName:(id)arg1;
- (void)updateTipLabel:(id)arg1 andTextColor:(id)arg2;
- (void)clearTipLabelImmediately;
- (void)updateCardBorderColor:(id)arg1;
- (void)updateShadowColor:(id)arg1;
- (void)resetToNormalState;
- (void)updateUIState:(unsigned long long)arg1;
- (void)updateTopToast:(int)arg1 text:(id)arg2 willShake:(_Bool)arg3;
- (void)updateTopToastTimes:(id)arg1;
- (void)updatePriorTopToastText:(id)arg1;
- (void)successImgShow;
- (void)initCustomView;
- (void)drawHeadImageAndNationalIconImage;
- (void)initPortraitIDCardView;
- (void)goProcess:(int)arg1;
- (void)initPortraitScanIDCardView;
- (id)titleByUIMode:(unsigned long long)arg1 scanMode:(unsigned long long)arg2;
- (void)initIDCardView;
- (void)updateUIWithUIMode:(unsigned long long)arg1;
- (id)initializeViewWithScanMode:(unsigned long long)arg1 andUIMode:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end
