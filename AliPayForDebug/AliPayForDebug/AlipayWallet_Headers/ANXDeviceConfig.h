//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface ANXDeviceConfig : NSObject
{
    _Bool _lbsOpen;
    NSString *_os;
    NSString *_osVersion;
    NSString *_model;
    NSString *_voiceOver;
    NSString *_wifiName;
    NSString *_wifiMac;
    NSString *_networkType;
    NSString *_mobileOperator;
    CLLocation *_lastLocation;
    NSString *_adcode;
}

@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(copy, nonatomic) NSString *mobileOperator; // @synthesize mobileOperator=_mobileOperator;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSString *wifiMac; // @synthesize wifiMac=_wifiMac;
@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(nonatomic) _Bool lbsOpen; // @synthesize lbsOpen=_lbsOpen;
@property(copy, nonatomic) NSString *voiceOver; // @synthesize voiceOver=_voiceOver;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
- (void).cxx_destruct;
- (id)networkType:(id)arg1;
- (id)standardFormateMAC:(id)arg1;
- (id)wifiInterface;

@end

