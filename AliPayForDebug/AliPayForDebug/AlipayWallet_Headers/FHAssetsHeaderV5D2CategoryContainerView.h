//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol FHAssetsCategoryContainerViewDelegateV5;

@interface FHAssetsHeaderV5D2CategoryContainerView : UIView
{
    _Bool _rootViewIsAppeared;
    NSArray *_categoryControlList;
    id <FHAssetsCategoryContainerViewDelegateV5> _weakDelegate;
}

@property(nonatomic) __weak id <FHAssetsCategoryContainerViewDelegateV5> weakDelegate; // @synthesize weakDelegate=_weakDelegate;
@property(retain, nonatomic) NSArray *categoryControlList; // @synthesize categoryControlList=_categoryControlList;
@property(nonatomic) _Bool rootViewIsAppeared; // @synthesize rootViewIsAppeared=_rootViewIsAppeared;
- (void).cxx_destruct;
- (id)viewsNeedExposure;
- (void)shouldExposureCategoryView;
- (void)calculateExposureView;
- (void)didClickItem:(id)arg1;
- (id)createCategoryViewArrayIfNeeded:(id)arg1 containerView:(id)arg2;
- (void)updateData:(id)arg1 assetVersion:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

