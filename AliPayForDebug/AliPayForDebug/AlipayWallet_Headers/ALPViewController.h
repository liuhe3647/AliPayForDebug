//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZViewController.h"

@class ALPViewControllerHelper, NSString;

@interface ALPViewController : VZViewController
{
    _Bool _isAppear;
    NSString *_bizType;
    ALPViewControllerHelper *_vcHelper;
}

@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(retain, nonatomic) ALPViewControllerHelper *vcHelper; // @synthesize vcHelper=_vcHelper;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (void)writeViewExposureLog:(id)arg1;
- (_Bool)canWriteExposure;
- (id)pageParams;
- (id)pageSpm;
- (id)hanleDetailError:(id)arg1 withModel:(id)arg2 hasCache:(_Bool)arg3 action:(SEL)arg4 resultView:(id)arg5;
- (void)showErrorToast:(id)arg1;
- (void)modelDidStart:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)reload;
- (void)load;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

