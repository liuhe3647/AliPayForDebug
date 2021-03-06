//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AUButtonPanelDelegate-Protocol.h"

@class NSArray, NSString;
@protocol AUMultiStyleCellDelegate;

@interface AUMultiStyleCellView : UIView <AUButtonPanelDelegate>
{
    id <AUMultiStyleCellDelegate> _delegate;
    NSArray *_cellDataArray;
}

@property(retain, nonatomic) NSArray *cellDataArray; // @synthesize cellDataArray=_cellDataArray;
@property(nonatomic) __weak id <AUMultiStyleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateSelectedState;
- (void)DidClickButton:(id)arg1 ForRowAtIndexpath:(id)arg2;
- (void)clickCellView:(id)arg1;
- (double)createSubView;
- (id)initWithFrame:(struct CGRect)arg1 cellDataArray:(id)arg2 isUpward:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

