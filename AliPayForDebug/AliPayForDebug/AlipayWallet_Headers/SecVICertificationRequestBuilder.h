//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SecVICertificationRequestBuilder : NSObject
{
}

+ (id)createAttribute;
+ (id)createDN:(id)arg1;
+ (id)createVersion:(unsigned char)arg1;
+ (id)createCertificationRequest:(id)arg1 withUser:(id)arg2;
+ (id)build:(id)arg1 pkinfoBuilder:(id)arg2 signatureBuilder:(id)arg3;

@end
