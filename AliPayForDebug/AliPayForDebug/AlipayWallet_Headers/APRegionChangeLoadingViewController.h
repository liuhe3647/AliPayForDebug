//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AUDialogDelegate-Protocol.h"

@class AUNoticeDialog, AUToast, NSString;

@interface APRegionChangeLoadingViewController : DTViewController <AUDialogDelegate>
{
    AUToast *_loading;
    AUNoticeDialog *_dialog;
}

@property(retain, nonatomic) AUNoticeDialog *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) AUToast *loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startLoading;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

