//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mobileaixTrainingReportReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *cloudId; // @dynamic cloudId;
@property(readonly) _Bool hasCloudId; // @dynamic hasCloudId;
@property(readonly) _Bool hasRoundId; // @dynamic hasRoundId;
@property(readonly) _Bool hasTaskId; // @dynamic hasTaskId;
@property(readonly) _Bool hasTaskType; // @dynamic hasTaskType;
@property(retain, nonatomic) NSString *roundId; // @dynamic roundId;
@property(retain, nonatomic) NSArray *sampleInfos; // @dynamic sampleInfos;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;
@property(retain, nonatomic) NSString *taskType; // @dynamic taskType;

@end
