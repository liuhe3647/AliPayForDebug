//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APCommonItemProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface GTDMessage : NSObject <APCommonItemProtocol, NSCopying>
{
    long long _localId;
    NSString *_msgId;
    NSString *_groupId;
    NSString *_bizType;
    long long _operationState;
    NSString *_templateCode;
    NSString *_templateData;
    NSString *_groupConfig;
    NSDate *_validTime;
    NSDate *_createTime;
    NSString *_thirdMsgId;
}

@property(copy, nonatomic) NSString *thirdMsgId; // @synthesize thirdMsgId=_thirdMsgId;
@property(copy, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSDate *validTime; // @synthesize validTime=_validTime;
@property(copy, nonatomic) NSString *groupConfig; // @synthesize groupConfig=_groupConfig;
@property(copy, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(copy, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(nonatomic) long long operationState; // @synthesize operationState=_operationState;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long localId; // @synthesize localId=_localId;
- (void).cxx_destruct;
- (id)toDict;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)commonID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

