//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SNGroupUploadManager;

@interface SNSendService : NSObject
{
    NSOperationQueue *_prepareQueue;
    NSOperationQueue *_sendNormalQueue;
    SNGroupUploadManager *_uploadManger;
}

+ (id)shareInstance;
@property(retain, nonatomic) SNGroupUploadManager *uploadManger; // @synthesize uploadManger=_uploadManger;
@property(retain, nonatomic) NSOperationQueue *sendNormalQueue; // @synthesize sendNormalQueue=_sendNormalQueue;
@property(retain, nonatomic) NSOperationQueue *prepareQueue; // @synthesize prepareQueue=_prepareQueue;
- (void).cxx_destruct;
- (void)cancelSendingNormalFeeds:(id)arg1;
- (void)cancelSendingFeed:(id)arg1;
- (_Bool)canAddFeedOpration:(id)arg1;
- (void)deleteStatusWithClientId:(id)arg1;
- (void)updateSendingToFail:(id)arg1;
- (void)updateSending:(id)arg1;
- (void)insertSendingStatus:(id)arg1;
- (void)sendNormalTask:(id)arg1;
- (void)sendResultWithStatus:(int)arg1 data:(id)arg2 task:(id)arg3;
- (void)dropTask:(id)arg1;
- (id)init;

@end
