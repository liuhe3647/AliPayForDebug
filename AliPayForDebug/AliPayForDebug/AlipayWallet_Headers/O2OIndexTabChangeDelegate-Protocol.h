//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, O2OLabelItem;

@protocol O2OIndexTabChangeDelegate <NSObject>
- (void)setPageType:(NSString *)arg1 tplId:(NSString *)arg2;
- (void)setTab:(O2OLabelItem *)arg1 transParam:(NSString *)arg2 currentCount:(long long)arg3 realCount:(long long)arg4 loadIfEmpty:(_Bool)arg5 hasMore:(_Bool)arg6;
@end
