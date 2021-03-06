//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACApp.h"

@class NSString, UIImage;

@interface FHACApp : ACApp
{
    NSString *_defaultName;
    NSString *_defaultAppId;
    NSString *_defaultFollowAction;
    UIImage *_defaultIcon;
    NSString *_defaultAssetType;
}

@property(retain, nonatomic) NSString *defaultAssetType; // @synthesize defaultAssetType=_defaultAssetType;
@property(retain, nonatomic) UIImage *defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(retain, nonatomic) NSString *defaultFollowAction; // @synthesize defaultFollowAction=_defaultFollowAction;
@property(retain, nonatomic) NSString *defaultAppId; // @synthesize defaultAppId=_defaultAppId;
@property(retain, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
- (void).cxx_destruct;
- (id)initWithAppId:(id)arg1 assetType:(id)arg2 defaultIcon:(id)arg3 title:(id)arg4 followAction:(id)arg5;

@end

