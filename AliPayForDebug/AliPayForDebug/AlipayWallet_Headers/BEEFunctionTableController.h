//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWTableController.h"

#import "AURefreshLoadingViewDelegate-Protocol.h"

@class AUPullLoadingView, AURefreshView, NSDate, UIRefreshControl, UITableViewController, UIView;

@interface BEEFunctionTableController : WWTableController <AURefreshLoadingViewDelegate>
{
    NSDate *_lastSuccessDate;
    _Bool _lastSuccess;
    long long _lastLoadMode;
    unsigned long long _refreshControlStyle;
    UITableViewController *_tableViewController;
    AUPullLoadingView *_egoHeader;
    UIRefreshControl *_commonHeader;
    UIView *_refreshParentView;
    AURefreshView *_pullDownLoadingView;
    AUPullLoadingView *_pageFooterView;
    unsigned long long _currentPage;
    unsigned long long _startPage;
    _Bool _pullDownEnabled;
    _Bool _pagingEnabled;
    long long _viewAppearRefreshInterval;
}

@property(nonatomic) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) _Bool pullDownEnabled; // @synthesize pullDownEnabled=_pullDownEnabled;
@property(nonatomic) long long viewAppearRefreshInterval; // @synthesize viewAppearRefreshInterval=_viewAppearRefreshInterval;
- (void).cxx_destruct;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)auRefreshViewDidTriggerloading:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (void)loadError:(id)arg1;
- (_Bool)isCacheEqual:(id)arg1 toRpcResult:(id)arg2;
- (void)loadInMode:(long long)arg1;
- (void)loadEnded:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadOnAppear;
- (void)setTableViewBackgroundColor:(id)arg1;
- (void)pagingDidLoad;
- (void)loadRpcException:(id)arg1;
- (void)loadFinished:(id)arg1 rpcException:(id)arg2;
- (void)pulldownDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setLastSuccess:(_Bool)arg1;
@property(readonly, nonatomic) _Bool lastSuccess;
@property(retain, nonatomic) NSDate *lastSuccessDate;
@property(readonly, nonatomic) id refreshControl;
@property(nonatomic) unsigned long long refreshControlStyle;
- (void)loadRefresh;
- (_Bool)hasNextPage;
@property(readonly, nonatomic) unsigned long long currentPage;
- (void)setCurrentPage:(unsigned long long)arg1;
@property(nonatomic) unsigned long long startPage;
@property(retain, nonatomic) AUPullLoadingView *pageFooterView;
- (_Bool)shouldSkipRpcSaveToCache:(id)arg1;

@end

