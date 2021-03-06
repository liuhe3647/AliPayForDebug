//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSData, NSString;

@interface ParContentFile : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasFileName;
    _Bool _hasFileType;
    _Bool _hasEncodingType;
    _Bool _hasFileBytes;
    _Bool _hasLoadingType;
    _Bool _hasEncryptFileName;
    int _encodingType;
    int _loadingType;
    NSString *_fileName;
    NSString *_fileType;
    NSData *_fileBytes;
    NSString *_encryptFileName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *encryptFileName; // @synthesize encryptFileName=_encryptFileName;
@property(nonatomic) int loadingType; // @synthesize loadingType=_loadingType;
@property(retain, nonatomic) NSData *fileBytes; // @synthesize fileBytes=_fileBytes;
@property(nonatomic) int encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) _Bool hasEncryptFileName; // @synthesize hasEncryptFileName=_hasEncryptFileName;
@property(readonly) _Bool hasLoadingType; // @synthesize hasLoadingType=_hasLoadingType;
@property(readonly) _Bool hasFileBytes; // @synthesize hasFileBytes=_hasFileBytes;
@property(readonly) _Bool hasEncodingType; // @synthesize hasEncodingType=_hasEncodingType;
@property(readonly) _Bool hasFileType; // @synthesize hasFileType=_hasFileType;
@property(readonly) _Bool hasFileName; // @synthesize hasFileName=_hasFileName;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

