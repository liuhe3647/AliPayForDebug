//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKJSApiRequestBase.h"

@class NSArray, NSNumber;

@interface RVPJSApiReqChooseVideo : RVKJSApiRequestBase
{
    NSArray *_sourceType;
    NSArray *_camera;
    NSNumber *_maxDuration;
    NSNumber *_compressed;
}

@property(copy, nonatomic) NSNumber *compressed; // @synthesize compressed=_compressed;
@property(copy, nonatomic) NSNumber *maxDuration; // @synthesize maxDuration=_maxDuration;
@property(copy, nonatomic) NSArray *camera; // @synthesize camera=_camera;
@property(copy, nonatomic) NSArray *sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;

@end

