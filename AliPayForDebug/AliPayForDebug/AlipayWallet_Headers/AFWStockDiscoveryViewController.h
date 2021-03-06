//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEBaseController.h"

#import "AFWH5AppProtocol-Protocol.h"
#import "ThemeChangeObserver-Protocol.h"

@class NSString;

@interface AFWStockDiscoveryViewController : BEEBaseController <ThemeChangeObserver, AFWH5AppProtocol>
{
    NSString *_h5AppId;
    NSString *_h5HomeUrl;
}

@property(retain, nonatomic) NSString *h5HomeUrl; // @synthesize h5HomeUrl=_h5HomeUrl;
@property(retain, nonatomic) NSString *h5AppId; // @synthesize h5AppId=_h5AppId;
- (void).cxx_destruct;
- (void)handleChangeTheme:(id)arg1;
- (id)customNavigationBarTitleColor;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarBackButtonImage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setH5AppId:(id)arg1 homeUrl:(id)arg2 selectedTabName:(id)arg3;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

