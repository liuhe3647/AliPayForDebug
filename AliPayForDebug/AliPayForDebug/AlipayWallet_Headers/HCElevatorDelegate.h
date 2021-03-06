//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HCElevatorViewDelegate-Protocol.h"

@class HCElevatorView, HCRefreshDelegate, HomeCardDataCenter, NSString, UITableView, UIView;

@interface HCElevatorDelegate : NSObject <HCElevatorViewDelegate>
{
    UITableView *_tableView;
    UIView *_vcView;
    HomeCardDataCenter *_dataCenter;
    HCRefreshDelegate *_refreshDelegate;
    HCElevatorView *_elevatorView;
}

@property(retain, nonatomic) HCElevatorView *elevatorView; // @synthesize elevatorView=_elevatorView;
- (void).cxx_destruct;
- (void)refreshElevatorView;
- (_Bool)elevatorViewScrollAnimated;
- (void)elevatorViewTouched:(id)arg1;
- (void)setVCView:(id)arg1;
- (void)setRefreshDelegate:(id)arg1;
- (void)setDataCenter:(id)arg1;
- (void)setTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

