//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AURefreshLoadingViewDelegate-Protocol.h"

@class AUPullLoadingView, NSDate, NSDateFormatter, UITableView;
@protocol AFWStockPullLoadingDataSource, AFWStockPullLoadingDelegate;

@interface AFWStockPullLoading : NSObject <AURefreshLoadingViewDelegate>
{
    _Bool _isLoading;
    id <AFWStockPullLoadingDataSource> _dataSource;
    id <AFWStockPullLoadingDelegate> _delegate;
    unsigned long long _pullingState;
    UITableView *_tableView;
    AUPullLoadingView *_refreshHeaderView;
    NSDate *_lastSuccessFreshDate;
    NSDateFormatter *_defaultFormatter;
    NSDate *_customDate;
    NSDateFormatter *_customDateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *customDateFormatter; // @synthesize customDateFormatter=_customDateFormatter;
@property(retain, nonatomic) NSDate *customDate; // @synthesize customDate=_customDate;
@property(retain, nonatomic) NSDateFormatter *defaultFormatter; // @synthesize defaultFormatter=_defaultFormatter;
@property(retain, nonatomic) NSDate *lastSuccessFreshDate; // @synthesize lastSuccessFreshDate=_lastSuccessFreshDate;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) AUPullLoadingView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long pullingState; // @synthesize pullingState=_pullingState;
@property(nonatomic) __weak id <AFWStockPullLoadingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFWStockPullLoadingDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)refreshSuccessDate;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopLoading;
- (void)updateAULoadingContent;
- (void)matchToTableView:(id)arg1;
- (void)dealloc;

@end
