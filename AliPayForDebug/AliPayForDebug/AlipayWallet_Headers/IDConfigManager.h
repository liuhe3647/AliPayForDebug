//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDExtractModel, IDPredictModel, IDStrategyModel;

@interface IDConfigManager : NSObject
{
    IDExtractModel *_extractModel;
    IDPredictModel *_predictModel;
    IDStrategyModel *_strategyModel;
}

+ (id)defaultManager;
@property(retain, nonatomic) IDStrategyModel *strategyModel; // @synthesize strategyModel=_strategyModel;
@property(retain, nonatomic) IDPredictModel *predictModel; // @synthesize predictModel=_predictModel;
@property(retain, nonatomic) IDExtractModel *extractModel; // @synthesize extractModel=_extractModel;
- (void).cxx_destruct;
- (void)onLoginDidFinishHandler;
- (id)baseParamWithType:(id)arg1 verifyId:(id)arg2 sceneCode:(id)arg3 configVersion:(long long)arg4;
- (void)updateWithClientDecisionConfig:(id)arg1;
- (void)startFetchAllConfigRequest;
- (void)startFetchConfigRequestWithTypeArray:(id)arg1 timing:(id)arg2;
- (id)predictModelFromPredictConfig:(id)arg1;
- (id)extractModelFromExtractConfig:(id)arg1;
- (void)modelDataInit;
- (id)init;

@end

