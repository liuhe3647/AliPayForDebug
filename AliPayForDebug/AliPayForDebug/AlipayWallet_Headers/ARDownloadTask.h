//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARDownloadTask : NSObject
{
    _Bool _zip;
    _Bool _isPar;
    NSString *_identifer;
    NSString *_cloudId;
    NSString *_md5;
    NSString *_storePath;
    double _bytes;
}

@property(nonatomic) _Bool isPar; // @synthesize isPar=_isPar;
@property(nonatomic) _Bool zip; // @synthesize zip=_zip;
@property(nonatomic) double bytes; // @synthesize bytes=_bytes;
@property(retain, nonatomic) NSString *storePath; // @synthesize storePath=_storePath;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(retain, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
- (void).cxx_destruct;

@end

