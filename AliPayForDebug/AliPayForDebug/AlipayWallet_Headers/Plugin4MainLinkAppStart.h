//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "H5MainLinkDelegate-Protocol.h"

@class NSMutableDictionary;

@interface Plugin4MainLinkAppStart : NBPluginBase <H5MainLinkDelegate>
{
    NSMutableDictionary *_appMonitorStack;
}

@property(retain, nonatomic) NSMutableDictionary *appMonitorStack; // @synthesize appMonitorStack=_appMonitorStack;
- (void).cxx_destruct;
- (void)mainLinkDidFinish:(id)arg1;
- (void)mainLinkTimeout:(id)arg1;
- (void)mainLinkCancelledByUser:(id)arg1;
- (void)clearMainLink:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)pass2MainLinkWithEvent:(id)arg1;
- (void)pluginDidLoad;
- (int)priority;

@end
