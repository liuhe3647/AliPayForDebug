//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, XRTCVideoEncoderQpThresholds, XRTCVideoEncoderSettings, XRTCVideoFrame;
@protocol XRTCCodecSpecificInfo;

@protocol XRTCVideoEncoder <NSObject>
- (XRTCVideoEncoderQpThresholds *)scalingSettings;
- (NSString *)implementationName;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (long long)encode:(XRTCVideoFrame *)arg1 codecSpecificInfo:(id <XRTCCodecSpecificInfo>)arg2 frameTypes:(NSArray *)arg3;
- (long long)releaseEncoder;
- (long long)startEncodeWithSettings:(XRTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(_Bool (^)(XRTCEncodedImage *, id <XRTCCodecSpecificInfo>, XRTCRtpFragmentationHeader *))arg1;
@end

