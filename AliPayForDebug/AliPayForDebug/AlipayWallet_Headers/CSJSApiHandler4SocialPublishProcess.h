//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

@class CSPublishFeedManager;

@interface CSJSApiHandler4SocialPublishProcess : PSDJsApiHandler
{
    CSPublishFeedManager *_publishFeedManager;
}

@property(retain, nonatomic) CSPublishFeedManager *publishFeedManager; // @synthesize publishFeedManager=_publishFeedManager;
- (void).cxx_destruct;
- (id)generateResponseDataWithCancel;
- (id)generateResponseDataWithError:(id)arg1;
- (id)generateResponseDataWithFeed:(id)arg1;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

