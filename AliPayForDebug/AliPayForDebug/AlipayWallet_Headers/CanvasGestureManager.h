//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CanvasCustomRecognizer, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CanvasContainerProtocol;

@interface CanvasGestureManager : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _disableScroll;
    id <CanvasContainerProtocol> _msgDelegate;
    UITapGestureRecognizer *_tapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    CanvasCustomRecognizer *_customGesture;
}

@property(retain, nonatomic) CanvasCustomRecognizer *customGesture; // @synthesize customGesture=_customGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <CanvasContainerProtocol> msgDelegate; // @synthesize msgDelegate=_msgDelegate;
@property(nonatomic) _Bool disableScroll; // @synthesize disableScroll=_disableScroll;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)customAction:(id)arg1;
- (void)sendMessage:(id)arg1 data:(id)arg2;
- (void)longPressGestureAction:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (id)getDetail:(id)arg1;
- (id)initWithContainerView:(id)arg1 msgDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
