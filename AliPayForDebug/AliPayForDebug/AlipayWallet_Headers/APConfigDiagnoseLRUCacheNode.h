//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APConfigDiagnoseLRUCacheNode : NSObject
{
    _Bool _isSimple;
    NSString *_key;
    NSString *_value;
    APConfigDiagnoseLRUCacheNode *_prev;
    APConfigDiagnoseLRUCacheNode *_next;
}

@property(nonatomic) __weak APConfigDiagnoseLRUCacheNode *next; // @synthesize next=_next;
@property(nonatomic) __weak APConfigDiagnoseLRUCacheNode *prev; // @synthesize prev=_prev;
@property(nonatomic) _Bool isSimple; // @synthesize isSimple=_isSimple;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

