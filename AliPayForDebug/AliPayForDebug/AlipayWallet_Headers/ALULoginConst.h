//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ALULoginConst : NSObject
{
    NSDictionary *_constValueMap;
    NSString *_currentDeviceType;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *currentDeviceType; // @synthesize currentDeviceType=_currentDeviceType;
@property(retain, nonatomic) NSDictionary *constValueMap; // @synthesize constValueMap=_constValueMap;
- (void).cxx_destruct;
- (void)setupMap;
- (void)setupDeviceType;
- (double)constByKey:(id)arg1;
- (id)init;

@end
