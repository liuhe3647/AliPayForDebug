//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHCellBaseModel.h"

@class NSString;

@interface FHCellUpgradeFooterModel : FHCellBaseModel
{
    NSString *_message;
    NSString *_followAction;
}

@property(copy, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)initWithDataModel:(id)arg1 card:(id)arg2 obFloor:(id)arg3;

@end
