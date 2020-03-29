//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "APChatAudioControlDelegate-Protocol.h"
#import "CTInputViewRecordInputProtocol-Protocol.h"

@class APChatAudioControl, APChatRecordStatusView, NSString, UIButton;
@protocol CTInputViewRecodActionDelegate;

@interface CTRecordView : UIView <APChatAudioControlDelegate, CTInputViewRecordInputProtocol>
{
    UIButton *_tools;
    UIButton *_emoji;
    UIButton *_writeButton;
    APChatAudioControl *_recordStatusButton;
    UIView *_recordBtnView;
    NSString *_business;
    id <CTInputViewRecodActionDelegate> _delegate;
    id <CTInputViewRecodActionDelegate> _actionDelegate;
    APChatRecordStatusView *_statusView;
}

+ (double)defaultViewHeight;
@property(nonatomic) __weak APChatRecordStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *recordBtnView; // @synthesize recordBtnView=_recordBtnView;
@property(retain, nonatomic) APChatAudioControl *recordStatusButton; // @synthesize recordStatusButton=_recordStatusButton;
@property(nonatomic) __weak id <CTInputViewRecodActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <CTInputViewRecodActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *writeButton; // @synthesize writeButton=_writeButton;
@property(retain, nonatomic) UIButton *tools; // @synthesize tools=_tools;
@property(retain, nonatomic) UIButton *emoji; // @synthesize emoji=_emoji;
- (void).cxx_destruct;
- (void)recordWriteTapped:(id)arg1;
- (void)recordEmojiTapped:(id)arg1;
- (void)recordToolsTapped:(id)arg1;
- (void)checkNeedAuthGuide;
- (void)audioRecordControl:(id)arg1 receivedError:(id)arg2;
- (void)audioRecordControl:(id)arg1 audioControlState:(int)arg2;
- (void)audioRecordControl:(id)arg1 recordMessage:(id)arg2;
@property(copy, nonatomic) NSString *business;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewParams:(id)arg2 viewInfos:(id)arg3;
- (void)addRedDotToTools:(id)arg1;
- (id)collectViewInfos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
