//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UcdpFatigueRuleDao, UcdpPositionBodyDao;

@interface UcdpDaoManager : NSObject
{
    id <UcdpPositionBodyDao> _positionDao;
    id <UcdpFatigueRuleDao> _fatigueDao;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <UcdpFatigueRuleDao> fatigueDao; // @synthesize fatigueDao=_fatigueDao;
@property(retain, nonatomic) id <UcdpPositionBodyDao> positionDao; // @synthesize positionDao=_positionDao;
- (void).cxx_destruct;
- (void)deleteFatigueRules:(id)arg1;
- (void)deleteFatigueRule:(id)arg1;
- (id)getFatigueRule:(id)arg1;
- (id)getAllFatigueRules;
- (void)updateFatigueList:(id)arg1;
- (void)saveFatigueRules:(id)arg1;
- (void)saveFatigueRule:(id)arg1;
- (void)deletePositionBodys:(id)arg1;
- (void)deletePositionBody:(id)arg1;
- (id)getPositionBody:(id)arg1;
- (id)getAllPositionBodys;
- (void)updateCreativeList:(id)arg1;
- (void)savePositionBodys:(id)arg1;
- (void)savePositionBody:(id)arg1;
- (id)init;

@end

