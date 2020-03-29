//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "timerOutHandles-Protocol.h"

@class NSString, NSTimer;

@interface MASSTimerBase : NSObject <timerOutHandles>
{
    _Bool _inRunloop;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property _Bool inRunloop; // @synthesize inRunloop=_inRunloop;
- (void).cxx_destruct;
- (void)DeleteFromRunLoop;
- (void)InsertIntoRunLoop:(id)arg1 internal:(double)arg2 repeat:(_Bool)arg3;
- (void)TimerOutHandle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
