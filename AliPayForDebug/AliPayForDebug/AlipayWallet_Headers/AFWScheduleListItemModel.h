//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFWRightsDateInfo, NSDate, NSMutableArray;

@interface AFWScheduleListItemModel : NSObject
{
    AFWRightsDateInfo *_dateInfo;
    NSMutableArray *_rightsArray;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSMutableArray *rightsArray; // @synthesize rightsArray=_rightsArray;
@property(retain, nonatomic) AFWRightsDateInfo *dateInfo; // @synthesize dateInfo=_dateInfo;
- (void).cxx_destruct;

@end

