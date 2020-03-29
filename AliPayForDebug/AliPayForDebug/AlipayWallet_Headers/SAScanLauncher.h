//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SALauncher.h"

#import "APScanDelegate-Protocol.h"

@class APScanViewController, NSString;

@interface SAScanLauncher : SALauncher <APScanDelegate>
{
    APScanViewController *_scanViewController;
}

@property(retain, nonatomic) APScanViewController *scanViewController; // @synthesize scanViewController=_scanViewController;
- (void).cxx_destruct;
- (id)constructConfigVia:(id)arg1;
- (id)constructConfigsViaParams:(id)arg1;
- (id)scanModelFromParam:(id)arg1;
- (void)cancelDispatch;
- (void)dispatchWithNode:(id)arg1;
- (void)onTabSelected:(id)arg1;
- (void)scanUserTrack:(id)arg1 args:(id)arg2;
- (void)exitScan;
- (void)didFind:(id)arg1;
- (void)hidePaycodeEntranceIfNeed:(id)arg1 params:(id)arg2;
- (id)launchWithParams:(id)arg1;
- (id)handleResultArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
