//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSBizCardContainerDelegate-Protocol.h"

@class LSTemplateContainer, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol LSCardContainerManagerDelegate;

@interface LSCardContainerManager : NSObject <LSBizCardContainerDelegate>
{
    _Bool _scrolling;
    _Bool _started;
    _Bool _reloading;
    _Bool _ready;
    NSMutableArray *_combineCardContainerList;
    NSMutableArray *_cardContainerList;
    NSMutableDictionary *_cardContainerMap;
    LSTemplateContainer *_templateContainer;
    id <LSCardContainerManagerDelegate> _layoutManagerDelegate;
    NSTimer *_timer;
}

@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) __weak id <LSCardContainerManagerDelegate> layoutManagerDelegate; // @synthesize layoutManagerDelegate=_layoutManagerDelegate;
@property(nonatomic) __weak LSTemplateContainer *templateContainer; // @synthesize templateContainer=_templateContainer;
@property(retain, nonatomic) NSMutableDictionary *cardContainerMap; // @synthesize cardContainerMap=_cardContainerMap;
@property(retain, nonatomic) NSMutableArray *cardContainerList; // @synthesize cardContainerList=_cardContainerList;
@property(retain, nonatomic) NSMutableArray *combineCardContainerList; // @synthesize combineCardContainerList=_combineCardContainerList;
- (void).cxx_destruct;
- (void)expoCells;
- (long long)floorForCardContainer:(id)arg1;
- (void)receivedCardEvent:(id)arg1 fromContainer:(id)arg2;
- (void)cardViewDidChanged:(id)arg1;
- (void)resetCardContainerWithCards:(id)arg1 evaluateExposure:(_Bool)arg2;
- (void)reloadDataAndEvaluateExposureIfNeeded:(_Bool)arg1;
- (void)updateCardContainerWithCards:(id)arg1 atIndexPath:(id)arg2 evaluateExposure:(_Bool)arg3;
- (void)udpateLayoutWithCards:(id)arg1 changingType:(unsigned long long)arg2 atIndexPaths:(id)arg3 evaluateExposure:(_Bool)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (id)footerViewForSection:(long long)arg1;
- (id)headerViewForSection:(long long)arg1;
- (double)footerHeightForSection:(long long)arg1;
- (double)headerHeightForSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)realIndexPathFromIndexPath:(id)arg1;
- (id)getCurrentContainerFromIndexPath:(id)arg1;
- (_Bool)shouldShowContainer:(id)arg1;
- (_Bool)unfoldCardContainersIfNeeded:(id)arg1;
- (void)triggerUnfold:(id)arg1;
- (void)handleCardContainerNeedsUnfoldNotification:(id)arg1;
- (id)tableView;
- (id)combineCardContainerListProxy;
- (id)cardContainerListProxy;
- (id)initWithAnimationStyle:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
