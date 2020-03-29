//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSMutableArray, NSString, WABinarySerializer, WKWebView;
@protocol WAWKScritPortDelegate;

@interface WAWKScriptPort : NSObject <WKScriptMessageHandler>
{
    NSMutableArray *_events;
    _Bool _dispatched;
    WABinarySerializer *_serializer;
    NSString *_scriptTag;
    WKWebView *_webview;
    id <WAWKScritPortDelegate> _bridge;
}

+ (id)portWithWebView:(id)arg1;
@property(retain) id <WAWKScritPortDelegate> bridge; // @synthesize bridge=_bridge;
@property(readonly) __weak WKWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)dealloc;
- (void)disconnect;
- (void)dispatchInMain;
- (void)dispatchEvent:(id)arg1 withArgument:(id)arg2;
- (id)initWithWebView:(id)arg1 namespace:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
