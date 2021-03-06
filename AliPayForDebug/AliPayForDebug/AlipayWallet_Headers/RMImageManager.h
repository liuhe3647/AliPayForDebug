//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRMResourceManager-Protocol.h"

@class NSString, RMImageRequest;

@interface RMImageManager : NSObject <IRMResourceManager>
{
    RMImageRequest *_currentRequest;
    NSString *_localId;
}

+ (_Bool)hasLocalImage:(id)arg1;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) RMImageRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void).cxx_destruct;
- (long long)getTaskDownloadNetType;
- (void)cancel;
- (void)loadImageWithRequest:(id)arg1 loadingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

