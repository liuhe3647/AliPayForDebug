//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALURequestH5URLRPCManager : NSObject
{
    NSString *_callbackUrl;
    NSString *_scene;
}

+ (id)urlParamsDictionary:(id)arg1 autoLogin:(_Bool)arg2;
+ (id)getOpenUrl:(id)arg1 scene:(id)arg2 autoLogin:(_Bool)arg3;
+ (void)doGetH5UrlWith:(id)arg1 autoLogin:(_Bool)arg2 beforeSendLoginReq:(CDUnknownBlockType)arg3 afterRecvLoginRes:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
- (void).cxx_destruct;

@end

