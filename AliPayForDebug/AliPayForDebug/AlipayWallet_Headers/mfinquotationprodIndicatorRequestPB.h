//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mfinquotationprodIndicatorRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *adjustType; // @dynamic adjustType;
@property(retain, nonatomic) NSString *endDate; // @dynamic endDate;
@property(readonly) _Bool hasAdjustType; // @dynamic hasAdjustType;
@property(readonly) _Bool hasEndDate; // @dynamic hasEndDate;
@property(readonly) _Bool hasLimit; // @dynamic hasLimit;
@property(readonly) _Bool hasName; // @dynamic hasName;
@property(readonly) _Bool hasPeriod; // @dynamic hasPeriod;
@property(readonly) _Bool hasSource; // @dynamic hasSource;
@property(readonly) _Bool hasSymbol; // @dynamic hasSymbol;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) int limit; // @dynamic limit;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSArray *param; // @dynamic param;
@property(retain, nonatomic) NSString *period; // @dynamic period;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) NSString *symbol; // @dynamic symbol;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end
