//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ECkeyPairs : NSObject
{
    NSString *_privatePem;
    NSString *_publicPem;
    NSString *_peerPublicPem;
    NSString *_shareKey;
}

@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(retain, nonatomic) NSString *peerPublicPem; // @synthesize peerPublicPem=_peerPublicPem;
@property(retain, nonatomic) NSString *publicPem; // @synthesize publicPem=_publicPem;
@property(retain, nonatomic) NSString *privatePem; // @synthesize privatePem=_privatePem;
- (void).cxx_destruct;

@end
