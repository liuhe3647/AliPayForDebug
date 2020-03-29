//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

#import "O2OMapSearchResultListModelDelegate-Protocol.h"
#import "O2OSearchResultFilterModelDelegate-Protocol.h"
#import "VZModelDelegate-Protocol.h"

@class NSArray, NSString, O2OMapSearchResultListModel, O2OSearchModelCommonParams, O2OSearchResultFilterModel;
@protocol O2OMapSearchModelDelegate;

@interface O2OMapSearchModel : O2OHTTPListModel <VZModelDelegate, O2OMapSearchResultListModelDelegate, O2OSearchResultFilterModelDelegate>
{
    _Bool _isLoadOrLoadMore;
    _Bool _isReload;
    id <O2OMapSearchModelDelegate> _searchDelegate;
    O2OSearchModelCommonParams *_commonParams;
    NSArray *_menuGroups;
    NSString *_context;
    NSString *_errorName;
    long long _failCode;
    double _startTime;
    double _endTime;
    double _menuTime;
    double _searchRequestTime;
    double _searchTemplateTime;
    double _rpcStartTime;
    long long _queryIndex;
    O2OSearchResultFilterModel *_filterModel;
    O2OMapSearchResultListModel *_resultModel;
    long long _loadingCount;
}

@property(nonatomic) long long loadingCount; // @synthesize loadingCount=_loadingCount;
@property(retain, nonatomic) O2OMapSearchResultListModel *resultModel; // @synthesize resultModel=_resultModel;
@property(retain, nonatomic) O2OSearchResultFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(nonatomic) long long queryIndex; // @synthesize queryIndex=_queryIndex;
@property(nonatomic) double rpcStartTime; // @synthesize rpcStartTime=_rpcStartTime;
@property(nonatomic) double searchTemplateTime; // @synthesize searchTemplateTime=_searchTemplateTime;
@property(nonatomic) double searchRequestTime; // @synthesize searchRequestTime=_searchRequestTime;
@property(nonatomic) double menuTime; // @synthesize menuTime=_menuTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) long long failCode; // @synthesize failCode=_failCode;
@property(readonly, nonatomic) NSString *errorName; // @synthesize errorName=_errorName;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(nonatomic) _Bool isReload; // @synthesize isReload=_isReload;
@property(nonatomic) _Bool isLoadOrLoadMore; // @synthesize isLoadOrLoadMore=_isLoadOrLoadMore;
@property(retain, nonatomic) O2OSearchModelCommonParams *commonParams; // @synthesize commonParams=_commonParams;
@property(nonatomic) __weak id <O2OMapSearchModelDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (_Bool)resultModelShouldRaise1002Exception:(id)arg1;
- (_Bool)modelShouldRaise1002Exception:(id)arg1;
- (id)operationType;
- (_Bool)isResponseObjectFromCache;
- (void)setObjects:(id)arg1;
- (id)objects;
- (void)setNeedLoadAll:(_Bool)arg1;
- (_Bool)needLoadAll;
- (_Bool)canLoadMore;
- (_Bool)hasMore;
- (_Bool)loadMore;
- (void)modelWillLoadMore:(id)arg1;
- (void)resetRecordParams;
- (void)reset:(_Bool)arg1;
- (void)reset;
- (void)modelDidFail:(id)arg1 withError:(id)arg2;
- (void)modelDidStart:(id)arg1;
- (void)recordWholeLinkTime;
- (void)allModelFinishAndSuccess;
- (void)modelDidFinish:(id)arg1;
- (void)recordRpcTime:(id)arg1;
- (void)applyCommonParams;
- (void)loadSetState:(_Bool)arg1;
- (void)loadWithoutCache;
- (void)cancel;
- (void)load:(_Bool)arg1 ignoreLoadCache:(_Bool)arg2;
- (void)reload;
- (void)load;
@property(readonly, nonatomic) _Bool autoAdjustScreenArea;
@property(readonly, copy, nonatomic) NSString *goUrl;
@property(readonly, copy, nonatomic) NSString *semType;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
