//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

@class MBUISubscribeService;

@interface MBSubscribeJsApiHandler : PSDJsApiHandler
{
    MBUISubscribeService *_subscribeService;
}

- (void).cxx_destruct;
- (void)monitorWithRefererURL:(id)arg1 serviceCode:(id)arg2 resultCode:(long long)arg3 resultDesc:(id)arg4;
- (id)subscribeService;
- (void)callbackWithResultCode:(long long)arg1 resultDes:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end
