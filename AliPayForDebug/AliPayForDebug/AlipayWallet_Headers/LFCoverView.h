//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LFBaseInfoNewStyleViewDelegate-Protocol.h"
#import "LFInfoSubviewProtocol-Protocol.h"
#import "LFOldAndNewCoverViewCommonMethodsProtocol-Protocol.h"

@class AULoadingIndicatorView, AUPopTipView, LFBaseInfoNewStyleView, LFCoverComponentView, LFOldFollowActivityView, LFOvalNewStyleView, LifeHomeResult, LifeHomeViewController, NSString, PublicLifeInfo, UIActivityIndicatorView, UIImageView;
@protocol LFCoverViewDelegate;

@interface LFCoverView : UIView <LFBaseInfoNewStyleViewDelegate, LFInfoSubviewProtocol, LFOldAndNewCoverViewCommonMethodsProtocol>
{
    _Bool _isLiked;
    _Bool _isFollowed;
    _Bool _needShowActivity;
    LifeHomeResult *_lifeInfo;
    PublicLifeInfo *_publicInfo;
    id <LFCoverViewDelegate> _delegate;
    UIImageView *_bgImage;
    LFBaseInfoNewStyleView *_newBaseInfoView;
    LFOvalNewStyleView *_followedNewStyleView;
    AULoadingIndicatorView *_progressView;
    LFCoverComponentView *_componentView;
    UIActivityIndicatorView *_indicatorView;
    UIView *_gradientView;
    NSString *_showStyle;
    LifeHomeViewController *_controller;
    AUPopTipView *_popTipView;
    NSString *_publicId;
    LFOldFollowActivityView *_oldFollowActivityView;
    NSString *_activityLabelText;
}

@property(retain, nonatomic) NSString *activityLabelText; // @synthesize activityLabelText=_activityLabelText;
@property(nonatomic) _Bool needShowActivity; // @synthesize needShowActivity=_needShowActivity;
@property(retain, nonatomic) LFOldFollowActivityView *oldFollowActivityView; // @synthesize oldFollowActivityView=_oldFollowActivityView;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) AUPopTipView *popTipView; // @synthesize popTipView=_popTipView;
@property(nonatomic) __weak LifeHomeViewController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSString *showStyle; // @synthesize showStyle=_showStyle;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) LFCoverComponentView *componentView; // @synthesize componentView=_componentView;
@property(retain, nonatomic) AULoadingIndicatorView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) LFOvalNewStyleView *followedNewStyleView; // @synthesize followedNewStyleView=_followedNewStyleView;
@property(retain, nonatomic) LFBaseInfoNewStyleView *newBaseInfoView; // @synthesize newBaseInfoView=_newBaseInfoView;
@property(retain, nonatomic) UIImageView *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) __weak id <LFCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) PublicLifeInfo *publicInfo; // @synthesize publicInfo=_publicInfo;
@property(retain, nonatomic) LifeHomeResult *lifeInfo; // @synthesize lifeInfo=_lifeInfo;
- (void).cxx_destruct;
- (void)onModifyFollow:(id)arg1;
- (void)headClicked;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollDidScroll:(id)arg1;
- (void)stopLoading;
- (void)stopIndicatorViewForFollowedView;
- (void)loadIndicatorViewForFollowedView;
- (void)forceFollow;
- (void)newFollowedViewClicked:(id)arg1;
- (void)hiddenTipView;
- (void)addComponentView;
- (void)removeComponentView;
- (void)refreshFollowedNewStyleView:(_Bool)arg1;
- (struct CGRect)frameOfFollowedNewStyleView;
- (void)refreshNewBaseInfoView;
- (void)refreshTipView:(_Bool)arg1;
- (void)refreshBackground:(id)arg1;
- (id)bgImage:(struct CGRect)arg1;
- (void)refreshLayout;
- (void)setNeedShowActivityWithLifeInfo:(id)arg1;
- (void)refreshLifeInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lifeInfo:(id)arg2 infoView:(id)arg3 controller:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

