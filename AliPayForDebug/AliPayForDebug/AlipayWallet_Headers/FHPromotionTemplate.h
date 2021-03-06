//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHBaseTemplate.h"

@class FHCellPromotionModel, FHCellSerperatorModel, NSString;

@interface FHPromotionTemplate : FHBaseTemplate
{
    FHCellPromotionModel *_model;
    FHCellSerperatorModel *_serperatorModel;
}

@property(retain, nonatomic) FHCellSerperatorModel *serperatorModel; // @synthesize serperatorModel=_serperatorModel;
@property(retain, nonatomic) FHCellPromotionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (double)heightForTemplateItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfItems;
@property(readonly, nonatomic) NSString *spaceCode;
- (id)initWithDelegate:(id)arg1 card:(id)arg2 obFloor:(id)arg3 resourceId:(id)arg4;

@end

