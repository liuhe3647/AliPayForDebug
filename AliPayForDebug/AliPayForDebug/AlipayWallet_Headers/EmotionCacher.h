//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface EmotionCacher : NSObject
{
    NSMutableDictionary *_emotionIdPathMap;
    NSMutableDictionary *_emotionImageMap;
    NSMutableDictionary *_emotionDataMap;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)archieveEmotionMap;
- (void)cacheImage:(id)arg1 byEmotion:(id)arg2;
- (id)loadImageCacheByEmotionId:(id)arg1;
- (id)findGifPathByEmotion:(id)arg1;
- (void)unregistGifPathByEmotion:(id)arg1;
- (void)registGifPath:(id)arg1 forEmotion:(id)arg2;
- (id)findEmotionDataByVO:(id)arg1;
- (void)deleteEmotionCache:(id)arg1;
- (void)cacheEmotionData:(id)arg1 forData:(id)arg2;
- (void)dealloc;
- (id)init;

@end
