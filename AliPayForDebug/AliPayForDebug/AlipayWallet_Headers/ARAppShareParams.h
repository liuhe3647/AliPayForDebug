//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APSKShareContent, NSString, UIColor;

@interface ARAppShareParams : NSObject
{
    NSString *_launchpadTitle;
    UIColor *_launchpadColor;
    NSString *_shareBizType;
    long long _shareChannelType;
    APSKShareContent *_shareContent;
    NSString *_appId;
    long long _resourceId;
    NSString *_tokenTitle;
    NSString *_preContent;
    NSString *_shortToken;
    NSString *_endContent;
}

@property(retain, nonatomic) NSString *endContent; // @synthesize endContent=_endContent;
@property(retain, nonatomic) NSString *shortToken; // @synthesize shortToken=_shortToken;
@property(retain, nonatomic) NSString *preContent; // @synthesize preContent=_preContent;
@property(retain, nonatomic) NSString *tokenTitle; // @synthesize tokenTitle=_tokenTitle;
@property(nonatomic) long long resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) APSKShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) long long shareChannelType; // @synthesize shareChannelType=_shareChannelType;
@property(copy, nonatomic) NSString *shareBizType; // @synthesize shareBizType=_shareBizType;
@property(retain, nonatomic) UIColor *launchpadColor; // @synthesize launchpadColor=_launchpadColor;
@property(copy, nonatomic) NSString *launchpadTitle; // @synthesize launchpadTitle=_launchpadTitle;
- (void).cxx_destruct;

@end
