//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APFunctionCoverageConfigInfo : NSObject
{
    _Bool _isOpen;
    unsigned long long _dumpThreshold;
    double _uploadInterval;
    unsigned long long _maxUploadSize;
}

@property(nonatomic) unsigned long long maxUploadSize; // @synthesize maxUploadSize=_maxUploadSize;
@property(nonatomic) double uploadInterval; // @synthesize uploadInterval=_uploadInterval;
@property(nonatomic) unsigned long long dumpThreshold; // @synthesize dumpThreshold=_dumpThreshold;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
- (id)description;
- (id)init;

@end
