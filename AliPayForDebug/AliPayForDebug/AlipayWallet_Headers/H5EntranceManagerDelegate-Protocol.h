//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class H5WebViewController, NSDictionary;

@protocol H5EntranceManagerDelegate <NSObject>
- (void)requestDataWithParams:(NSDictionary *)arg1 inViewController:(H5WebViewController *)arg2 callback:(void (^)(NSDictionary *))arg3 timeout:(double)arg4;
- (_Bool)isPermissionAndRouterConfigValid:(NSDictionary *)arg1;
- (_Bool)shouldCheckPermissionAndDynamicWithConfig:(NSDictionary *)arg1;
@end

