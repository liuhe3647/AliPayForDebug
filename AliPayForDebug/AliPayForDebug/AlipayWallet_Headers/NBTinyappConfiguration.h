//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol NBTinyappConfigDelegate, NBTinyappCustomFileManagerDelegate, NBTinyappDebugDelegate, NBTinyappDownLoadDelegate, NBTinyappLoggerDelegate, NBTinyappRemoteDebugerDelegate;

@interface NBTinyappConfiguration : NSObject
{
    _Bool _tinyappShouldUseInpageRender;
    _Bool _tinyInpageRenderShouldFixTouchEvent;
    _Bool _coverViewCanDowngradeToWeb;
    _Bool _syncJsapiSupportTimeout;
    _Bool _workerOnlyEventNeedDispatch;
    id <NBTinyappLoggerDelegate> _tinyappLoggerDelegate;
    id <NBTinyappConfigDelegate> _tinyappConfigDelegate;
    id <NBTinyappDownLoadDelegate> _tinyappDownLoadDelegate;
    id <NBTinyappCustomFileManagerDelegate> _tinyappCustomFileManagerDelegate;
    id <NBTinyappRemoteDebugerDelegate> _tinyappRemoteDebugerDelegate;
    id <NBTinyappDebugDelegate> _tinyappDebugDelegate;
    NSString *_JSCBridgeFilePath;
    Class _tinyappViewControllerCls;
    NSArray *_tinyappUseInpageRenderTypes;
    NSArray *_tinyappUseInpageRenderappIds;
    NSArray *_tinyappUseInpageRenderBlackList;
    NSArray *_tinyappInpageRenderComponentBlackList;
    NSArray *_tinyInpageRenderGesViewCls;
    NSDictionary *_tinyEventThroughWorkerConfig;
    NSArray *_tinyInpageRenderDirectRenderList;
    long long _workerLimitCount;
    NSDictionary *_tinyappArrayBufferChannelConfig;
    NSArray *_tinyIPRSkipWKGes;
    NSArray *_tinyNewTouchEventWhiteList;
    NSArray *_tinyWebViewWhiteList;
}

+ (id)defaultConfiguration;
@property(nonatomic) _Bool workerOnlyEventNeedDispatch; // @synthesize workerOnlyEventNeedDispatch=_workerOnlyEventNeedDispatch;
@property(copy, nonatomic) NSArray *tinyWebViewWhiteList; // @synthesize tinyWebViewWhiteList=_tinyWebViewWhiteList;
@property(copy, nonatomic) NSArray *tinyNewTouchEventWhiteList; // @synthesize tinyNewTouchEventWhiteList=_tinyNewTouchEventWhiteList;
@property(copy, nonatomic) NSArray *tinyIPRSkipWKGes; // @synthesize tinyIPRSkipWKGes=_tinyIPRSkipWKGes;
@property(nonatomic) _Bool syncJsapiSupportTimeout; // @synthesize syncJsapiSupportTimeout=_syncJsapiSupportTimeout;
@property(nonatomic) _Bool coverViewCanDowngradeToWeb; // @synthesize coverViewCanDowngradeToWeb=_coverViewCanDowngradeToWeb;
@property(retain, nonatomic) NSDictionary *tinyappArrayBufferChannelConfig; // @synthesize tinyappArrayBufferChannelConfig=_tinyappArrayBufferChannelConfig;
@property(nonatomic) _Bool tinyInpageRenderShouldFixTouchEvent; // @synthesize tinyInpageRenderShouldFixTouchEvent=_tinyInpageRenderShouldFixTouchEvent;
@property(nonatomic) long long workerLimitCount; // @synthesize workerLimitCount=_workerLimitCount;
@property(copy, nonatomic) NSArray *tinyInpageRenderDirectRenderList; // @synthesize tinyInpageRenderDirectRenderList=_tinyInpageRenderDirectRenderList;
@property(copy, nonatomic) NSDictionary *tinyEventThroughWorkerConfig; // @synthesize tinyEventThroughWorkerConfig=_tinyEventThroughWorkerConfig;
@property(copy, nonatomic) NSArray *tinyInpageRenderGesViewCls; // @synthesize tinyInpageRenderGesViewCls=_tinyInpageRenderGesViewCls;
@property(copy, nonatomic) NSArray *tinyappInpageRenderComponentBlackList; // @synthesize tinyappInpageRenderComponentBlackList=_tinyappInpageRenderComponentBlackList;
@property(copy, nonatomic) NSArray *tinyappUseInpageRenderBlackList; // @synthesize tinyappUseInpageRenderBlackList=_tinyappUseInpageRenderBlackList;
@property(copy, nonatomic) NSArray *tinyappUseInpageRenderappIds; // @synthesize tinyappUseInpageRenderappIds=_tinyappUseInpageRenderappIds;
@property(copy, nonatomic) NSArray *tinyappUseInpageRenderTypes; // @synthesize tinyappUseInpageRenderTypes=_tinyappUseInpageRenderTypes;
@property(nonatomic) _Bool tinyappShouldUseInpageRender; // @synthesize tinyappShouldUseInpageRender=_tinyappShouldUseInpageRender;
@property(retain, nonatomic) Class tinyappViewControllerCls; // @synthesize tinyappViewControllerCls=_tinyappViewControllerCls;
@property(copy, nonatomic) NSString *JSCBridgeFilePath; // @synthesize JSCBridgeFilePath=_JSCBridgeFilePath;
@property(nonatomic) __weak id <NBTinyappDebugDelegate> tinyappDebugDelegate; // @synthesize tinyappDebugDelegate=_tinyappDebugDelegate;
@property(nonatomic) __weak id <NBTinyappRemoteDebugerDelegate> tinyappRemoteDebugerDelegate; // @synthesize tinyappRemoteDebugerDelegate=_tinyappRemoteDebugerDelegate;
@property(nonatomic) __weak id <NBTinyappCustomFileManagerDelegate> tinyappCustomFileManagerDelegate; // @synthesize tinyappCustomFileManagerDelegate=_tinyappCustomFileManagerDelegate;
@property(nonatomic) __weak id <NBTinyappDownLoadDelegate> tinyappDownLoadDelegate; // @synthesize tinyappDownLoadDelegate=_tinyappDownLoadDelegate;
@property(nonatomic) __weak id <NBTinyappConfigDelegate> tinyappConfigDelegate; // @synthesize tinyappConfigDelegate=_tinyappConfigDelegate;
@property(nonatomic) __weak id <NBTinyappLoggerDelegate> tinyappLoggerDelegate; // @synthesize tinyappLoggerDelegate=_tinyappLoggerDelegate;
- (void).cxx_destruct;
- (id)init;

@end
