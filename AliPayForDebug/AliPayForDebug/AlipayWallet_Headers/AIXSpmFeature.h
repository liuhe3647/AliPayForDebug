//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AIXFeature-Protocol.h"
#import "LogDispatcher-Protocol.h"

@class APCustomStorage, NSMutableArray, NSString;
@protocol AIXSpmDAOProxy;

@interface AIXSpmFeature : NSObject <LogDispatcher, AIXFeature>
{
    id <AIXSpmDAOProxy> _dbProxy;
    APCustomStorage *_storage;
    double _lasttrackClickTime;
    NSMutableArray *_cachedSpmArray;
}

@property(retain, nonatomic) NSMutableArray *cachedSpmArray; // @synthesize cachedSpmArray=_cachedSpmArray;
@property(nonatomic) double lasttrackClickTime; // @synthesize lasttrackClickTime=_lasttrackClickTime;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) id <AIXSpmDAOProxy> dbProxy; // @synthesize dbProxy=_dbProxy;
- (void).cxx_destruct;
- (_Bool)isSpmValid:(id)arg1;
- (void)dealloc;
- (id)filteredActionIds;
- (void)onLogAppend:(id)arg1;
- (_Bool)clearExpiredData;
- (id)name;
- (id)rawDataOutput:(id)arg1;
- (id)formattedOutput:(id)arg1;
- (id)synCacheData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

