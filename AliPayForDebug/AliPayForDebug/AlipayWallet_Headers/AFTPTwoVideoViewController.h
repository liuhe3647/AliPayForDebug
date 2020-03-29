//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFTPVideoBaseViewController.h"

#import "ARTVCDynamicConfigProtocol-Protocol.h"
#import "ARTVCEngineDelegate-Protocol.h"
#import "AUDialogDelegate-Protocol.h"

@class AFTPVideoLineUpDetailView, ARTVCEngine, ARTVCFeed, ARTVCRoomInfomation, NSString, NSTimer, UILabel, UIView;

@interface AFTPTwoVideoViewController : AFTPVideoBaseViewController <ARTVCEngineDelegate, AUDialogDelegate, ARTVCDynamicConfigProtocol>
{
    _Bool _isLoading;
    ARTVCEngine *_artvcEgnine;
    AFTPVideoLineUpDetailView *_lineUpView;
    NSString *_uid;
    UILabel *_docLabel;
    ARTVCRoomInfomation *_roomInfo;
    NSTimer *_refreshTimer;
    ARTVCFeed *_localFeed;
    ARTVCFeed *_remoteFeed;
    UIView *_localView;
    UIView *_remoteView;
}

@property(retain, nonatomic) UIView *remoteView; // @synthesize remoteView=_remoteView;
@property(retain, nonatomic) UIView *localView; // @synthesize localView=_localView;
@property(retain, nonatomic) ARTVCFeed *remoteFeed; // @synthesize remoteFeed=_remoteFeed;
@property(retain, nonatomic) ARTVCFeed *localFeed; // @synthesize localFeed=_localFeed;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) ARTVCRoomInfomation *roomInfo; // @synthesize roomInfo=_roomInfo;
@property(retain, nonatomic) UILabel *docLabel; // @synthesize docLabel=_docLabel;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) AFTPVideoLineUpDetailView *lineUpView; // @synthesize lineUpView=_lineUpView;
@property(retain, nonatomic) ARTVCEngine *artvcEgnine; // @synthesize artvcEgnine=_artvcEgnine;
- (void).cxx_destruct;
- (id)userId;
- (id)roomToken;
- (id)roomId;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)pollingSeat;
- (void)lineUprefreshTimer:(id)arg1;
- (void)videoLineUpTimer;
- (void)clearTimer;
- (void)removeLineUpView;
- (void)didAvailabeSendBandwidthBecomeLow:(_Bool)arg1 currentBandwidth:(double)arg2 forFeed:(id)arg3;
- (void)didAudioPlayModeChangedTo:(unsigned long long)arg1;
- (void)didSubscriber:(id)arg1 unsubscribedAFeed:(id)arg2;
- (void)didSubscriber:(id)arg1 subscribedAFeed:(id)arg2;
- (void)didFeedRemoved:(id)arg1;
- (void)didNewFeedAdded:(id)arg1;
- (void)didVideoViewRenderStopped:(id)arg1 forFeed:(id)arg2;
- (void)showToastWith:(id)arg1 duration:(double)arg2;
- (void)didFirstVideoFrameRendered:(id)arg1 forFeed:(id)arg2;
- (void)didVideoRenderViewInitialized:(id)arg1 forFeed:(id)arg2;
- (void)didReceiveLocalFeed:(id)arg1 forPublishConfig:(id)arg2;
- (void)didParticepant:(id)arg1 leaveRoomWithReason:(int)arg2;
- (void)didParticepantsEntered:(id)arg1;
- (void)didReceiveRoomInfo:(id)arg1;
- (void)didNetworkChangedTo:(long long)arg1;
- (void)popVCWithErrorCode:(id)arg1;
- (void)didEncounterError:(id)arg1 forFeed:(id)arg2;
- (void)didConnectionStatusChangedTo:(int)arg1 forFeed:(id)arg2;
- (id)configWithKey:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)createRoom;
- (void)setVideoQuality;
- (void)setupViews;
- (void)setupDefaultValues;
- (void)stopVideo;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)back;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
