//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFHomeCardVO : NSObject
{
    NSString *_cardId;
    long long _createTime;
    NSString *_bizType;
    NSString *_templateId;
    NSString *_templateData;
    NSString *_iosVersion;
    NSString *_ext;
}

@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *iosVersion; // @synthesize iosVersion=_iosVersion;
@property(copy, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;

@end

