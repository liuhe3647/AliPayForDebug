//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEngineURLItem-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface BeeYKAudioURLItem : NSObject <YTEngineURLItem>
{
    NSString *_url;
    _Bool _isLive;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m3u8Url;
@property(copy, nonatomic) NSString *itemType;
@property(nonatomic) long long size;
@property(nonatomic) double milliseconds;
@property(nonatomic) double seconds;
@property(nonatomic) long long itemId;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 isLive:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *drmData;
@property(copy, nonatomic) NSMutableDictionary *drminfo;
@property(copy, nonatomic) NSString *fileId;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long isFlowAd;
@property(copy, nonatomic) NSString *serverMd5;
@property(copy, nonatomic) NSString *sliceId;
@property(readonly) Class superclass;

@end
