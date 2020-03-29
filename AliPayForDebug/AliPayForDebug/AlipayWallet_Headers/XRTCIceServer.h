//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XRTCIceServer : NSObject
{
    NSArray *_urlStrings;
    NSString *_username;
    NSString *_credential;
    unsigned long long _tlsCertPolicy;
    NSString *_hostname;
    NSArray *_tlsAlpnProtocols;
    NSArray *_tlsEllipticCurves;
}

@property(readonly, nonatomic) NSArray *tlsEllipticCurves; // @synthesize tlsEllipticCurves=_tlsEllipticCurves;
@property(readonly, nonatomic) NSArray *tlsAlpnProtocols; // @synthesize tlsAlpnProtocols=_tlsAlpnProtocols;
@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, nonatomic) unsigned long long tlsCertPolicy; // @synthesize tlsCertPolicy=_tlsCertPolicy;
@property(readonly, nonatomic) NSString *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSArray *urlStrings; // @synthesize urlStrings=_urlStrings;
- (void).cxx_destruct;
- (id)initWithNativeServer:(struct IceServer)arg1;
@property(readonly, nonatomic) struct IceServer nativeServer;
- (id)stringForTlsCertPolicy:(unsigned long long)arg1;
- (id)description;
- (id)initWithURLStrings:(id)arg1 username:(id)arg2 credential:(id)arg3 tlsCertPolicy:(unsigned long long)arg4 hostname:(id)arg5 tlsAlpnProtocols:(id)arg6 tlsEllipticCurves:(id)arg7;
- (id)initWithURLStrings:(id)arg1 username:(id)arg2 credential:(id)arg3 tlsCertPolicy:(unsigned long long)arg4 hostname:(id)arg5 tlsAlpnProtocols:(id)arg6;
- (id)initWithURLStrings:(id)arg1 username:(id)arg2 credential:(id)arg3 tlsCertPolicy:(unsigned long long)arg4 hostname:(id)arg5;
- (id)initWithURLStrings:(id)arg1 username:(id)arg2 credential:(id)arg3 tlsCertPolicy:(unsigned long long)arg4;
- (id)initWithURLStrings:(id)arg1 username:(id)arg2 credential:(id)arg3;
- (id)initWithURLStrings:(id)arg1;

@end
