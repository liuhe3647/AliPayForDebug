//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface UnionResourceInfo : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;
+ (id)resourceInfoWithVerifyParams:(id)arg1;

// Remaining properties
@property(nonatomic) int bizType; // @dynamic bizType;
@property(nonatomic) int diffMaxSize; // @dynamic diffMaxSize;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasDiffMaxSize; // @dynamic hasDiffMaxSize;
@property(readonly) _Bool hasMessage; // @dynamic hasMessage;
@property(readonly) _Bool hasQuickRollback; // @dynamic hasQuickRollback;
@property(readonly) _Bool hasRollback; // @dynamic hasRollback;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSArray *item; // @dynamic item;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int quickRollback; // @dynamic quickRollback;
@property(nonatomic) _Bool rollback; // @dynamic rollback;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end
