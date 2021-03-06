//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMMuteSwitchDetector : NSObject
{
    _Bool _isMute;
    _Bool _forceEmit;
    _Bool _isPaused;
    _Bool _isPlaying;
    unsigned int _soundId;
    double _interval;
    CDUnknownBlockType _silentNotify;
}

@property(copy, nonatomic) CDUnknownBlockType silentNotify; // @synthesize silentNotify=_silentNotify;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool forceEmit; // @synthesize forceEmit=_forceEmit;
@property(nonatomic) unsigned int soundId; // @synthesize soundId=_soundId;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
- (void).cxx_destruct;
- (void)loopCheck;
- (void)complete;
- (void)scheduleCall;
- (void)willReturnToForeground;
- (void)didEnterBackground;
- (void)startDetecting;
- (void)stopDetecting;
- (void)startDetecting:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

