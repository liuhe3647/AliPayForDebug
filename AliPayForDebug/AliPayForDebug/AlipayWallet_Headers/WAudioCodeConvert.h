//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAudioCodeConvert : NSObject
{
    void *_encodePsEnc;
}

+ (id)instance;
@property(nonatomic) void *encodePsEnc; // @synthesize encodePsEnc=_encodePsEnc;
- (id)decodeSlikDataToPcmData:(id)arg1 errorCode:(id *)arg2;
- (id)encodePCMDataToSilkData:(id)arg1 errorCode:(id *)arg2;
- (struct AudioStreamBasicDescription)defaultSilkFormat;
- (id)init;

@end

