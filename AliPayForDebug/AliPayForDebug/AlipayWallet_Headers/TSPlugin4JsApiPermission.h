//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "APConfigObserverProtocol-Protocol.h"

@class NSArray, NSString, PSDSession;

@interface TSPlugin4JsApiPermission : NBPluginBase <APConfigObserverProtocol>
{
    NSString *_skipCheckOnceURL;
    NSString *_redirectURL;
    PSDSession *_curSession;
    NSString *_errorPageRedirectUrl;
    NSString *_taSSLAppId;
    NSArray *_taUseTLSWhiteList;
}

+ (_Bool)isValidUrl:(id)arg1 regexs:(id)arg2;
@property(retain, nonatomic) NSArray *taUseTLSWhiteList; // @synthesize taUseTLSWhiteList=_taUseTLSWhiteList;
@property(retain, nonatomic) NSString *taSSLAppId; // @synthesize taSSLAppId=_taSSLAppId;
@property(copy, nonatomic) NSString *errorPageRedirectUrl; // @synthesize errorPageRedirectUrl=_errorPageRedirectUrl;
@property(nonatomic) __weak PSDSession *curSession; // @synthesize curSession=_curSession;
@property(copy, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(copy, nonatomic) NSString *skipCheckOnceURL; // @synthesize skipCheckOnceURL=_skipCheckOnceURL;
- (void).cxx_destruct;
- (id)parseArrayConfig:(id)arg1;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (id)transferUrlQueryToDictionary:(id)arg1;
- (void)proxyHttpRequest4TinyApp:(id)arg1 event:(id)arg2;
- (void)banUrl4LimitControlTinyapp:(id)arg1 event:(id)arg2;
- (void)handleForceSSLErrorWithEvent:(id)arg1;
- (_Bool)isBanUnsafeRequestWithJsapi:(id)arg1 data:(id)arg2 scheme:(id *)arg3;
- (_Bool)isForceSSLWithAppId:(id)arg1 permissionManager:(id)arg2;
- (_Bool)isRenderAllowedJSAPI:(id)arg1 context:(id)arg2;
- (void)showWebViewErrorPageWithEvent:(id)arg1 redirectUrl:(id)arg2;
- (void)handleWebviewOpenSchemaEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)localResponseMPBanUrlWithEvent:(id)arg1;
- (void)banMPResourceUrlWithEvent:(id)arg1;
- (void)banMPMainRequest:(id)arg1;
- (int)priority;
- (void)pluginDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

