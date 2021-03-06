//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary, NSString;
@protocol AlipayARUPFrameDecoderDelegate;

@interface AlipayARUPFrameDecoder : NSObject
{
    NSString *_status;
    NSMutableDictionary *_allheaders;
    NSMutableData *_body;
    _Bool _headParsered;
    id <AlipayARUPFrameDecoderDelegate> _delegate;
}

@property(nonatomic) __weak id <AlipayARUPFrameDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parseCompetePackageHeaders;
- (void)parseCompletePackage;
- (void)parserLine:(char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)decode:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithDelegate:(id)arg1;

@end

