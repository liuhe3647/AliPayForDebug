//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCondition.h>

@class H5MainLinkNode;

@interface H5MainLinkExpectation : NSCondition
{
    unsigned long long _status;
    H5MainLinkNode *_node;
}

@property(nonatomic) __weak H5MainLinkNode *node; // @synthesize node=_node;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dealloc;
- (void)signalByTargetDestroy:(id)arg1;
- (id)initWithNode:(id)arg1;

@end
