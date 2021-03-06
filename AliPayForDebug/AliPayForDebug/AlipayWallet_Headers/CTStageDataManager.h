//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CTStageDataManager : NSObject
{
    NSString *_sessionId;
    NSString *_sessionType;
}

@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)saveDataWithStageInfo:(id)arg1 requestParams:(id)arg2;
- (id)getCacheKeyWithParams:(id)arg1;
- (id)loadCacheWithParams:(id)arg1;
- (void)requestStageDataWithParams:(id)arg1 asyncCallBack:(CDUnknownBlockType)arg2;

@end

