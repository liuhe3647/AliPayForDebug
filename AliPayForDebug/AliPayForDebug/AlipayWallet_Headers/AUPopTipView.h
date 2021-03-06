//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUPopDrawBoardView.h"

@class AUPopTipContentView;

@interface AUPopTipView : AUPopDrawBoardView
{
    AUPopTipContentView *_contentView;
    CDUnknownBlockType _actionOnClose;
}

+ (id)showFromView:(id)arg1 fromPoint:(struct CGPoint)arg2 toView:(id)arg3 animated:(_Bool)arg4 withText:(id)arg5 buttonTitle:(id)arg6;
@property(copy, nonatomic) CDUnknownBlockType actionOnClose; // @synthesize actionOnClose=_actionOnClose;
- (void).cxx_destruct;
- (id)contentView;
- (void)setAppearenceColor:(id)arg1;
- (void)showFromView:(id)arg1 fromPoint:(struct CGPoint)arg2 toView:(id)arg3;
- (void)removeCloseX;
- (id)initWithText:(id)arg1 buttonTitle:(id)arg2 buttonAction:(CDUnknownBlockType)arg3;
- (id)initRightCloseButtonWithText:(id)arg1 detailText:(id)arg2 iconView:(id)arg3;

@end

