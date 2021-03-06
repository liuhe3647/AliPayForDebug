//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface APRecentContactFoldConfigModel : NSObject
{
    NSString *_itemType;
    NSString *_foldBoxName;
    NSString *_foldItemType;
    NSString *_foldItemId;
    long long _level;
    NSSet *_forceFoldItemIds;
    double _forceFoldInterval;
    long long _forceFoldCount;
}

@property(nonatomic) long long forceFoldCount; // @synthesize forceFoldCount=_forceFoldCount;
@property(nonatomic) double forceFoldInterval; // @synthesize forceFoldInterval=_forceFoldInterval;
@property(retain, nonatomic) NSSet *forceFoldItemIds; // @synthesize forceFoldItemIds=_forceFoldItemIds;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *foldItemId; // @synthesize foldItemId=_foldItemId;
@property(copy, nonatomic) NSString *foldItemType; // @synthesize foldItemType=_foldItemType;
@property(copy, nonatomic) NSString *foldBoxName; // @synthesize foldBoxName=_foldBoxName;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

