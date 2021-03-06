//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@interface APURLSessionManager : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_mutableTaskDelegatesKeyedByTaskIdentifier;
    NSLock *_lock;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *mutableTaskDelegatesKeyedByTaskIdentifier; // @synthesize mutableTaskDelegatesKeyedByTaskIdentifier=_mutableTaskDelegatesKeyedByTaskIdentifier;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeDelegateForTask:(id)arg1;
- (id)delegateForTask:(id)arg1;
- (void)addDelegate:(id)arg1 forTask:(id)arg2;
- (id)dataTaskWithRequest:(id)arg1 andDelegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

