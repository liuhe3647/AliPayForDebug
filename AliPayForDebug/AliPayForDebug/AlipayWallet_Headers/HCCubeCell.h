//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;
@protocol CKView, CSCardContainerProtocol;

@interface HCCubeCell : UICollectionViewCell
{
    long long _relativePosition;
    UIView<CKView> *_canvas;
    id <CSCardContainerProtocol> _container;
}

@property(retain, nonatomic) id <CSCardContainerProtocol> container; // @synthesize container=_container;
@property(retain, nonatomic) UIView<CKView> *canvas; // @synthesize canvas=_canvas;
@property(nonatomic) long long relativePosition; // @synthesize relativePosition=_relativePosition;
- (void).cxx_destruct;
- (id)getBackgroundView;
- (void)renderBy:(id)arg1 cardsdk:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

