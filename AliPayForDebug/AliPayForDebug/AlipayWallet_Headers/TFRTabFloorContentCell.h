//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFRBaseCell.h"

@class NSMutableArray;

@interface TFRTabFloorContentCell : TFRBaseCell
{
    struct CGRect _expoFrame;
    NSMutableArray *_floorCells;
}

@property(retain, nonatomic) NSMutableArray *floorCells; // @synthesize floorCells=_floorCells;
- (void).cxx_destruct;
- (void)refreshData;
- (void)queryData;
- (void)layoutSubviews;
- (void)layoutFloors;
- (void)removeFloor:(id)arg1;
- (void)appendFloor:(id)arg1;
- (_Bool)isCellVisble:(id)arg1;
- (void)cellExpoFrame:(struct CGRect)arg1;
- (void)cellEndDisplay;
- (void)cellWillDisplay;
- (void)viewFirstLoadInTab;
- (void)onPluginEvent:(id)arg1;
- (void)configureTheme:(id)arg1 theme:(id)arg2;
- (void)setWidth:(double)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)destory;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
