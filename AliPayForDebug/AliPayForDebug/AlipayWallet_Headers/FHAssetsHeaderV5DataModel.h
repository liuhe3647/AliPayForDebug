//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHCellBaseModel.h"

@class ALTCard, FHAssetsHeaderMarkModel, FHRpcModelHelper, FinaggexpbffPbResultAssetPB, NSArray, NSDictionary, NSString;

@interface FHAssetsHeaderV5DataModel : FHCellBaseModel
{
    ALTCard *_card;
    FinaggexpbffPbResultAssetPB *_asset;
    FHRpcModelHelper *_configHelper;
    NSArray *_liabilities;
    NSArray *_latestAssetProfiles;
    NSArray *_categories;
    NSDictionary *_zhxDict;
    NSDictionary *_hideEyeDict;
    NSString *_liabilitiesTitle;
    long long _yesterdayScrollConfig;
    _Bool _showTwoRows;
    _Bool _hideAmount;
    _Bool _isDataFromRPC;
    NSDictionary *_errorInfo;
    NSDictionary *_commonLogExt;
    FHAssetsHeaderMarkModel *_lastestIncomeMark;
    NSString *_assetAppId;
    NSString *_assetFollowAction;
    long long _assetFollowActionSource;
    long long _assetVersion;
}

@property(nonatomic) long long assetVersion; // @synthesize assetVersion=_assetVersion;
@property(nonatomic) _Bool isDataFromRPC; // @synthesize isDataFromRPC=_isDataFromRPC;
@property(nonatomic) long long assetFollowActionSource; // @synthesize assetFollowActionSource=_assetFollowActionSource;
@property(retain, nonatomic) NSString *assetFollowAction; // @synthesize assetFollowAction=_assetFollowAction;
@property(retain, nonatomic) NSString *assetAppId; // @synthesize assetAppId=_assetAppId;
@property(retain, nonatomic) FHAssetsHeaderMarkModel *lastestIncomeMark; // @synthesize lastestIncomeMark=_lastestIncomeMark;
@property(retain, nonatomic) NSDictionary *commonLogExt; // @synthesize commonLogExt=_commonLogExt;
@property(nonatomic) _Bool hideAmount; // @synthesize hideAmount=_hideAmount;
@property(retain, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
- (void).cxx_destruct;
- (id)liabilitiesTitle;
- (id)categoryProfiles;
- (id)latestAssetProfiles;
- (id)liabilities;
- (id)hideEye;
- (id)zhx;
- (_Bool)totalYesterdayProfitNeedsAnimated;
- (double)totalYesterdayProfit;
- (id)totalYesterdayProfitView;
- (id)latestTotalView;
- (void)updateMarkByArray:(id)arg1;
- (id)updateMarkByArray:(id)arg1 matchPromotionType:(id)arg2 originData:(id)arg3;
- (id)formatCategories:(id)arg1 entryList:(id)arg2 appList:(id)arg3 configHelper:(id)arg4 card:(id)arg5 hideAmount:(_Bool)arg6;
- (id)formatLiabilities:(id)arg1 descItems:(id)arg2 configHelper:(id)arg3 card:(id)arg4 hideAmount:(_Bool)arg5;
- (id)formatLatestAssetProfiles:(id)arg1 configHelper:(id)arg2 card:(id)arg3 hideAmount:(_Bool)arg4;
- (void)updateByALT:(id)arg1 acAppListIfNeeded:(id)arg2;
- (id)init;

@end

