//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDRule, NSDictionary, NSString;

@protocol IDFeatureProtocol <NSObject>
@property(nonatomic) __weak IDRule *rule;
- (void)executeFeatureOnCompletion:(void (^)(_Bool, id))arg1;
- (id)initWithParams:(NSDictionary *)arg1;
- (NSString *)featureId;
@end
