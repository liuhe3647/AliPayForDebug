//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Ant3DFacialFeaturesDetector.h"

@interface Ant3DSmileDetector : Ant3DFacialFeaturesDetector
{
    _Bool _isSmile;
    float _threshold;
}

+ (_Bool)isSupported;
+ (id)instanceWithAppId:(id)arg1 business:(id)arg2;
@property(nonatomic) _Bool isSmile; // @synthesize isSmile=_isSmile;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
- (void)reset;
- (void)configOption:(id)arg1;
- (void)detectPixelBuffer:(struct __CVBuffer *)arg1 resultBlock:(CDUnknownBlockType)arg2 pixelBuffer:(CDUnknownBlockType)arg3;
- (_Bool)stop;
- (_Bool)start;
- (void)dealloc;
- (id)init;

@end

