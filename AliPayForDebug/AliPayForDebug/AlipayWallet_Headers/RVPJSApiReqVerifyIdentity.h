//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKJSApiRequestBase.h"

@class NSDictionary, NSString;

@interface RVPJSApiReqVerifyIdentity : RVKJSApiRequestBase
{
    NSString *_verifyId;
    NSString *_verifyData;
    NSDictionary *_extParams;
}

@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *verifyData; // @synthesize verifyData=_verifyData;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
- (void).cxx_destruct;

@end

