//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NXEngineLogHandler-Protocol.h"

@interface NXAEngineCommonHandler : NSObject <NXEngineLogHandler>
{
}

- (void)eventMonitor:(id)arg1 subType:(id)arg2 session:(id)arg3 page:(id)arg4 extraInfo:(id)arg5;
- (id)storeWithSession:(id)arg1 page:(id)arg2;
- (void)reportException:(id)arg1 type:(id)arg2 session:(id)arg3 page:(id)arg4 extraInfo:(id)arg5;
- (void)reportPerformenceInfo:(id)arg1 cost:(double)arg2 session:(id)arg3 page:(id)arg4 extraInfo:(id)arg5;
- (id)actionType:(id)arg1;
- (id)bizType:(id)arg1;

@end

