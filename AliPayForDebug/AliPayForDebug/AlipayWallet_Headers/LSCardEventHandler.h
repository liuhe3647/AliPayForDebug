//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSEventDelegate-Protocol.h"

@class LSCardContainer, NSString;
@protocol LSEventDelegate;

@interface LSCardEventHandler : NSObject <LSEventDelegate>
{
    LSCardContainer<LSEventDelegate> *_cardContainer;
}

@property(nonatomic) __weak LSCardContainer<LSEventDelegate> *cardContainer; // @synthesize cardContainer=_cardContainer;
- (void).cxx_destruct;
- (_Bool)fireEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
