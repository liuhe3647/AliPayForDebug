//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPTaskUnitCheckBox.h"

#import "WPTaskUnitCheckBoxElementProtocol-Protocol.h"

@class NSString;

@interface WPTaskUnitRadio : WPTaskUnitCheckBox <WPTaskUnitCheckBoxElementProtocol>
{
}

- (void)setCacheData:(id)arg1;
- (id)getCacheData;
- (id)getInputData;
- (id)constructCheckBoxElementWithData:(id)arg1;
- (id)initWithData:(id)arg1 width:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
