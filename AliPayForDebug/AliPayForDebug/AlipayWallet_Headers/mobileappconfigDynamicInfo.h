//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface mobileappconfigDynamicInfo : NSObject
{
    int _priority;
    NSString *_appId;
    NSString *_bizId;
    NSString *_icon;
    NSString *_placeHolder;
    NSString *_dynamicId;
    long long _expireTime;
    NSString *_extInfo;
}

@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *dynamicId; // @synthesize dynamicId=_dynamicId;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int clickTimes;

@end
