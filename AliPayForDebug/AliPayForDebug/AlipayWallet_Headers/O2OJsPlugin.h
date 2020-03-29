//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AUDialogDelegate-Protocol.h"
#import "PSDPluginProtocol-Protocol.h"
#import "TLRewardOptionUIDelegate-Protocol.h"

@class AUNoticeDialog, NSString, TLRewardOptionUI;

@interface O2OJsPlugin : NSObject <TLRewardOptionUIDelegate, AUDialogDelegate, PSDPluginProtocol>
{
    TLRewardOptionUI *_rewardUI;
    CDUnknownBlockType _responseCallbackBlock;
    CDUnknownBlockType _openCitySelectPageBlock;
    AUNoticeDialog *_noticeDialog;
    CDUnknownBlockType _callback;
}

+ (void)syncRedDotToH5:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) AUNoticeDialog *noticeDialog; // @synthesize noticeDialog=_noticeDialog;
@property(copy, nonatomic) CDUnknownBlockType openCitySelectPageBlock; // @synthesize openCitySelectPageBlock=_openCitySelectPageBlock;
@property(copy, nonatomic) CDUnknownBlockType responseCallbackBlock; // @synthesize responseCallbackBlock=_responseCallbackBlock;
@property(retain, nonatomic) TLRewardOptionUI *rewardUI; // @synthesize rewardUI=_rewardUI;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)H5IsKoubeiScheme:(id)arg1;
- (void)doHandleGetKBLocationAfterCheck:(id)arg1 context:(id)arg2 responseCallbackBlock:(CDUnknownBlockType)arg3;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getKBLocationUserForbidErrDic;
- (_Bool)isKoubeiDomain:(id)arg1;
- (void)doHandleGetKBLocation:(id)arg1 context:(id)arg2 urlString:(id)arg3 currentViewController:(id)arg4 responseCallbackBlock:(CDUnknownBlockType)arg5;
- (void)handleGetKBLocation:(id)arg1 context:(id)arg2 responseCallbackBlock:(CDUnknownBlockType)arg3;
- (void)rewardDidFinish:(id)arg1 plumpRewardOption:(id)arg2;
- (void)prepardRewardDidFail:(id)arg1 failMemo:(id)arg2;
- (void)rewardDidCancel:(id)arg1;
- (void)didSelectCity:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)handleEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
