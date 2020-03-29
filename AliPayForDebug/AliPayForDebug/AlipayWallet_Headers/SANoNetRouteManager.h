//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SANoNetRouteManager : NSObject
{
    _Bool _supportNoNetRoute;
    NSArray *_noNetRouteRuleArray;
    NSArray *_configKeys;
}

+ (id)sharedCacheManager;
@property(retain, nonatomic) NSArray *configKeys; // @synthesize configKeys=_configKeys;
@property(retain, nonatomic) NSArray *noNetRouteRuleArray; // @synthesize noNetRouteRuleArray=_noNetRouteRuleArray;
@property(nonatomic) _Bool supportNoNetRoute; // @synthesize supportNoNetRoute=_supportNoNetRoute;
- (void).cxx_destruct;
- (_Bool)isNoNetRuleValid:(id)arg1;
- (void)loadData;
- (_Bool)canNoNetRoute:(id)arg1;
- (id)matchNoNetRoute:(id)arg1;
- (_Bool)matchNoNetAndRoute:(id)arg1;
- (id)init;

@end
