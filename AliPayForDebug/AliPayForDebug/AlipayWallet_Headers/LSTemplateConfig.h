//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface LSTemplateConfig : NSObject
{
    NSMutableDictionary *_templateRequestParamsConfig;
    NSMutableDictionary *_templateThemeConfig;
}

+ (long long)appVersionCompare:(id)arg1 version:(id)arg2 number:(long long)arg3;
+ (_Bool)isCoverInstall;
+ (id)themeConfigFromPlistPath:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)registerTemplateThemeForTemplate:(id)arg1 themePath:(id)arg2;
- (id)getTemplateTheme:(id)arg1;
- (id)getTemplateRequestParam:(id)arg1;
- (void)registerTemplateName:(id)arg1 templateRequestParam:(id)arg2;
- (id)getTemplateModel:(id)arg1;
- (id)getTemplateCacheResponse:(id)arg1;
- (_Bool)registerTemplateName:(id)arg1 templateContentPath:(id)arg2;
- (id)init;

@end

