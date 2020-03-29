//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APLBSLocation, NSTimer, PPChatDataController;

@interface PPChatReportManager : NSObject
{
    _Bool _isCleared;
    _Bool _hasRegistNotification;
    _Bool _isInReporting;
    PPChatDataController *_dataController;
    APLBSLocation *_currentLocation;
    NSTimer *_timer;
}

@property _Bool isInReporting; // @synthesize isInReporting=_isInReporting;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) APLBSLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) _Bool hasRegistNotification; // @synthesize hasRegistNotification=_hasRegistNotification;
@property(nonatomic) _Bool isCleared; // @synthesize isCleared=_isCleared;
@property(retain, nonatomic) PPChatDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)reportLocation:(long long)arg1;
- (void)retrieveAndReportLocation;
- (void)setupLocationManager;
- (void)observeNotifications;
- (void)reportClear;
- (void)dealloc;
- (id)initWithPublicId:(id)arg1;

@end
