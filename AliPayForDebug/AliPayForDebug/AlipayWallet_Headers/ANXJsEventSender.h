//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NBViewControllerProxy;

@interface ANXJsEventSender : NSObject
{
    NBViewControllerProxy *_currentVCProxy;
}

+ (id)sharedSender;
@property(nonatomic) __weak NBViewControllerProxy *currentVCProxy; // @synthesize currentVCProxy=_currentVCProxy;
- (void).cxx_destruct;
- (id)getTopProxy;
- (void)sendOrderToWeb:(id)arg1;
- (void)sendConnectStatusToWeb:(_Bool)arg1;
- (void)stop;
- (void)start:(id)arg1;

@end

