//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface APSelectCityInfo : NSObject <NSCoding>
{
    _Bool _chineseMainLand;
    _Bool _isManualSelected;
    NSString *_name;
    NSString *_code;
    NSString *_countryName;
    NSString *_countryCode;
    long long _areaLevel;
    long long _settingTime;
    NSString *_bizType;
}

+ (id)cityInfoWithLBSAddressInfo:(id)arg1 isManualSelected:(_Bool)arg2 bizType:(id)arg3;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long settingTime; // @synthesize settingTime=_settingTime;
@property(nonatomic) _Bool isManualSelected; // @synthesize isManualSelected=_isManualSelected;
@property(nonatomic) long long areaLevel; // @synthesize areaLevel=_areaLevel;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(nonatomic) _Bool chineseMainLand; // @synthesize chineseMainLand=_chineseMainLand;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
