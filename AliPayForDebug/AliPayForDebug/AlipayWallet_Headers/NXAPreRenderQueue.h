//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NXAPreRenderQueue : NSObject
{
    unsigned long long _maxCount;
    NSMutableArray *_queue;
}

@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
- (id)tasks;
- (void)removeInRange:(struct _NSRange)arg1;
- (void)clear;
- (unsigned long long)size;
- (id)remove:(id)arg1;
- (_Bool)addTaskWith:(id)arg1 session:(id)arg2 sceneParam:(id)arg3 kickOut:(id)arg4;
- (id)task:(id)arg1;
- (void)didReceiveMemoryWarningNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end
