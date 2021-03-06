//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTableViewBaseController.h"

@class NSMutableArray, UITableView;

@interface SPRecommend2MeViewController : SCTableViewBaseController
{
    UITableView *_formView;
    NSMutableArray *_dataSource;
    id _dataProvider;
}

@property(retain, nonatomic) id dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *formView; // @synthesize formView=_formView;
- (void).cxx_destruct;
- (void)handleRecommendClub:(id)arg1;
- (id)makeHeaderForText:(id)arg1 height:(double)arg2 labelTop:(double)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getSectionItem:(long long)arg1;
- (id)recommendCircleTip;
- (id)recommendPossibleTip;
- (void)onRecommendFriendToMe:(id)arg1;
- (void)onRecommendCircleToMe:(id)arg1;
- (_Bool)readPossiblePerson;
- (_Bool)readCircleState;
- (void)loadCloudCircleState;
- (_Bool)showPossibleFriendSwitch;
- (id)makeTableviewSections;
- (void)commonInit;
- (void)viewWillDestroy;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

