//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VIOModuleDelegate-Protocol.h"

@class NSString;

@interface VIOEngine : NSObject <VIOModuleDelegate>
{
    CDUnknownBlockType _callback;
}

+ (long long)getAppropriateModuleType;
+ (id)engine;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)callbackWithResult:(id)arg1;
- (void)startWithModuleType:(long long)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

