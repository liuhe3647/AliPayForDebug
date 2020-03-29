//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NXOptionsSecurity;

@interface NXOptionsManager : NSObject
{
    NXOptionsSecurity *_configs;
}

@property(retain, nonatomic) NXOptionsSecurity *configs; // @synthesize configs=_configs;
- (void).cxx_destruct;
- (id)getHostOf:(id)arg1 ifNotVhostInApp:(id)arg2;
- (_Bool)isTinyAppWithStartParams:(id)arg1;
- (_Bool)isTinyApp:(id)arg1;
- (_Bool)isPartnerUrl:(id)arg1;
- (_Bool)isAlibabaUrl:(id)arg1;
- (_Bool)isAlibabaOfflineH5:(id)arg1;
- (_Bool)isInnerTinyapp:(id)arg1;
- (_Bool)checkScope:(id)arg1 entity:(id)arg2;
- (_Bool)checkLevel:(id)arg1 from:(long long)arg2 entity:(id)arg3;
- (id)checkOptions:(id)arg1 from:(long long)arg2 entity:(id)arg3;
- (_Bool)canUseOption:(id)arg1 from:(long long)arg2 entity:(id)arg3;
- (id)init;
- (id)initWithConfig:(id)arg1;

@end
