//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSDictionary, NSString;

@interface GO2OMenuInfoRequest : GO2OServiceObject
{
    NSString *_menuBizType;
    NSString *_cityCode;
    long long _pageIndex;
    double _latitude;
    double _longitude;
    NSString *_query;
    NSDictionary *_menus;
    NSString *_chInfo;
}

+ (Class)menusElementClass;
@property(retain, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(retain, nonatomic) NSDictionary *menus; // @synthesize menus=_menus;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *menuBizType; // @synthesize menuBizType=_menuBizType;
- (void).cxx_destruct;

@end
