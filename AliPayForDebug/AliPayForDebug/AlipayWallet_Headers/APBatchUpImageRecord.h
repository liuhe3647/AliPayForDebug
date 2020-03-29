//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;

@interface APBatchUpImageRecord : NSObject
{
    _Bool _isOriginal;
    NSString *_localId;
    NSString *_cloudId;
    NSURL *_url;
    NSError *_error;
    unsigned long long _fileSize;
    NSString *_thumbnailIdForGif;
}

@property(copy, nonatomic) NSString *thumbnailIdForGif; // @synthesize thumbnailIdForGif=_thumbnailIdForGif;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isOriginal; // @synthesize isOriginal=_isOriginal;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
- (void).cxx_destruct;

@end
