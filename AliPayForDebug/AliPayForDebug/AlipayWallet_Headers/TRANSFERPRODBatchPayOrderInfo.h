//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRANSFERPRODBatchPayOrderInfo : NSObject
{
    NSString *_userId;
    NSString *_orderNo;
    NSString *_bizType;
    NSString *_subBizType;
}

@property(retain, nonatomic) NSString *subBizType; // @synthesize subBizType=_subBizType;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
