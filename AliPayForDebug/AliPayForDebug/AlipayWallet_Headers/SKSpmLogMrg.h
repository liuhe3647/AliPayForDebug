//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SKSpmLogMrg : NSObject
{
    NSString *_srcType;
    NSString *_bizType;
    NSString *_appId;
    NSString *_publicId;
    NSString *_url;
    NSString *_bizSpmId;
    NSString *_interfaceApi;
    NSString *_padTemplate;
    NSString *_orientation;
    NSDictionary *_logChannelDic;
}

+ (void)preRequestException:(id)arg1 view:(id)arg2;
+ (void)systemShareResult:(id)arg1 view:(id)arg2;
+ (id)instance;
@property(retain) NSDictionary *logChannelDic; // @synthesize logChannelDic=_logChannelDic;
@property(retain) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain) NSString *padTemplate; // @synthesize padTemplate=_padTemplate;
@property(retain) NSString *interfaceApi; // @synthesize interfaceApi=_interfaceApi;
@property(retain) NSString *bizSpmId; // @synthesize bizSpmId=_bizSpmId;
@property(retain) NSString *url; // @synthesize url=_url;
@property(retain) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain) NSString *appId; // @synthesize appId=_appId;
@property(retain) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain) NSString *srcType; // @synthesize srcType=_srcType;
- (void).cxx_destruct;
- (id)logChannelForChannelName:(id)arg1;
- (void)processErrorLogForChannel:(id)arg1 errorDesc:(id)arg2 extInfos:(id)arg3 view:(id)arg4;
- (void)shareResultForChannel:(id)arg1 extInfos:(id)arg2 view:(id)arg3;
- (void)sharePadItemSelectLogForChannel:(id)arg1 extInfos:(id)arg2 view:(id)arg3;
- (void)sharePadCancelLogForChannel:(id)arg1 view:(id)arg2;
- (void)shareErrorLogForChannel:(id)arg1 errorDesc:(id)arg2 extInfos:(id)arg3 view:(id)arg4;
- (void)shareClickLogForChannel:(id)arg1 extInfos:(id)arg2 view:(id)arg3;
- (void)sharePadShowLog:(id)arg1 view:(id)arg2;
- (id)commonLogParams;
- (void)setCommonLogExtInfo:(id)arg1;

@end
