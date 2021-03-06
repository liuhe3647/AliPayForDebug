//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OBaseViewController.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"

@class CLLocationManager, GO2OShopInfo, MKAnnotationView, MKMapView, NSString, UIActivityIndicatorView, UILabel, UIView;

@interface GO2OMapViewController : GO2OBaseViewController <MKMapViewDelegate, CLLocationManagerDelegate>
{
    GO2OShopInfo *_shopInfo;
    double _latitude;
    double _longitude;
    NSString *_showName;
    NSString *_showAddress;
    MKMapView *_mapView;
    UILabel *_shopNameLabel;
    UILabel *_shopAddressLabel;
    UIView *_bottomView;
    UIActivityIndicatorView *_indicatorView;
    UIView *_indicatorBackgroundView;
    CLLocationManager *_locationManager;
    MKAnnotationView *_userAnnotationView;
}

@property(retain, nonatomic) MKAnnotationView *userAnnotationView; // @synthesize userAnnotationView=_userAnnotationView;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) UIView *indicatorBackgroundView; // @synthesize indicatorBackgroundView=_indicatorBackgroundView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *shopAddressLabel; // @synthesize shopAddressLabel=_shopAddressLabel;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSString *showAddress; // @synthesize showAddress=_showAddress;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) GO2OShopInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)stopIndicatorLoading;
- (void)startIndicatorLoading;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)rotateWithDirection:(double)arg1;
- (void)didReceiveMemoryWarning;
- (void)navigation:(id)arg1;
- (void)createIndicatorView;
- (id)createBottomView;
- (void)createCustomBackButton;
- (void)viewDidLoad;
- (_Bool)autohideNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

