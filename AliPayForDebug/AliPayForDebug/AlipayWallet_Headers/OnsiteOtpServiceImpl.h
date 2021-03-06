//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OnsiteOtpService-Protocol.h"

@class DTRpcAsyncCaller, NSMutableDictionary, NSString;

@interface OnsiteOtpServiceImpl : NSObject <OnsiteOtpService>
{
    _Bool _loadYet;
    _Bool _needNotLockLoadYet;
    int _interval;
    NSString *_seed;
    double _timeDiff;
    NSMutableDictionary *_indexMap;
    NSString *_getBarcodeTime;
    DTRpcAsyncCaller *_indexCaller;
    DTRpcAsyncCaller *_seedCaller;
    NSString *_seedTid;
}

@property(nonatomic) _Bool needNotLockLoadYet; // @synthesize needNotLockLoadYet=_needNotLockLoadYet;
@property(retain) NSString *seedTid; // @synthesize seedTid=_seedTid;
@property(retain) DTRpcAsyncCaller *seedCaller; // @synthesize seedCaller=_seedCaller;
@property(retain) DTRpcAsyncCaller *indexCaller; // @synthesize indexCaller=_indexCaller;
@property(retain) NSString *getBarcodeTime; // @synthesize getBarcodeTime=_getBarcodeTime;
@property _Bool loadYet; // @synthesize loadYet=_loadYet;
@property(retain) NSMutableDictionary *indexMap; // @synthesize indexMap=_indexMap;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic, getter=getTimeOffset) double timeDiff; // @synthesize timeDiff=_timeDiff;
@property(retain) NSString *seed; // @synthesize seed=_seed;
- (void).cxx_destruct;
- (void)willDestroy;
- (void)verifyDevice:(CDUnknownBlockType)arg1;
- (void)clearUserOtpInfo;
- (id)getBarcodeSMOtpInfoWithChannel:(id)arg1 seed:(id)arg2 index:(id)arg3 interval:(long long)arg4;
- (id)getSMOtpWithChannel:(id)arg1 seed:(id)arg2 index:(id)arg3 interval:(long long)arg4 otpInfo:(id)arg5;
- (id)getBarcodeOtpInfo:(id)arg1 seed:(id)arg2 index:(id)arg3 interval:(id)arg4;
- (id)getBarcodeOtp:(id)arg1 seed:(id)arg2 index:(id)arg3 interval:(id)arg4;
- (_Bool)putDataNotEmpty:(id)arg1 key:(id)arg2 dic:(id)arg3;
- (id)getOtpItemWithChannelInfo:(id)arg1;
- (void)callInitToken:(id)arg1;
- (_Bool)checkTidChanged;
- (void)setOnsitePaySwitch:(_Bool)arg1;
- (_Bool)getOnsitePaySwitch;
- (id)dictionaryFromString:(id)arg1 withPattern:(id)arg2;
- (id)otpDecrypt:(id)arg1;
- (id)otpEncrypt:(id)arg1;
- (id)getComressYellowCard;
- (id)getEncryptSeed;
- (id)getNewOtpFile;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (void)saveOtpInfo;
- (id)getTidMonitor:(id)arg1;
- (void)restoreOtpInfo;
- (id)getOtpInfo;
- (void)checkTidInit;
- (_Bool)checkTidExist;
- (void)doOtpCheck;
- (void)loginDidFinish:(id)arg1;
- (void)generateOtp:(CDUnknownBlockType)arg1;
- (void)updateServerTimeAndIndex:(CDUnknownBlockType)arg1;
- (void)invalidLocalOtp;
- (id)getBarcodeOtp:(id)arg1;
- (void)getBarcodeValue:(CDUnknownBlockType)arg1;
- (id)getBarcodeOtpInfo:(id)arg1;
- (id)getBarcodeOtp;
- (id)getOtp;
- (id)getWaveOtp;
- (id)calculateNum:(id)arg1;
- (id)calculateNum:(id)arg1 otpInfo:(id)arg2;
- (id)calculateNum:(id)arg1 seed:(id)arg2 interval:(long long)arg3 serveTime:(double)arg4;
- (id)getDateString:(id)arg1;
- (id)calculateOtpNum:(id)arg1 movingFactor:(long long)arg2 outLen:(int)arg3;
- (id)calculateNum;
- (id)getOtpIndex;
- (id)getMonitorTimeDiff;
- (id)getSeedMD5;
- (id)getMonitorPointSeed;
- (id)getCurrentUserId;
- (void)loadOtpFromFile;
- (void)checkUserIndex;
- (_Bool)indexHasExist:(id)arg1 userId:(id)arg2;
- (void)checkSameIndex;
- (void)onTidChanged:(id)arg1;
- (void)firstLoadData;
- (void)start;
- (void)launchService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

