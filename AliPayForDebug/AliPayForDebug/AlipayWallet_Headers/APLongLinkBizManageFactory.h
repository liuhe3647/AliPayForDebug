//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTLongLinkBizManage, NSMutableDictionary;

@interface APLongLinkBizManageFactory : NSObject
{
    NSMutableDictionary *_bizManageMap;
    DTLongLinkBizManage *_defaultManage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DTLongLinkBizManage *defaultManage; // @synthesize defaultManage=_defaultManage;
@property(retain, nonatomic) NSMutableDictionary *bizManageMap; // @synthesize bizManageMap=_bizManageMap;
- (void).cxx_destruct;
- (id)longLinkBizManageWithName:(id)arg1;
- (id)init;

@end

