//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface YTCoreSoftwarePlayerUnitOperationQueue : NSObject
{
    NSOperationQueue *_queue;
}

@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)p_createTask:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)clean;
- (void)executionCompletionHandler:(CDUnknownBlockType)arg1 success:(_Bool)arg2;
- (void)addUnitOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUnitOperation:(id)arg1;
- (id)init;

@end
