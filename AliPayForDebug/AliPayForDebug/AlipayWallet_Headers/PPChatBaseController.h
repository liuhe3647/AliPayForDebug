//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "PPChatControllerService-Protocol.h"

@class NSString, PPChatMessage;
@protocol PPChatControllerDelegate;

@interface PPChatBaseController : DTViewController <PPChatControllerService>
{
    _Bool _isVarHeight;
    _Bool _isCleared;
    _Bool _isFirstAppear;
    id <PPChatControllerDelegate> _delegate;
    double _varY;
    double _varHeight;
    NSString *_textMsg;
    NSString *_imgName;
    NSString *_actionType;
    NSString *_actionParam;
    id _item;
    PPChatMessage *_messageModel;
    struct CGSize _imgSize;
}

@property _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) PPChatMessage *messageModel; // @synthesize messageModel=_messageModel;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
@property(retain, nonatomic) NSString *imgName; // @synthesize imgName=_imgName;
@property(retain, nonatomic) NSString *textMsg; // @synthesize textMsg=_textMsg;
@property(nonatomic) _Bool isCleared; // @synthesize isCleared=_isCleared;
@property(nonatomic) double varHeight; // @synthesize varHeight=_varHeight;
@property(nonatomic) double varY; // @synthesize varY=_varY;
@property(nonatomic) _Bool isVarHeight; // @synthesize isVarHeight=_isVarHeight;
@property(nonatomic) __weak id <PPChatControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showWithControllerParam:(id)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (void)networkDataClear;
- (void)controlClear;
- (void)action:(int)arg1 withControllerParam:(id)arg2;
- (void)notify:(int)arg1 withContext:(id)arg2;
- (double)heightOfView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

