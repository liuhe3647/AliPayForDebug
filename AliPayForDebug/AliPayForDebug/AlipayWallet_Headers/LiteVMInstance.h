//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteVMInstance : NSObject
{
    _Bool _valid;
    struct _LVM **_vm;
    NSString *_authCode;
    NSString *_bizId;
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(nonatomic) struct _LVM **vm; // @synthesize vm=_vm;
- (void).cxx_destruct;

@end
