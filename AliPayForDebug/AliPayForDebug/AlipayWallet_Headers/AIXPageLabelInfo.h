//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AIXPageLabelInfo : NSObject
{
    NSString *_sceneCode;
    NSString *_sampleId;
    NSString *_chInfo;
    NSString *_scmId;
    long long _maxMissCount;
    NSString *_labelMark;
}

@property(copy, nonatomic) NSString *labelMark; // @synthesize labelMark=_labelMark;
@property(nonatomic) long long maxMissCount; // @synthesize maxMissCount=_maxMissCount;
@property(copy, nonatomic) NSString *scmId; // @synthesize scmId=_scmId;
@property(copy, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(copy, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(copy, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
- (void).cxx_destruct;

@end

