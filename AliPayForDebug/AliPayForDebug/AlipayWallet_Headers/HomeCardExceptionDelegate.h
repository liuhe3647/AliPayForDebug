//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CardSDKExceptionHandler-Protocol.h"

@class CSTableViewDelegate, NSString;

@interface HomeCardExceptionDelegate : NSObject <CardSDKExceptionHandler>
{
    CSTableViewDelegate *_delegate;
}

- (void).cxx_destruct;
- (void)onException:(id)arg1;
- (void)setTableDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
