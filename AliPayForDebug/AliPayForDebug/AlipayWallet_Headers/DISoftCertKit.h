//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DISoftCertKit : NSObject
{
}

+ (_Bool)importCert:(id)arg1 cert:(id)arg2 certSn:(id)arg3 workDirectory:(id)arg4;
+ (id)softCertOrignSn:(id)arg1;
+ (id)softCertData:(id)arg1 workDirectory:(id)arg2;
+ (_Bool)saveSoftCert:(id)arg1 softCertInfo:(id)arg2 workDirectory:(id)arg3;
+ (id)getSoftCertWorkDirectory:(id)arg1 channel:(id)arg2;

@end
