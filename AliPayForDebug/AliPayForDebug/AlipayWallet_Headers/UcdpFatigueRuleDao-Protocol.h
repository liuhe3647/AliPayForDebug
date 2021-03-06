//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSString, UcdpFatigueRule;

@protocol UcdpFatigueRuleDao <APDAOProtocol>
- (APDAOResult *)deleteFatigueRules:(NSArray *)arg1;
- (APDAOResult *)deleteFatigueRule:(NSString *)arg1;
- (UcdpFatigueRule *)getFatigueRule:(NSString *)arg1;
- (NSArray *)getAllFatigueRules;
- (APDAOResult *)updateFatigueList:(UcdpFatigueRule *)arg1;
- (APDAOResult *)saveFatigueRules:(NSArray *)arg1;
- (APDAOResult *)saveFatigueRule:(UcdpFatigueRule *)arg1;
@end

