//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SNQueue;

@interface SNRetryManager : NSObject
{
    SNQueue *_queue;
}

+ (int)getRetryTimes;
+ (id)shareInstance;
@property(retain, nonatomic) SNQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)doTask:(id)arg1 shouldRetry:(CDUnknownBlockType)arg2;
- (void)doRetryTaskAsync:(id)arg1 shouldRetry:(CDUnknownBlockType)arg2 finishTask:(CDUnknownBlockType)arg3;
- (void)doRetryTaskSync:(id)arg1 shouldRetry:(CDUnknownBlockType)arg2 finishTask:(CDUnknownBlockType)arg3;
- (id)init;

@end
