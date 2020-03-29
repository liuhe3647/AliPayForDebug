//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCommonSchemeProtocol-Protocol.h"
#import "O2OMistViewProtocol-Protocol.h"

@class AUBarButtonItem, NSString, O2OCollectBaseModel, O2OCollectRouterController, O2OHTTPModel, UIView, VZListViewDataSource, VZListViewDelegate;

@interface O2OCollectBaseListViewController : O2OListViewController <O2OCommonSchemeProtocol, O2OMistViewProtocol>
{
    AUBarButtonItem *_backBarButtonItem;
    NSString *_jumpUrl;
    AUBarButtonItem *_rightShopInfoItem;
    UIView *_rightShopInfoButtonView;
    O2OCollectBaseModel *_customModel;
    O2OHTTPModel *_customCancelModel;
    VZListViewDelegate *_customDL;
    VZListViewDataSource *_customDS;
    NSString *_showEmptyItemInfo;
    NSString *_showEmptyItemPicName;
    NSString *_showEmptyItemText1;
    NSString *_showEmptyItemText2;
    long long _tabIndex;
    O2OCollectRouterController *_routerController;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) O2OCollectRouterController *routerController; // @synthesize routerController=_routerController;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) NSString *showEmptyItemText2; // @synthesize showEmptyItemText2=_showEmptyItemText2;
@property(retain, nonatomic) NSString *showEmptyItemText1; // @synthesize showEmptyItemText1=_showEmptyItemText1;
@property(retain, nonatomic) NSString *showEmptyItemPicName; // @synthesize showEmptyItemPicName=_showEmptyItemPicName;
@property(retain, nonatomic) NSString *showEmptyItemInfo; // @synthesize showEmptyItemInfo=_showEmptyItemInfo;
@property(retain, nonatomic) VZListViewDataSource *customDS; // @synthesize customDS=_customDS;
@property(retain, nonatomic) VZListViewDelegate *customDL; // @synthesize customDL=_customDL;
@property(retain, nonatomic) O2OHTTPModel *customCancelModel; // @synthesize customCancelModel=_customCancelModel;
@property(retain, nonatomic) O2OCollectBaseModel *customModel; // @synthesize customModel=_customModel;
@property(retain, nonatomic) UIView *rightShopInfoButtonView; // @synthesize rightShopInfoButtonView=_rightShopInfoButtonView;
@property(retain, nonatomic) AUBarButtonItem *rightShopInfoItem; // @synthesize rightShopInfoItem=_rightShopInfoItem;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) AUBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
- (void).cxx_destruct;
- (void)showRightShopInfoItem;
- (void)hideRightShopInfoItem;
- (void)showEmpty:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)reload;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
