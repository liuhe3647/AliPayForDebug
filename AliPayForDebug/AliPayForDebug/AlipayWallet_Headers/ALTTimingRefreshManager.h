//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALTDataManager, FinaggexpbffResponsePB, NSArray;

@interface ALTTimingRefreshManager : NSObject
{
    _Bool _started;
    ALTDataManager *_dataManager;
    NSArray *_timerManagers;
    FinaggexpbffResponsePB *_response;
}

@property(retain, nonatomic) FinaggexpbffResponsePB *response; // @synthesize response=_response;
@property(copy, nonatomic) NSArray *timerManagers; // @synthesize timerManagers=_timerManagers;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) __weak ALTDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)createOrUpdateTimersWithResponse:(id)arg1;

@end

