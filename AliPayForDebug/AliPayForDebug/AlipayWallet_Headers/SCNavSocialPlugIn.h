//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BEELocationDetailsProtocol-Protocol.h"

@class NSString;

@interface SCNavSocialPlugIn : NSObject <BEELocationDetailsProtocol>
{
}

- (_Bool)shouldHideRealTimeLocationShareButton:(id)arg1;
- (void)doSendToFriend:(id)arg1 userType:(id)arg2 paramDict:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)shareToFriendWithParams:(id)arg1 superNavigtaionController:(id)arg2 superVC:(id)arg3;
- (void)shareLocationRealTimeWithParam:(id)arg1 superNavigtaionController:(id)arg2;
- (void)addToFavoriteWithParams:(id)arg1 superView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
