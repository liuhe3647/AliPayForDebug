//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface ATFileMutext : NSObject
{
    NSMutableDictionary *_map;
    NSRecursiveLock *_mapLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isFileUploading:(id)arg1;
- (void)removeMarkFile:(id)arg1;
- (void)markFileUploading:(id)arg1;
- (id)init;

@end
