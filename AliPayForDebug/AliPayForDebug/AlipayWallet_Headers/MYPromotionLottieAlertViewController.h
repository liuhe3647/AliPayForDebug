//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MYPromotionAlertViewController.h"

#import "LOTAssetsRetriver-Protocol.h"

@class LOTAnimationView, NSString;

@interface MYPromotionLottieAlertViewController : MYPromotionAlertViewController <LOTAssetsRetriver>
{
    LOTAnimationView *_lottieView;
    NSString *_lottiePath;
}

@property(copy, nonatomic) NSString *lottiePath; // @synthesize lottiePath=_lottiePath;
@property(retain, nonatomic) LOTAnimationView *lottieView; // @synthesize lottieView=_lottieView;
- (void).cxx_destruct;
- (void)onDidShow;
- (id)getImageOfPath:(id)arg1;
- (void)setupView;
- (void)continueLottie;
- (void)pauseLottie;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)onViewDidLoad;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

