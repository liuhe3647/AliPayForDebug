//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RVRService : NSObject
{
    NSDictionary *_dicPresetApps;
}

+ (id)sharedInstace;
@property(retain, nonatomic) NSDictionary *dicPresetApps; // @synthesize dicPresetApps=_dicPresetApps;
- (void).cxx_destruct;
- (void)prepareAppxApp:(long long)arg1 offlineType:(long long)arg2 minSDKVersion:(id)arg3 finsh:(CDUnknownBlockType)arg4;
- (void)checkMinSDKVersion:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (long long)compareVersions:(id)arg1 withVersion:(id)arg2;
- (void)prepareApp:(id)arg1 pluginId:(id)arg2 requireVersison:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (void)prepareApp:(id)arg1 version:(id)arg2 params:(id)arg3 reqType:(long long)arg4 offlineType:(long long)arg5 finish:(CDUnknownBlockType)arg6;
- (id)presetApp:(id)arg1;
- (id)findResourcesPreparedApp:(id)arg1;
- (_Bool)enableMatchHeaders;
- (_Bool)enableMatchMainURLByPublicURL;
- (id)findAppIdByURL:(id)arg1;
- (void)mountPkg:(id)arg1 process:(CDUnknownBlockType)arg2 finish:(CDUnknownBlockType)arg3;
- (id)findAvailableApp:(id)arg1 version:(id)arg2;
- (id)findApp:(id)arg1 version:(id)arg2;
- (id)presetApp;
- (id)presetAppDics;
- (id)init;
- (void)setDownloadingTemplateMap:(id)arg1;
- (id)downloadingTemplateMap;
- (void)setTemplateConfigSema:(id)arg1;
- (id)templateConfigSema;
- (_Bool)enableModuleApp;
- (double)waitTime;
- (id)getStorageTemplateConfigOfApp:(id)arg1 forKey:(id)arg2;
- (void)removeTemplateConfigWithApp:(id)arg1;
- (void)storeTemplateConfig:(id)arg1 app:(id)arg2;
- (void)prepareTemplateConfigWithApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preHandleTemplateApp:(id)arg1 readyToLaunch:(_Bool)arg2;

@end
