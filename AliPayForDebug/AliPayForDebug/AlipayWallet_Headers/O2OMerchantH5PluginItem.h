//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMerchantCommonItem.h"

@class NSString, UIView;
@protocol H5WebViewInterface;

@interface O2OMerchantH5PluginItem : O2OMerchantCommonItem
{
    NSString *_h5Url;
    UIView<H5WebViewInterface> *_webView;
    NSString *_appId;
}

+ (id)parseItem:(id)arg1 commonDic:(id)arg2 vc:(id)arg3;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) UIView<H5WebViewInterface> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
- (void).cxx_destruct;
- (void)dealloc;

@end

