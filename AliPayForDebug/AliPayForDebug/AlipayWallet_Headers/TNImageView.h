//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSObject, NSString, RCTBridge, _TNLinearGradientModel;
@protocol OS_dispatch_queue;

@interface TNImageView : UIImageView
{
    RCTBridge *_bridge;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onLoad;
    NSString *_src;
    NSString *_defaultSrc;
    NSString *_mode;
    long long _resizeMode;
    NSObject<OS_dispatch_queue> *_downloadQueue;
    _TNLinearGradientModel *_gradientModel;
}

@property(retain, nonatomic) _TNLinearGradientModel *gradientModel; // @synthesize gradientModel=_gradientModel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *defaultSrc; // @synthesize defaultSrc=_defaultSrc;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) CDUnknownBlockType onLoad; // @synthesize onLoad=_onLoad;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithBridge:(id)arg1;
- (void)linearGradientBackground:(id)arg1;
- (id)linearGradientWithCSS:(id)arg1;

@end

