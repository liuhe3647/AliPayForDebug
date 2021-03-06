//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHBaseTemplate.h"

#import "FHTemplateClickDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface FHNewsBattleTemplate : FHBaseTemplate <FHTemplateClickDelegate>
{
    NSMutableArray *_cellArray;
}

@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
- (void).cxx_destruct;
- (void)didEndDisplayCell:(id)arg1 forIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)firstCardInSecondScreenDidExposured:(id)arg1;
- (void)contentView:(id)arg1 didClickedFollowAction:(id)arg2 log:(id)arg3 extInfo:(id)arg4;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (double)heightForTemplateItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfItems;
- (void)setSetionNumber:(unsigned long long)arg1 isNearFooter:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1 card:(id)arg2 obFloor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

