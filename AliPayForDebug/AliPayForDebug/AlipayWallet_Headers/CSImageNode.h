//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSNode.h"

@class NSString;

@interface CSImageNode : CSNode
{
    _Bool _put2Gray;
    _Bool _put2GrayTransparent;
    _Bool _sync;
    NSString *_placeHolder;
    NSString *_imageSrc;
    long long _contentMode;
    NSString *_business;
    NSString *_bizType;
}

@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(nonatomic) _Bool put2GrayTransparent; // @synthesize put2GrayTransparent=_put2GrayTransparent;
@property(nonatomic) _Bool put2Gray; // @synthesize put2Gray=_put2Gray;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(copy, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (id)init;

@end

