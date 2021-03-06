//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

#import "TAJsApi4GetSystemInfoImp-Protocol.h"

@class NSMutableDictionary, NSString;

@interface NPJsApiHandler4GetSystemInfo : PSDJsApiHandler <TAJsApi4GetSystemInfoImp>
{
    NSMutableDictionary *_cachedResult;
    double _cachedTime;
}

@property(nonatomic) double cachedTime; // @synthesize cachedTime=_cachedTime;
@property(retain, nonatomic) NSMutableDictionary *cachedResult; // @synthesize cachedResult=_cachedResult;
- (void).cxx_destruct;
- (double)diskOfAllSizeMBytes;
- (id)generateNoCacheDataWithContext:(id)arg1;
- (id)generateSystemInfoWithContext:(id)arg1;
- (_Bool)shouldUseCache;
- (void)orientationDidChange:(id)arg1;
- (void)dealloc;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

