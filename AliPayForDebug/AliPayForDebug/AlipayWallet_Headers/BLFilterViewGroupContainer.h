//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BLFilterTitleLabel, NSArray, NSDictionary, NSString;

@interface BLFilterViewGroupContainer : UIView
{
    NSDictionary *_selectedItem;
    long long _selectedIndex;
    NSString *_extraSpmId;
    UIView *_mainView;
    NSArray *_list;
    BLFilterTitleLabel *_titleLabel;
}

@property(retain, nonatomic) BLFilterTitleLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) NSString *extraSpmId; // @synthesize extraSpmId=_extraSpmId;
@property(readonly, nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSDictionary *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void).cxx_destruct;
- (void)submit;
- (void)reset;
- (void)selectCategory:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)show;
- (void)hide;
- (id)initWithFrame:(struct CGRect)arg1;

@end

