//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PEPayeeRecordTodaySum : NSObject
{
    long long _totalCount;
    NSString *_lastReceiveTime;
    NSString *_lastReceiveAmount;
}

@property(copy, nonatomic) NSString *lastReceiveAmount; // @synthesize lastReceiveAmount=_lastReceiveAmount;
@property(copy, nonatomic) NSString *lastReceiveTime; // @synthesize lastReceiveTime=_lastReceiveTime;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

