//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class NSString, UIImage;
@protocol DTCancellable;

@protocol LegacySystemService <DTService>
@property(copy, nonatomic) NSString *sessionId;
- (NSString *)getOtp;
- (UIImage *)genBlueQRCode:(NSString *)arg1 level:(long long)arg2 size:(unsigned int)arg3;
- (UIImage *)genQRCodeWithLevel:(NSString *)arg1 level:(long long)arg2;
- (UIImage *)genQRCode:(NSString *)arg1;
- (UIImage *)genBarcode:(NSString *)arg1;
- (id <DTCancellable>)queryCCDCForeignCardInfoWithCardNumber:(NSString *)arg1 CCDCCardUsedType:(int)arg2 completionBlock:(void (^)(CCDCCardInfo *, NSError *))arg3;
- (id <DTCancellable>)queryCCDCCardInfoWithCardNumber:(NSString *)arg1 CCDCCardUsedType:(int)arg2 completionBlock:(void (^)(CCDCCardInfo *, NSError *))arg3;
@end

