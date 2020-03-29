//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CDPSpaceInfo, NSString, UIImage;

@interface O2OCommonCDPObject : NSObject <NSCopying>
{
    NSString *_objectId;
    NSString *_spaceCode;
    long long _priority;
    NSString *_type;
    NSString *_content;
    NSString *_iconUrl;
    NSString *_maskUrl;
    NSString *_actionUrl;
    UIImage *_maskImage;
    CDPSpaceInfo *_spaceInfo;
}

@property(retain, nonatomic) CDPSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *maskUrl; // @synthesize maskUrl=_maskUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)process:(CDUnknownBlockType)arg1;
- (id)initWithSpaceInfo:(id)arg1;

@end
