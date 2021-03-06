//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AREngineWrapper.h"

@class FalconFaceEngine;

@interface XMediaARFaceTrackEngineWrapper : AREngineWrapper
{
    FalconFaceEngine *faceeng;
    unsigned long long faceCount;
    _Bool initialized;
    int restFailCnt;
}

- (void).cxx_destruct;
- (void)releaseEngine;
- (_Bool)isTrackEngine;
- (id)adaptFaceModel:(id)arg1;
- (id)recgonizeFrame:(char *)arg1 uvBase:(char *)arg2 imageWidth:(int)arg3 imageHeight:(int)arg4 refRect:(struct CGRect)arg5 refRotate:(int)arg6;
- (_Bool)supportRotate:(int)arg1;
- (id)initWithMethod:(id)arg1 modelPath:(id)arg2 modelConfig:(id)arg3;

@end

