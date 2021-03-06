//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SecurityGuardManager : NSObject
{
}

+ (id)getInstance;
- (_Bool)isOpen;
- (id)getSDKVersion;
- (id)getInterface:(id)arg1;
- (id)getComponent:(int)arg1;
- (id)getAtlasEncryptComp;
- (id)getNoCaptchaComp;
- (id)getUATraceComp;
- (id)getSecurityDNSComp;
- (id)getDynamicDataEncryptComp;
- (id)getDataCollectionComp;
- (id)getStaticDataEncryptComp;
- (id)getSimulatorDetectComp;
- (id)getRootDetectComp;
- (id)getSecurityBodyComp;
- (id)getStaticDataStoreComp;
- (id)getIndieKitComp;
- (id)getDynamicDataStoreComp;
- (id)getSecureSignatureComp;

@end

