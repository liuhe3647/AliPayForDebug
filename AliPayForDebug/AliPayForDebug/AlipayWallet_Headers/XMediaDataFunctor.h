//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMediaBaseFunctor.h"

@interface XMediaDataFunctor : XMediaBaseFunctor
{
    struct xNN *_xNNEngine;
    struct xNNSharedModel *_sharedModel;
    double _procCostTime;
}

@property(nonatomic) double procCostTime; // @synthesize procCostTime=_procCostTime;
- (void)remoteLog;
- (void)clearStatus;
- (id)processWithData:(id)arg1;
- (void)dealloc;
- (id)initWithBizId:(id)arg1 modelId:(id)arg2 modelPath:(id)arg3 patchPath:(id)arg4 options:(id)arg5;
- (id)initWithBizId:(id)arg1 modelId:(id)arg2 modelPath:(id)arg3 options:(id)arg4;

@end

