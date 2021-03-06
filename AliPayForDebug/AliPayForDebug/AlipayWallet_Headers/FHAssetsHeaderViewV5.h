//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AFHAssetHeaderViewDelegate-Protocol.h"
#import "FHAssetsCategoryContainerViewDelegateV5-Protocol.h"

@class FHAssetsCategoryContainerViewV5, FHAssetsHeaderMoreControlV5, FHAssetsHeaderV5D2CategoryContainerView, FHAssetsHeaderV5DataModel, FHAssetsTopControlV5, NSArray, NSString, UILabel;
@protocol FHTemplateClickDelegate;

@interface FHAssetsHeaderViewV5 : UIView <FHAssetsCategoryContainerViewDelegateV5, AFHAssetHeaderViewDelegate>
{
    _Bool _animating;
    _Bool _isExpanded;
    _Bool _fingerOnScreen;
    _Bool _hasRecordExpand;
    _Bool _disableAnimation;
    id <FHTemplateClickDelegate> _delegate;
    FHAssetsHeaderV5DataModel *_dataModel;
    UIView *_assetContainerView;
    FHAssetsTopControlV5 *_assetControl;
    UIView *_latestAssetContainerView;
    NSArray *_latestAssetViewArray;
    UIView *_liabilityContainerView;
    UILabel *_liabilityTitleLabel;
    NSArray *_liabilityViewArray;
    FHAssetsHeaderMoreControlV5 *_moreControl;
    FHAssetsCategoryContainerViewV5 *_categoryContainerView;
    FHAssetsHeaderV5D2CategoryContainerView *_categoryContainerViewV5D2;
    double _assetContainerViewOriginHeight;
    double _assetContainerViewMaxHeight;
    double _assetContainerViewMinHeight;
    double _latestAssetContainerViewHeight;
    double _liabilityContainerViewHeight;
    FHAssetsHeaderV5DataModel *_holdedDataModel;
}

@property(nonatomic) _Bool disableAnimation; // @synthesize disableAnimation=_disableAnimation;
@property(nonatomic) _Bool hasRecordExpand; // @synthesize hasRecordExpand=_hasRecordExpand;
@property(retain, nonatomic) FHAssetsHeaderV5DataModel *holdedDataModel; // @synthesize holdedDataModel=_holdedDataModel;
@property(nonatomic) double liabilityContainerViewHeight; // @synthesize liabilityContainerViewHeight=_liabilityContainerViewHeight;
@property(nonatomic) double latestAssetContainerViewHeight; // @synthesize latestAssetContainerViewHeight=_latestAssetContainerViewHeight;
@property(nonatomic) double assetContainerViewMinHeight; // @synthesize assetContainerViewMinHeight=_assetContainerViewMinHeight;
@property(nonatomic) double assetContainerViewMaxHeight; // @synthesize assetContainerViewMaxHeight=_assetContainerViewMaxHeight;
@property(nonatomic) double assetContainerViewOriginHeight; // @synthesize assetContainerViewOriginHeight=_assetContainerViewOriginHeight;
@property(retain, nonatomic) FHAssetsHeaderV5D2CategoryContainerView *categoryContainerViewV5D2; // @synthesize categoryContainerViewV5D2=_categoryContainerViewV5D2;
@property(retain, nonatomic) FHAssetsCategoryContainerViewV5 *categoryContainerView; // @synthesize categoryContainerView=_categoryContainerView;
@property(retain, nonatomic) FHAssetsHeaderMoreControlV5 *moreControl; // @synthesize moreControl=_moreControl;
@property(retain, nonatomic) NSArray *liabilityViewArray; // @synthesize liabilityViewArray=_liabilityViewArray;
@property(retain, nonatomic) UILabel *liabilityTitleLabel; // @synthesize liabilityTitleLabel=_liabilityTitleLabel;
@property(retain, nonatomic) UIView *liabilityContainerView; // @synthesize liabilityContainerView=_liabilityContainerView;
@property(retain, nonatomic) NSArray *latestAssetViewArray; // @synthesize latestAssetViewArray=_latestAssetViewArray;
@property(retain, nonatomic) UIView *latestAssetContainerView; // @synthesize latestAssetContainerView=_latestAssetContainerView;
@property(retain, nonatomic) FHAssetsTopControlV5 *assetControl; // @synthesize assetControl=_assetControl;
@property(retain, nonatomic) UIView *assetContainerView; // @synthesize assetContainerView=_assetContainerView;
@property(nonatomic) _Bool fingerOnScreen; // @synthesize fingerOnScreen=_fingerOnScreen;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) FHAssetsHeaderV5DataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FHTemplateClickDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewsNeedExposure;
- (void)scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1;
- (void)scrollViewWillBeginDragging;
- (_Bool)scrollViewDidScrollOffsetY:(double)arg1;
- (void)doAutoShrink:(struct CGPoint)arg1;
- (void)doAutoExpand:(struct CGPoint)arg1 needHapic:(_Bool)arg2;
- (void)layoutSubViewWithAssetHeight:(double)arg1 needHapic:(_Bool)arg2;
- (void)postEvaluateExposureNotification;
- (void)handleHoldDataAndExposure:(_Bool)arg1;
- (void)lanuageDidChange;
- (void)categoryViewDidChange;
- (void)shouldExposureCategoryView;
- (void)didClickFloatTips:(id)arg1 categoryDataModel:(id)arg2;
- (void)didClickItem:(id)arg1;
- (void)assetControlDidClickItem:(id)arg1;
- (id)createAssetViewArrayIfNeeded:(id)arg1 cacheViewArray:(id)arg2 parentView:(id)arg3 originY:(double)arg4 hasMark:(_Bool *)arg5 isLatestAssets:(_Bool)arg6;
- (void)updateData:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)updateData:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

