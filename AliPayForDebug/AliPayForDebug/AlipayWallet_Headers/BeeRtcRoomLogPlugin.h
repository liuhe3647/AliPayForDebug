//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BeeRtcRoomDelegate-Protocol.h"
#import "BeeRtcRoomPluginDelegate-Protocol.h"
#import "BeeRtcRoomPluginItem-Protocol.h"

@class NSLock, NSMutableArray, NSString, UIButton, UILabel, UITextView;

@interface BeeRtcRoomLogPlugin : UIView <BeeRtcRoomPluginDelegate, BeeRtcRoomDelegate, BeeRtcRoomPluginItem>
{
    _Bool _isShowErrorLog;
    UILabel *_titleLabel;
    UITextView *_logTextView;
    NSMutableArray *_logInfos;
    NSLock *_lock;
    double _lastLogTime;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) double lastLogTime; // @synthesize lastLogTime=_lastLogTime;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *logInfos; // @synthesize logInfos=_logInfos;
@property(nonatomic) _Bool isShowErrorLog; // @synthesize isShowErrorLog=_isShowErrorLog;
@property(retain, nonatomic) UITextView *logTextView; // @synthesize logTextView=_logTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)BeeRtcRoomStatistic:(id)arg1 userId:(id)arg2;
- (void)BeeRtcRoomDebugInfo:(id)arg1 userId:(id)arg2;
- (void)BeeRtcRoomReceiveRecordId:(id)arg1;
- (void)BeeRtcRoomNetWorkQuality:(long long)arg1 bandwidth:(double)arg2 isLocal:(_Bool)arg3;
- (void)BeeRtcRoomNetworkChange:(long long)arg1;
- (void)BeeRtcRoomConnectionStatueChange:(long long)arg1 isLocal:(_Bool)arg2 userId:(id)arg3;
- (void)BeeRtcRoomPlayViewChage:(id)arg1 feedType:(long long)arg2;
- (void)BeeRtcRoomDidChangeParticipant:(id)arg1 type:(long long)arg2;
- (void)BeeRtcRoomDidChangeParticipant:(id)arg1;
- (void)BeeRtcRoomErrorState:(long long)arg1 error:(id)arg2;
- (void)BeeRtcRoomAudioPlayModeChange:(long long)arg1;
- (void)BeeRtcRoomDidStopPlay;
- (void)BeeRtcRoomDidReadyPlay;
- (void)BeeRtcRoomJoinRoom:(_Bool)arg1 error:(id)arg2;
- (void)BeeRtcRoomCreateRoom:(id)arg1 error:(id)arg2;
- (void)refreshLogDisplay;
- (void)logInfo:(id)arg1;
- (void)logErrorInfo:(id)arg1;
- (void)cleanLogInfo;
- (void)closeLogView;
- (void)BeeRtcRoomShowView:(_Bool)arg1 byViewTag:(long long)arg2;
- (void)pluginItemDidUninstall:(id)arg1;
- (void)pluginItemDidInstall:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
