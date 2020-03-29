//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDelegate-Protocol.h"

@class AURefreshView, FHTemplateDataProvider, NSString;
@protocol FHTemplateClickDelegate;

@interface FHHomeViewDelegate : NSObject <UITableViewDelegate>
{
    id <FHTemplateClickDelegate> _clickDelegate;
    AURefreshView *_pullLoadingView;
    FHTemplateDataProvider *_dataProvider;
}

@property(nonatomic) __weak FHTemplateDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak AURefreshView *pullLoadingView; // @synthesize pullLoadingView=_pullLoadingView;
@property(nonatomic) __weak id <FHTemplateClickDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)evaluateExposure:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
