//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface AUView : UIView
{
    _Bool _auMaskPassEvent;
    unsigned int _aubadgeViewEdge;
    UIView *_aubadgeView;
    AUView *_auMaskView;
    CDUnknownBlockType _auMaskHideBlock;
}

@property(nonatomic) _Bool auMaskPassEvent; // @synthesize auMaskPassEvent=_auMaskPassEvent;
@property(copy, nonatomic) CDUnknownBlockType auMaskHideBlock; // @synthesize auMaskHideBlock=_auMaskHideBlock;
@property(retain, nonatomic) AUView *auMaskView; // @synthesize auMaskView=_auMaskView;
@property(nonatomic) unsigned int aubadgeViewEdge; // @synthesize aubadgeViewEdge=_aubadgeViewEdge;
@property(retain, nonatomic) UIView *aubadgeView; // @synthesize aubadgeView=_aubadgeView;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)hideMaskView:(_Bool)arg1;
- (id)showMaskView:(id)arg1 animated:(_Bool)arg2 hideByTouch:(_Bool)arg3 hideBlock:(CDUnknownBlockType)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
