//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIXFeatureDAOProxy-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol AIXSampleDAOProxy <AIXFeatureDAOProxy>
- (NSArray *)getSamplesByCount:(NSNumber *)arg1 sceneCode:(NSString *)arg2;
- (NSArray *)getSamplesByDate:(NSNumber *)arg1 labels:(NSArray *)arg2 maxCount:(NSNumber *)arg3 modelIds:(NSArray *)arg4;
- (NSArray *)getSamplesByDate:(NSNumber *)arg1 labels:(NSArray *)arg2 maxCount:(NSNumber *)arg3;
@end
