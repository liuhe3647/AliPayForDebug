//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, TCAppModel, TNAppLogModel, TNBizPackage, TNEventEmitter, TNJSPermission, TinyBridge;
@protocol TNAppDelegate;

@interface TNApp : NSObject
{
    _Bool _isValid;
    _Bool _hasError;
    _Bool _isStarted;
    NSString *_appId;
    TinyBridge *_tinyBridge;
    long long _tinyAppState;
    NSString *_bundleUrl;
    TCAppModel *_appConfig;
    TNBizPackage *_bizPackage;
    NSDictionary *_options;
    TNJSPermission *_jsPermission;
    id <TNAppDelegate> _delegate;
    NSError *_error;
}

@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <TNAppDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TNJSPermission *jsPermission; // @synthesize jsPermission=_jsPermission;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) TNBizPackage *bizPackage; // @synthesize bizPackage=_bizPackage;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) TCAppModel *appConfig; // @synthesize appConfig=_appConfig;
@property(copy, nonatomic) NSString *bundleUrl; // @synthesize bundleUrl=_bundleUrl;
@property(nonatomic) long long tinyAppState; // @synthesize tinyAppState=_tinyAppState;
@property(retain, nonatomic) TinyBridge *tinyBridge; // @synthesize tinyBridge=_tinyBridge;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)description;
- (void)javaScriptExecutedError:(id)arg1;
@property(readonly, nonatomic) unsigned long long tinyAppType;
- (void)setupEventListeners;
- (void)setupJSPermissionManager;
- (_Bool)loadBundle;
- (void)setupNotification;
- (void)unload;
- (void)reload;
- (void)start;
- (id)initWithTinyAppId:(id)arg1 options:(id)arg2;
- (id)initWithTinyAppId:(id)arg1;
- (void)dealloc;
- (void)monitorSetEventListeners;
@property(readonly, nonatomic) NSString *tn_monitorTinyAppToken;
@property(readonly, nonatomic) NSString *tn_monitorTinyToken;
@property(nonatomic) double createTime;
@property(retain, nonatomic) TNAppLogModel *logModel;
@property(nonatomic) long long referenceCount;
- (void)invokeJSAPIManually:(id)arg1 param:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)redirectToPage:(id)arg1 params:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToPage:(id)arg1 params:(id)arg2 animated:(_Bool)arg3;
- (void)performanceSetEventListeners;
- (_Bool)shouldKeepAlive;
@property(readonly, nonatomic, getter=eventEmitter) TNEventEmitter *eventEmitter;

@end

