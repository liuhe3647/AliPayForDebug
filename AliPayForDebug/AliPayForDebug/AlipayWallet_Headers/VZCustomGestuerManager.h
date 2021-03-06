//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "VZGestureMessageProtocol-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface VZCustomGestuerManager : NSObject <UIGestureRecognizerDelegate, VZGestureMessageProtocol>
{
    _Bool _disableScroll;
    _Bool _hasTap;
    _Bool _hasLongTap;
    _Bool _hasTouch;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_messagequeue;
}

@property(nonatomic) _Bool hasTouch; // @synthesize hasTouch=_hasTouch;
@property(nonatomic) _Bool hasLongTap; // @synthesize hasLongTap=_hasLongTap;
@property(nonatomic) _Bool hasTap; // @synthesize hasTap=_hasTap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messagequeue; // @synthesize messagequeue=_messagequeue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool disableScroll; // @synthesize disableScroll=_disableScroll;
- (void).cxx_destruct;
- (void)callbackMessage:(id)arg1;
- (void)sendGestureMessage:(id)arg1 data:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)customAction:(id)arg1;
- (void)longPressGestureAction:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (id)getDetail:(id)arg1;
- (void)setUpContainerView:(id)arg1;
- (void)setUpCallback:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithTap:(_Bool)arg1 Long:(_Bool)arg2 Touch:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

