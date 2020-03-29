//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEnginePlayerItem-Protocol.h"

@class NSArray, NSDictionary, NSSet, NSString;

@interface YTVideoPlayerUrlsItem : NSObject <YTEnginePlayerItem>
{
    _Bool _bLive;
    NSArray *_urls;
    NSArray *_items;
    NSDictionary *_videoSizeDic;
    NSSet *_qualitys;
}

@property(copy, nonatomic) NSSet *qualitys; // @synthesize qualitys=_qualitys;
@property(copy, nonatomic) NSDictionary *videoSizeDic; // @synthesize videoSizeDic=_videoSizeDic;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool bLive; // @synthesize bLive=_bLive;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void).cxx_destruct;
- (_Bool)isLive;
- (long long)interact;
- (long long)videoSequeue;
- (id)vipInfoDic;
- (id)trialInfoDic;
- (id)vipPayInfo;
- (id)payInfoDic;
- (id)videoLanguage;
- (id)showId;
- (id)title;
- (id)videoId;
- (id)contentAdPoints;
- (id)midAdPoints;
- (double)durationForDisplay;
- (double)totalDuration;
- (double)endTime;
- (double)startTime;
- (_Bool)isPanoromaVideo;
- (_Bool)isLocalPlayWithQuality:(id)arg1;
- (_Bool)isRtmpeVideoWithQuality:(id)arg1;
- (_Bool)isH265VideoWithQuality:(id)arg1;
- (id)audioItem;
- (id)videoM3U8URLWithQuality:(id)arg1;
- (id)tailVideoURLsWithQuality:(id)arg1;
- (id)headVideoURLsWithQuality:(id)arg1;
- (id)videoURLsWithQuality:(id)arg1;
- (id)realQuality:(id)arg1;
- (id)videoURLsWithQuality:(id)arg1 language:(id)arg2;
- (long long)videoSizeWithQuality:(id)arg1;
- (id)videoSizeSectionDic;
- (void)configVideoPlayerItem;
- (id)initWithUrls:(id)arg1 isLive:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *isDrm;
@property(readonly) Class superclass;

@end
