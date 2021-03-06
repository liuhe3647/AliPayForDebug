//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, RECollectionViewFlowLayout, UICollectionView;
@protocol RETemplateTabbarDelegate;

@interface RETemplateTabbar : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    double _currentWidth;
    unsigned long long _currentIndex;
    unsigned long long _oldIndex;
    id <RETemplateTabbarDelegate> _delegate;
    NSArray *_tabModelArray;
    UICollectionView *_collectionView;
    RECollectionViewFlowLayout *_flowLayout;
    NSArray *_deltaRGBA;
    NSArray *_selectedColorRGBA;
    NSArray *_normalColorRGBA;
    UIView *_partingLine;
}

@property(retain, nonatomic) UIView *partingLine; // @synthesize partingLine=_partingLine;
@property(retain, nonatomic) NSArray *normalColorRGBA; // @synthesize normalColorRGBA=_normalColorRGBA;
@property(retain, nonatomic) NSArray *selectedColorRGBA; // @synthesize selectedColorRGBA=_selectedColorRGBA;
@property(retain, nonatomic) NSArray *deltaRGBA; // @synthesize deltaRGBA=_deltaRGBA;
@property(retain, nonatomic) RECollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *tabModelArray; // @synthesize tabModelArray=_tabModelArray;
@property(nonatomic) __weak id <RETemplateTabbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getColorRGBA:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)adjustTabOffSetToCurrentIndex:(long long)arg1 isInner:(_Bool)arg2 withAnimate:(_Bool)arg3;
- (void)adjustUIWithProgress:(double)arg1 oldIndex:(long long)arg2 currentIndex:(long long)arg3;
- (void)reloadData;
- (void)reloadWithData:(id)arg1 defaultSelectedTag:(id)arg2;
- (void)adjustUIWhenBtnOnClickWithAnimate:(_Bool)arg1 taped:(_Bool)arg2;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

