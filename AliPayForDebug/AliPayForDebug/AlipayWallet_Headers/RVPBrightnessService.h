//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface RVPBrightnessService : NSObject
{
    NSTimer *_timer;
    NSMutableArray *_brightnessList;
    long long _state;
    _Bool _isRiseup;
    double _latestSourceBrightness;
    double _latestTargetBrightness;
}

+ (id)brightnessService;
@property(nonatomic) double latestTargetBrightness; // @synthesize latestTargetBrightness=_latestTargetBrightness;
@property(nonatomic) double latestSourceBrightness; // @synthesize latestSourceBrightness=_latestSourceBrightness;
- (void).cxx_destruct;
- (void)destroyTimer;
- (_Bool)updateBrightnessConflict;
- (void)updateBrightnessWithTimer:(id)arg1;
- (void)updateCurrentState:(long long)arg1;
- (void)startTimerWithSourceValue:(double)arg1 targetValue:(double)arg2 isRiseup:(_Bool)arg3;
- (void)applicationProtectedDataDidBecomeAvailable:(id)arg1;
- (void)dealloc;
- (_Bool)isIncreaseBrightness;
- (_Bool)isDecreaseBrightness;
- (void)didEnterBackground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)addNotification;
- (id)init;

@end
