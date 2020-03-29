//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OViewController.h"

#import "O2OCommonSchemeProtocol-Protocol.h"
#import "O2OLcVideoPlayVCProtocol-Protocol.h"

@class AULoadingIndicatorView, AUNetErrorView, NSString, O2OLcVideoAccessoryView, O2OLcVideoPlayCell, O2OLcVideoPlayContext, O2OLcVideoPlayDataSource, O2OLcVideoPlayDelegate, O2OLcVideoPlayDetailModel, O2OLcVideoPlayListModel, O2OMistListItem, UIButton, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface O2OLcVideoPlayViewController : O2OViewController <O2OCommonSchemeProtocol, O2OLcVideoPlayVCProtocol>
{
    _Bool _isList;
    _Bool _reloading;
    UIView *_bottomInputView;
    O2OLcVideoAccessoryView *_accessoryView;
    O2OMistListItem *_bottomInputMistItem;
    O2OLcVideoPlayCell *_playingVideoCell;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    O2OLcVideoPlayContext *_videoContext;
    AUNetErrorView *_netErrorView;
    AUNetErrorView *_netLimitView;
    AULoadingIndicatorView *_indicatorView;
    UIButton *_backBtn;
    UIView *_guideView;
    O2OLcVideoPlayDetailModel *_detailModel;
    O2OLcVideoPlayListModel *_listModel;
    O2OLcVideoPlayDelegate *_dl;
    O2OLcVideoPlayDataSource *_ds;
    NSString *_contentId;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(nonatomic) _Bool isList; // @synthesize isList=_isList;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) O2OLcVideoPlayDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OLcVideoPlayDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OLcVideoPlayListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) O2OLcVideoPlayDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) UIView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) AULoadingIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) AUNetErrorView *netLimitView; // @synthesize netLimitView=_netLimitView;
@property(retain, nonatomic) AUNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) O2OLcVideoPlayContext *videoContext; // @synthesize videoContext=_videoContext;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak O2OLcVideoPlayCell *playingVideoCell; // @synthesize playingVideoCell=_playingVideoCell;
@property(readonly, nonatomic) O2OMistListItem *bottomInputMistItem; // @synthesize bottomInputMistItem=_bottomInputMistItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) O2OLcVideoAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIView *bottomInputView; // @synthesize bottomInputView=_bottomInputView;
- (void)guideControlAction;
- (void)onClickBack:(id)arg1;
- (void)p_handleError:(id)arg1 containerView:(id)arg2;
- (void)p_stopLoadingAnimation;
- (void)p_startLoadingAnimation;
- (void)performGuideAnimation;
- (void)showEmpty:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)deleteContentWithId:(id)arg1;
- (_Bool)isModelLoading;
- (void)loadMore;
- (_Bool)hasMore;
- (void)resetBottomInputView;
- (void)fetchCurrentVideoData;
- (void)reloadData;
- (id)pageSpm;
- (_Bool)autohideNavigationBar;
- (void)dealloc;
- (void)setDisplayingPlayerPause:(_Bool)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
