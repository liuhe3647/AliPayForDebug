//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CDPSpaceObjectInfo, UIImageView;

@interface O2OSearchFloatPromotionView : UIView
{
    CDUnknownBlockType _onCloseAction;
    CDUnknownBlockType _onClickAction;
    UIImageView *_imageView;
    CDPSpaceObjectInfo *_spaceInfo;
}

@property(retain, nonatomic) CDPSpaceObjectInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType onClickAction; // @synthesize onClickAction=_onClickAction;
@property(copy, nonatomic) CDUnknownBlockType onCloseAction; // @synthesize onCloseAction=_onCloseAction;
- (void).cxx_destruct;
- (void)onTap:(id)arg1;
- (void)update:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
