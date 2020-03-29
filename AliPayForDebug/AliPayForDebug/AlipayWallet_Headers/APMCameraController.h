//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APMCameraViewDelegate-Protocol.h"
#import "APMPreviewControllerDelegate-Protocol.h"
#import "APMTakePictureBtnViewDelegate-Protocol.h"

@class APMCameraROIView, APMCameraView, APMPreviewController, APMTakePictureBtnView, NSDictionary, NSObject, NSString, UIButton, UIImage, UILabel;
@protocol APMCameraControllerDelegate, OS_dispatch_semaphore;

@interface APMCameraController : DTViewController <APMTakePictureBtnViewDelegate, APMPreviewControllerDelegate, APMCameraViewDelegate>
{
    id <APMCameraControllerDelegate> _delegate;
    APMCameraView *_cameraView;
    UIButton *_torchBtn;
    UILabel *_tipLabel;
    APMCameraROIView *_roiView;
    UILabel *_btnTipLabel;
    APMTakePictureBtnView *_takePictureBtn;
    APMPreviewController *_previewVC;
    NSDictionary *_options;
    UIImage *_image;
    NSObject<OS_dispatch_semaphore> *_semp;
    struct CGRect _roi;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semp; // @synthesize semp=_semp;
@property(nonatomic) struct CGRect roi; // @synthesize roi=_roi;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) __weak APMPreviewController *previewVC; // @synthesize previewVC=_previewVC;
@property(retain, nonatomic) APMTakePictureBtnView *takePictureBtn; // @synthesize takePictureBtn=_takePictureBtn;
@property(retain, nonatomic) UILabel *btnTipLabel; // @synthesize btnTipLabel=_btnTipLabel;
@property(retain, nonatomic) APMCameraROIView *roiView; // @synthesize roiView=_roiView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *torchBtn; // @synthesize torchBtn=_torchBtn;
@property(retain, nonatomic) APMCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) __weak id <APMCameraControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleImage:(id)arg1 error:(id)arg2;
- (struct CGRect)roi:(struct CGRect)arg1 inImage:(id)arg2;
- (void)notifyDelegateDidConfirmAlert;
- (void)notifyDelegateDidCancelAlert;
- (void)notifyDelegateDidFinishProcessing;
- (void)notifyDelegateDidCancelProcessing;
- (id)notifyDelegateWillStartProcessing;
- (void)notifyDelegateForWillPreviewing;
- (void)handleResponseError:(id)arg1;
- (void)refreshTorchBtn;
- (void)setButtonEnabled:(_Bool)arg1;
- (void)setTorchMode:(long long)arg1;
- (_Bool)showGuideForCameraAuthIfNeed;
- (void)cameraView:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)previewControllerDidConfirmAlert:(id)arg1;
- (void)previewControllerDidCancelAlert:(id)arg1;
- (void)previewControllerDidFinishProcessing:(id)arg1;
- (void)previewControllerDidCancelProcessing:(id)arg1;
- (id)previewControllerWillStartProcessing:(id)arg1;
- (void)takePictureBtnDidPressed:(id)arg1;
- (void)swithTorch:(id)arg1;
- (void)setupCameraView;
- (void)updateBarItems;
- (void)restart;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
