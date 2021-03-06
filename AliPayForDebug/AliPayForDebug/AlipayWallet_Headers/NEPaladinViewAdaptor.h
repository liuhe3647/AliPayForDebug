//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXEAdapterBase.h"

#import "NXEngineView-Protocol.h"

@class NSString, NXEngineViewParam, RVKContentView, RVKKernel, RVKPage;
@protocol NXEngineViewDelegate;

@interface NEPaladinViewAdaptor : NXEAdapterBase <NXEngineView>
{
    RVKContentView *_contentView;
    RVKPage *_pageOverride;
    NXEngineViewParam *_viewParam;
    RVKKernel<NXEngineViewDelegate> *_delegate;
}

+ (void)showDialogAndExit:(_Bool)arg1;
+ (void)launchPaladinOnce:(id)arg1 error:(id *)arg2;
+ (void)updateViewClassToPaladin:(id)arg1;
+ (id)cachedResourceDataSource;
+ (id)redirectUrl:(id)arg1 fallbackHost:(id)arg2;
+ (id)syncRequestResource:(id)arg1 error:(id *)arg2;
+ (_Bool)launchFrameworkOnce:(id)arg1 perfStore:(id)arg2 session:(id)arg3;
+ (id)prepareRender:(id)arg1 session:(id)arg2 pageUrl:(id)arg3 targetUrl:(id)arg4;
+ (id)__engineStartupParam:(id)arg1 scene:(id)arg2 originalPageUrl:(id)arg3 targetPageUrl:(id)arg4;
@property(nonatomic) __weak RVKKernel<NXEngineViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NXEngineViewParam *viewParam; // @synthesize viewParam=_viewParam;
@property(retain, nonatomic) RVKPage *pageOverride; // @synthesize pageOverride=_pageOverride;
@property(retain, nonatomic) RVKContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)snapshotForView:(id)arg1;
- (id)userAgent4Paladin;
- (void)onEngineCreate:(id)arg1 session:(id)arg2;
- (_Bool)canHandleCreateView:(id)arg1 result:(id *)arg2;
- (_Bool)canHandleEngineLaunch:(id)arg1 result:(id *)arg2;
- (long long)pageRenderType;
- (void)cancelInjectJS;
- (void)loadRequest;
- (void)dealloc;
- (id)viewId;
- (_Bool)dispatchEvent:(id)arg1;
- (void)commonInit;
- (id)page;
- (id)createRenderView:(id)arg1;
- (_Bool)shouldListenScrollView;
- (id)getRenderPageURL:(id)arg1;
- (id)initWithParams:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

