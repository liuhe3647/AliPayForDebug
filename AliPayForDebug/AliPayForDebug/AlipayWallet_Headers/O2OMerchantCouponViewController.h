//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCommonSchemeProtocol-Protocol.h"

@class NSDictionary, NSString, O2OMerchantCouponDL, O2OMerchantCouponDS, O2OMerchantCouponModel;

@interface O2OMerchantCouponViewController : O2OListViewController <O2OCommonSchemeProtocol>
{
    _Bool _loginNeedReload;
    O2OMerchantCouponModel *_merchantCouponModel;
    O2OMerchantCouponDL *_dl;
    O2OMerchantCouponDS *_ds;
    NSString *_shopId;
    NSString *_cityId;
    NSDictionary *_monitorDic;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) _Bool loginNeedReload; // @synthesize loginNeedReload=_loginNeedReload;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) O2OMerchantCouponDS *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OMerchantCouponDL *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OMerchantCouponModel *merchantCouponModel; // @synthesize merchantCouponModel=_merchantCouponModel;
- (void).cxx_destruct;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showLoading:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)reloadDocument;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)back;
- (id)pageSpm;
- (id)initWithShopId:(id)arg1 cityId:(id)arg2;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDictionary *schemeOptions;
@property(readonly) Class superclass;

@end
