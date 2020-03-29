//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APDAOResult, NSArray, NSNumber, NSString, SNSendModel;

@protocol SNSendDataManagerDAOProtocol <NSObject>
- (APDAOResult *)deleteSendMessagesWithout:(NSArray *)arg1;
- (APDAOResult *)updateSendMessages:(NSArray *)arg1;
- (APDAOResult *)deleteSendMessages:(NSArray *)arg1;
- (APDAOResult *)updateAllMessagesSendingStatus:(NSNumber *)arg1;
- (NSArray *)querySendingMessagesWithMessageStatus:(NSNumber *)arg1 bizs:(NSArray *)arg2;
- (NSArray *)querySendingMessagesWithMessageBizs:(NSArray *)arg1;
- (NSArray *)querySendingAllMessage;
- (NSArray *)querySendMessageWithClientMsgIDs:(NSArray *)arg1;
- (SNSendModel *)querySendMessageWithClientMsgID:(NSString *)arg1;
- (APDAOResult *)insertSendMessage:(SNSendModel *)arg1;
- (APDAOResult *)insertSendMessages:(NSArray *)arg1;
@end
