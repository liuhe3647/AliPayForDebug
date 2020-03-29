//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "CKListInterface-Protocol.h"
#import "CKWidgetProtocol-Protocol.h"
#import "CRWidgetProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface CKListView : UITableView <UITableViewDelegate, UITableViewDataSource, CRWidgetProtocol, CKWidgetProtocol, CKListInterface>
{
    _Bool _isSticky;
    _Bool _showScrollBar;
    _Bool _hasRefresh;
    _Bool _hasLoading;
    _Bool _isScrolling;
    _Bool _profilingIgnored;
    double _offsetAccuracy;
    NSString *_wrapperViewID;
    NSMutableArray *_data;
    struct CGPoint _lastEventOffset;
}

+ (id)createView:(id)arg1 reuse:(id)arg2 size:(struct CGSize)arg3;
@property(nonatomic) _Bool profilingIgnored; // @synthesize profilingIgnored=_profilingIgnored;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *wrapperViewID; // @synthesize wrapperViewID=_wrapperViewID;
@property(nonatomic) struct CGPoint lastEventOffset; // @synthesize lastEventOffset=_lastEventOffset;
@property(nonatomic) double offsetAccuracy; // @synthesize offsetAccuracy=_offsetAccuracy;
@property(nonatomic) _Bool hasLoading; // @synthesize hasLoading=_hasLoading;
@property(nonatomic) _Bool hasRefresh; // @synthesize hasRefresh=_hasRefresh;
@property(nonatomic) _Bool showScrollBar; // @synthesize showScrollBar=_showScrollBar;
@property(nonatomic) _Bool isSticky; // @synthesize isSticky=_isSticky;
- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (_Bool)scrollToElment:(id)arg1 section:(long long)arg2 row:(long long)arg3;
- (_Bool)isViewScrolling;
- (struct CGPoint)scrollOffset;
- (void)reload:(id)arg1;
- (void)removeFooter:(int)arg1 immediately:(_Bool)arg2;
- (void)updateFooter:(int)arg1 immediately:(_Bool)arg2;
- (void)insertFooter:(int)arg1 immediately:(_Bool)arg2;
- (void)removeHeader:(int)arg1 immediately:(_Bool)arg2;
- (void)updateHeader:(int)arg1 immediately:(_Bool)arg2;
- (void)insertHeader:(int)arg1 immediately:(_Bool)arg2;
- (void)removeSection:(int)arg1 immediately:(_Bool)arg2;
- (void)updateSection:(int)arg1 immediately:(_Bool)arg2;
- (void)insertSection:(int)arg1 immediately:(_Bool)arg2;
- (void)removeItem:(int)arg1 rowIndex:(int)arg2 immediately:(_Bool)arg3;
- (void)updateItem:(int)arg1 rowIndex:(int)arg2 immediately:(_Bool)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)insertItem:(int)arg1 rowIndex:(int)arg2 immediately:(_Bool)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetCss;
- (void)resetAttrs;
- (void)reset;
- (void)updateExtParam:(id)arg1;
- (void)updateComponentData:(id)arg1;
- (void)updateEvents:(id)arg1;
- (void)updateAttrs:(id)arg1;
- (void)updateCss:(id)arg1;
- (_Bool)resumeEnable;
- (void)resumeWithData:(id)arg1;
- (void)willResume;
- (_Bool)needSync;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
