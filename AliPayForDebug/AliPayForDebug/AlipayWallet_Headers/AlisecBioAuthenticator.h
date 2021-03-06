//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AlisecBioAuthenticator : NSObject
{
}

+ (id)getSecData;
+ (void)doDeregister:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)doAuthenticate:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)doRegister:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)getAuthenticatorByType:(int)arg1;
+ (id)getPayAuthDataWithoutLog:(id)arg1;
+ (id)getPayAuthData:(id)arg1;
+ (id)getBiometricBaseInfo;
+ (id)getRegAuthData:(int)arg1 uid:(id)arg2;
+ (id)getAuthInfo:(int)arg1 extInfo:(id)arg2;
+ (id)getAuthInfo;
+ (id)getDeviceID;
+ (void)internalAirPayVerify:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalGeneralRegister:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)preprocess:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)internalVerify:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalUnRegister:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalRegister:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalUnlock:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalQueryAvailable:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (_Bool)checkDeviceAvailability;
+ (void)process:(id)arg1 delegate:(id)arg2;
+ (void)process:(id)arg1;
+ (_Bool)checkBiometricStatus;
+ (int)getSupportType;
+ (void)process:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)sw_processBiz:(int)arg1 withData:(id)arg2 delegate:(id)arg3;
+ (void)sw_processBiz:(int)arg1 withData:(id)arg2 andExt:(id)arg3 delegate:(id)arg4;
+ (void)sw_cancel:(_Bool)arg1;

@end

