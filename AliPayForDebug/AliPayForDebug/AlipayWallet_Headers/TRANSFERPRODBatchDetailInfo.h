//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface TRANSFERPRODBatchDetailInfo : NSObject <NSCopying>
{
    _Bool _creator;
    _Bool _toper;
    NSString *_userId;
    NSString *_loginId;
    NSString *_userName;
    NSString *_payAmount;
    NSString *_status;
    NSString *_message;
    NSString *_orderNo;
    NSString *_batchNo;
    NSString *_detailNo;
    NSDate *_lastModified;
    NSString *_userHeadUrl;
    NSString *_nickName;
    NSString *_failMessage;
    NSString *_serviceCharge;
}

@property(nonatomic) _Bool toper; // @synthesize toper=_toper;
@property(retain, nonatomic) NSString *serviceCharge; // @synthesize serviceCharge=_serviceCharge;
@property(retain, nonatomic) NSString *failMessage; // @synthesize failMessage=_failMessage;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userHeadUrl; // @synthesize userHeadUrl=_userHeadUrl;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *detailNo; // @synthesize detailNo=_detailNo;
@property(retain, nonatomic) NSString *batchNo; // @synthesize batchNo=_batchNo;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
