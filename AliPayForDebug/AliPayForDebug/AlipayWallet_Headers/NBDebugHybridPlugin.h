//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "NBDebugOnPageBtnProtocol-Protocol.h"
#import "PSDPluginProtocol-Protocol.h"

@class NSString;

@interface NBDebugHybridPlugin : NBPluginBase <PSDPluginProtocol, NBDebugOnPageBtnProtocol>
{
}

- (id)sessionIdOfSession:(id)arg1;
- (id)getAppFromSession:(id)arg1;
- (id)getJS4AppxDevHookOfViewType:(id)arg1;
- (id)getConsolePluginOfViewType:(id)arg1;
- (void)dealNetworkEvent:(id)arg1 viewId:(id)arg2 debugConfig:(id)arg3;
- (void)dealSessionEvent:(id)arg1 psdSession:(id)arg2;
- (void)dealInvocationEvent:(id)arg1 viewId:(id)arg2 scene:(id)arg3;
- (void)reportSessionContext:(id)arg1 viewId:(id)arg2;
- (void)dealPageEvent:(id)arg1 scene:(id)arg2 viewId:(id)arg3;
- (void)injectDomDebug:(id)arg1 viewId:(id)arg2 debugConfig:(id)arg3;
- (void)updatePageInfoUsingJs:(id)arg1 viewId:(id)arg2;
- (void)overwritePageConsoleOfTargetWebview:(id)arg1;
- (void)setDebugBtnOnScene:(id)arg1 targetWebview:(id)arg2 viewId:(id)arg3 appId:(id)arg4 ifTinyApp:(_Bool)arg5;
- (void)handleEvent:(id)arg1;
- (void)pluginDidLoad;
- (int)priority;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end
