//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ALPDynamicServiceManager : NSObject
{
    NSMutableDictionary *_mapPassId2Service;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mapPassId2Service; // @synthesize mapPassId2Service=_mapPassId2Service;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)resume;
- (void)stop;
- (void)pause;
- (id)startService:(id)arg1 callBack:(CDUnknownBlockType)arg2 onView:(id)arg3;

@end
