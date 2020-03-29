//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSBizCardContainerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol FHCardContainerManagerDelegate;

@interface FHCardContainerManager : NSObject <LSBizCardContainerDelegate>
{
    id <FHCardContainerManagerDelegate> _delegate;
    NSString *_obFloor;
    NSString *_spmPrefix;
    unsigned long long _cardIndexBase;
    NSString *_cardContainerScene;
    NSMutableDictionary *_cardDict;
    NSArray *_cardList;
    NSMutableDictionary *_containerCache;
    NSArray *_lastContainerList;
    NSString *_lastUserId;
    struct CGSize _targetSize;
}

+ (void)registerNativeCardInfo;
+ (id)managerWithScene:(id)arg1;
@property(retain, nonatomic) NSString *lastUserId; // @synthesize lastUserId=_lastUserId;
@property(retain, nonatomic) NSArray *lastContainerList; // @synthesize lastContainerList=_lastContainerList;
@property(retain, nonatomic) NSMutableDictionary *containerCache; // @synthesize containerCache=_containerCache;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
@property(retain, nonatomic) NSMutableDictionary *cardDict; // @synthesize cardDict=_cardDict;
@property(retain, nonatomic) NSString *cardContainerScene; // @synthesize cardContainerScene=_cardContainerScene;
@property(nonatomic) unsigned long long cardIndexBase; // @synthesize cardIndexBase=_cardIndexBase;
@property(retain, nonatomic) NSString *spmPrefix; // @synthesize spmPrefix=_spmPrefix;
@property(retain, nonatomic) NSString *obFloor; // @synthesize obFloor=_obFloor;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) __weak id <FHCardContainerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)extraLogParamsForContainer:(id)arg1;
- (id)sceneForCardContainer:(id)arg1;
- (unsigned long long)cardIndexForCardContainer:(id)arg1;
- (id)spmForCardContainer:(id)arg1;
- (void)templateLoadingTime:(double)arg1 cardContainer:(id)arg2;
- (void)renderCostTime:(double)arg1 cardContainer:(id)arg2;
- (void)cardContainerStateDidChanged:(id)arg1;
- (long long)floorForCardContainer:(id)arg1;
- (void)receivedCardEvent:(id)arg1 fromContainer:(id)arg2;
- (void)cardViewDidChanged:(id)arg1;
- (void)checkCardsReady;
- (void)getContainerWithData:(id)arg1;
- (id)filterCards:(id)arg1;
- (void)refreshWithCardList:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
