//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTableViewBaseController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class APContactInfo, NSArray, NSString, UITableView;

@interface APPrivateMessageChatSettingsViewController : SCTableViewBaseController <UIActionSheetDelegate>
{
    UITableView *_tableView;
    NSArray *_allSections;
    APContactInfo *_contactInfo;
}

@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSArray *allSections; // @synthesize allSections=_allSections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)rpcGetPersonInfoWithUserId:(id)arg1 account:(id)arg2;
- (void)rpcAddToBlackList:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getTableViewSectionRowsInfo:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactDataUpdate:(id)arg1;
- (void)clearChatHistory;
- (void)report;
- (void)deletePrivateMessageChat;
- (void)onPutToBlackList:(id)arg1;
- (id)makeTableViewSections;
- (void)removeNotify;
- (void)setupNotify;
- (void)commonInitialzationUI;
- (void)commonInitialzationData;
- (void)commonInitialzation;
- (id)initWithContactInfo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
