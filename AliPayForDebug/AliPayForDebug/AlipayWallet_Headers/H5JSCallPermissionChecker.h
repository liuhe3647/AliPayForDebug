//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface H5JSCallPermissionChecker : NSObject
{
}

+ (id)findJSCallConfigWithName:(id)arg1 permissionConfigs:(id)arg2;
+ (void)checkJsCallPermissionWithName:(id)arg1 url:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (_Bool)checkInList:(id)arg1 withJsApiName:(id)arg2;

@end
