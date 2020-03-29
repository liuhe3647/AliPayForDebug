//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KBVideoPlayerViewDelegate-Protocol.h"

@class KBVideoPlayerOptions, NSMutableArray, NSString, O2OViewController;
@protocol O2OLcVideoPlayVCProtocol;

@interface O2OLcVideoPlayContext : NSObject <KBVideoPlayerViewDelegate>
{
    KBVideoPlayerOptions *_playerOptions;
    O2OViewController<O2OLcVideoPlayVCProtocol> *_viewController;
    NSMutableArray *_videoPlayerList;
}

@property(retain, nonatomic) NSMutableArray *videoPlayerList; // @synthesize videoPlayerList=_videoPlayerList;
@property(nonatomic) __weak O2OViewController<O2OLcVideoPlayVCProtocol> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) KBVideoPlayerOptions *playerOptions; // @synthesize playerOptions=_playerOptions;
- (void).cxx_destruct;
@property(nonatomic) long long playerCoreMode;
- (_Bool)isTaobaoVideoPlayer;
- (void)videoPlayerView:(id)arg1 playedTime:(double)arg2;
- (void)videoPlayerViewDidStartPlay:(id)arg1;
- (id)reuseableVideoPlayerForUrl:(id)arg1;
- (id)preloadingVideoPlayerForUrl:(id)arg1;
- (void)recyclingVideoPlayer:(id)arg1 videoUrl:(id)arg2;
- (id)displayingVideoPlayers;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
