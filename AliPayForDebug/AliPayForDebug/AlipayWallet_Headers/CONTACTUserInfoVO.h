//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CONTACTUserInfoVO : NSObject
{
    _Bool _active;
    NSString *_userId;
    NSString *_userAccount;
    NSString *_userName;
    NSString *_alias;
    NSString *_headUrl;
    NSString *_acctStatus;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *acctStatus; // @synthesize acctStatus=_acctStatus;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userAccount; // @synthesize userAccount=_userAccount;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

