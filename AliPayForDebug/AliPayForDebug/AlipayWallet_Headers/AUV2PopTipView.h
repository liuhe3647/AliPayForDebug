//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUPopDrawBoardView.h"

@class AUV2PopContentView;

@interface AUV2PopTipView : AUPopDrawBoardView
{
    AUV2PopContentView *_contentView;
    CDUnknownBlockType _actionOnClose;
    CDUnknownBlockType _actionOnButtonAction;
}

@property(copy, nonatomic) CDUnknownBlockType actionOnButtonAction; // @synthesize actionOnButtonAction=_actionOnButtonAction;
@property(copy, nonatomic) CDUnknownBlockType actionOnClose; // @synthesize actionOnClose=_actionOnClose;
- (void).cxx_destruct;
- (id)contentView;
- (void)updateFrameFromCustomView;
- (void)showFromView:(id)arg1 fromPoint:(struct CGPoint)arg2 toView:(id)arg3;
- (void)layoutCustomView:(id)arg1 toView:(id)arg2;
- (void)showAtOrigin:(struct CGPoint)arg1 originType:(long long)arg2 inView:(id)arg3 direction:(long long)arg4;
- (void)showAtOrigin:(struct CGPoint)arg1 inView:(id)arg2 direction:(long long)arg3;
- (id)initWithText:(id)arg1 buttonTitle:(id)arg2 buttonAction:(CDUnknownBlockType)arg3;
- (id)initPopBarWithText:(id)arg1 buttonTitle:(id)arg2 buttonAction:(CDUnknownBlockType)arg3;

@end
