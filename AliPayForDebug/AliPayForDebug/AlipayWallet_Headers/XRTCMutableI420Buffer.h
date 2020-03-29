//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XRTCI420Buffer.h"

#import "XRTCMutableI420Buffer-Protocol.h"

@class NSString;

@interface XRTCMutableI420Buffer : XRTCI420Buffer <XRTCMutableI420Buffer>
{
}

@property(readonly, nonatomic) char *mutableDataV;
@property(readonly, nonatomic) char *mutableDataU;
@property(readonly, nonatomic) char *mutableDataY;

// Remaining properties
@property(readonly, nonatomic) int chromaHeight;
@property(readonly, nonatomic) int chromaWidth;
@property(readonly, nonatomic) const char *dataU;
@property(readonly, nonatomic) const char *dataV;
@property(readonly, nonatomic) const char *dataY;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int strideU;
@property(readonly, nonatomic) int strideV;
@property(readonly, nonatomic) int strideY;
@property(readonly) Class superclass;
@property(readonly, nonatomic) int width;

@end
