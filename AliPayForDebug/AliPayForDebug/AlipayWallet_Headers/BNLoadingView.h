//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUILoadingIndicatorView, DTViewController, NSDictionary, NSString, UIImageView, UILabel;

@interface BNLoadingView : UIView
{
    NSDictionary *_options;
    UIImageView *_iconView;
    UILabel *_sloganLabel;
    AUILoadingIndicatorView *_indicatorView;
    int _loadResult;
    NSString *_errMsg;
    _Bool _animationFinish;
    UIView *_loadedView;
    CDUnknownBlockType _finishBlock;
    DTViewController *_desVC;
    UIImageView *_errView;
    UILabel *_errLabel;
}

@property(retain, nonatomic) UILabel *errLabel; // @synthesize errLabel=_errLabel;
@property(retain, nonatomic) UIImageView *errView; // @synthesize errView=_errView;
@property(retain, nonatomic) DTViewController *desVC; // @synthesize desVC=_desVC;
- (void).cxx_destruct;
- (void)appstatusNotify:(id)arg1;
- (void)tabGestureAction:(id)arg1;
- (void)dimiss:(CDUnknownBlockType)arg1 animateFrame:(_Bool)arg2;
- (void)checkAndFinishLoad;
- (void)startLoading:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)releaseBNVAndNotification;
- (void)initBNVCAndNotification;
- (void)layoutElements:(_Bool)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end
