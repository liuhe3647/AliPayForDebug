//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIZOLOZFaceModule.h"

@class NSString;

@interface VIZOLOZFaceUserInputCertModule : VIZOLOZFaceModule
{
    NSString *_realName;
    NSString *_certNo;
}

+ (id)prerequisitesWithPrerequisites:(id)arg1 params:(id)arg2;
@property(retain, nonatomic) NSString *certNo; // @synthesize certNo=_certNo;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
- (void).cxx_destruct;
- (void)callRPC:(id)arg1 withResponse:(id)arg2;
- (id)faceExtInfo;
- (void)startFace;
- (void)start;

@end
