//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

@interface NPJsApi4WebAR : PSDJsApiHandler
{
}

+ (void)registerDetectors;
+ (_Bool)authorizeDetector:(id)arg1 withWebview:(id)arg2;
+ (id)h5ViewControllerForWebview:(id)arg1;
+ (_Bool)isWebViewInTinyAppLifecycle:(id)arg1;
- (void)showPermissionWithContext:(id)arg1 url:(id)arg2 forUsage:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)getWebViewURL:(id)arg1 isWk:(_Bool)arg2;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end
