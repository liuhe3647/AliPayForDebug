//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage;
@protocol LFHomeCardDAOProxy;

@interface LFHomeCardDBManager : NSObject
{
    id <LFHomeCardDAOProxy> _daoProxy;
    APCustomStorage *_storage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) id <LFHomeCardDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
- (void).cxx_destruct;
- (void)deleteAll;
- (id)getMessage:(id)arg1 cardId:(id)arg2;
- (id)getAllPublicLastMessages;
- (id)getLastMessage:(id)arg1;
- (id)getMessageListWithPublicId:(id)arg1 beginTime:(id)arg2;
- (id)getMessageWithMessageId:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)deleteMessageListWithMsgIdList:(id)arg1;
- (void)deleteLifeMessage:(id)arg1;
- (void)deleteAllHisPullMessage:(id)arg1;
- (_Bool)hasHisMessages:(id)arg1;
- (void)deleteAllLifeMessage:(id)arg1;
- (id)getTemplateCodeMessage:(id)arg1 limit:(long long)arg2;
- (id)getSingleTemplateMessage:(id)arg1 time:(long long)arg2 limit:(long long)arg3;
- (id)getSyncFeedMessages:(id)arg1 time:(long long)arg2 limit:(long long)arg3;
- (id)getBroadcastFeedMessages:(id)arg1 time:(long long)arg2 limit:(long long)arg3;
- (id)getFeedMessages:(id)arg1 time:(long long)arg2 limit:(long long)arg3;
- (id)getMessage:(id)arg1 time:(long long)arg2 limit:(long long)arg3 isSync:(_Bool)arg4;
- (id)getMessage:(id)arg1 time:(long long)arg2 limit:(long long)arg3;
- (void)updateMessage:(id)arg1;
- (void)saveMessage:(id)arg1;
- (void)initDataBase;

@end
