//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, APGroupNickNameItem, NSArray, NSString;

@protocol APGroupNickNameDAOProxy <APDAOProtocol>
- (APDAOResult *)deleteGroupNickNameForNickNameIDs:(NSArray *)arg1;
- (NSArray *)queryGroupNickNamesWithGroupId:(NSString *)arg1;
- (APDAOResult *)deleteGroupNickNameForNickNameID:(NSString *)arg1;
- (NSArray *)queryGroupNickNameWithIDs:(NSArray *)arg1;
- (APGroupNickNameItem *)queryGroupNickNameWithID:(NSString *)arg1;
- (APDAOResult *)insertGroupNickNameList:(NSArray *)arg1;
- (APDAOResult *)insertGroupNickName:(APGroupNickNameItem *)arg1;
@end

