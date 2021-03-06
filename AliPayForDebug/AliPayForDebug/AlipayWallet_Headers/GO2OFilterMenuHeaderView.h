//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OStickyTableHeaderView.h"

#import "GO2OMenuViewDelegate-Protocol.h"

@class GO2OMenuView, NSArray, NSString;
@protocol GO2OFilterMenuDelegate;

@interface GO2OFilterMenuHeaderView : GO2OStickyTableHeaderView <GO2OMenuViewDelegate>
{
    NSArray *_menuGroups;
    id <GO2OFilterMenuDelegate> _delegate;
    GO2OMenuView *_menuView;
    NSString *_spmPrefix;
}

@property(copy, nonatomic) NSString *spmPrefix; // @synthesize spmPrefix=_spmPrefix;
@property(retain, nonatomic) GO2OMenuView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak id <GO2OFilterMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
- (void).cxx_destruct;
- (void)didMenuToggled:(id)arg1;
- (void)didMenuExpanded:(id)arg1;
- (void)didMenuSelected:(id)arg1;
- (void)menuViewPopupWillHide;
- (void)menuViewPopupWillShow:(id)arg1;
- (void)dismissMenuView;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)fakeNecessaryMenuGroups:(id)arg1;
- (void)handleMenuGroups:(id)arg1;
- (id)initWithTableView:(id)arg1 section:(long long)arg2 spmTag:(id)arg3 menuGroups:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

