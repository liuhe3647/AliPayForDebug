//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CardSDK, NSArray, NSDictionary, NSString;
@protocol CKFalconEventListener;

@interface HCCardParserReq : NSObject
{
    NSArray *_feeds;
    CardSDK *_cardsdk;
    NSString *_engineType;
    NSDictionary *_nativeTplMap;
    NSArray *_nativeTplWhiteList;
    NSDictionary *_customLayoutMap;
    id <CKFalconEventListener> _eventListener;
}

@property(retain, nonatomic) id <CKFalconEventListener> eventListener; // @synthesize eventListener=_eventListener;
@property(retain, nonatomic) NSDictionary *customLayoutMap; // @synthesize customLayoutMap=_customLayoutMap;
@property(retain, nonatomic) NSArray *nativeTplWhiteList; // @synthesize nativeTplWhiteList=_nativeTplWhiteList;
@property(retain, nonatomic) NSDictionary *nativeTplMap; // @synthesize nativeTplMap=_nativeTplMap;
@property(retain, nonatomic) NSString *engineType; // @synthesize engineType=_engineType;
@property(retain, nonatomic) CardSDK *cardsdk; // @synthesize cardsdk=_cardsdk;
@property(retain, nonatomic) NSArray *feeds; // @synthesize feeds=_feeds;
- (void).cxx_destruct;

@end
