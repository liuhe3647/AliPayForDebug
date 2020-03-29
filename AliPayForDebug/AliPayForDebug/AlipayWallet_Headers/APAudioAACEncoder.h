//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APAudioEncoder-Protocol.h"

@class APAudioRecordSetting, NSData, NSMutableData, NSString;

@interface APAudioAACEncoder : NSObject <APAudioEncoder>
{
    unsigned int _maximumOutputPacketSize;
    struct OpaqueAudioConverter *_audioConverter;
    APAudioRecordSetting *_audioSetting;
    char *_aacBuffer;
    unsigned long long _aacBufferSize;
    char *_pcmBuffer;
    unsigned long long _pcmBufferSize;
    NSMutableData *_aacEncodedData;
    NSMutableData *_aacTemData;
    NSData *_m4aEncodedData;
    NSData *_leftData;
}

+ (_Bool)isAvailable;
@property(retain, nonatomic) NSData *leftData; // @synthesize leftData=_leftData;
@property(retain, nonatomic) NSData *m4aEncodedData; // @synthesize m4aEncodedData=_m4aEncodedData;
@property(retain, nonatomic) NSMutableData *aacTemData; // @synthesize aacTemData=_aacTemData;
@property(retain, nonatomic) NSMutableData *aacEncodedData; // @synthesize aacEncodedData=_aacEncodedData;
@property(nonatomic) unsigned int maximumOutputPacketSize; // @synthesize maximumOutputPacketSize=_maximumOutputPacketSize;
@property(nonatomic) unsigned long long pcmBufferSize; // @synthesize pcmBufferSize=_pcmBufferSize;
@property(nonatomic) char *pcmBuffer; // @synthesize pcmBuffer=_pcmBuffer;
@property(nonatomic) unsigned long long aacBufferSize; // @synthesize aacBufferSize=_aacBufferSize;
@property(nonatomic) char *aacBuffer; // @synthesize aacBuffer=_aacBuffer;
@property(retain, nonatomic) APAudioRecordSetting *audioSetting; // @synthesize audioSetting=_audioSetting;
@property(nonatomic) struct OpaqueAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
- (void).cxx_destruct;
- (int)freqIdxForAdtsHeader:(unsigned long long)arg1;
- (id)adtsDataForPacketLength:(unsigned long long)arg1;
- (struct AudioClassDescription *)getAudioClassDescriptionWithType:(unsigned int)arg1 fromManufacturer:(unsigned int)arg2;
- (_Bool)checkStatus:(int)arg1;
- (struct AudioStreamBasicDescription)aacStreamDescriptionWithAudioSetting:(id)arg1;
- (id)encodedData;
- (void)dealloc;
- (void)reset;
- (id)complete;
- (int)fillComplexBuffer;
- (id)fillPcmDataBuffer:(id)arg1 error:(id *)arg2;
- (void)start;
- (void)prepareWithSetting:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
