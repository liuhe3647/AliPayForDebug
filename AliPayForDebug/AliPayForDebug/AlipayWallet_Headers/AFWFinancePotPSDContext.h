//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDContext.h"

@class AFWFinancePotNBViewControllerProxy, AFWFinancePotWebViewController, PSDScene;

@interface AFWFinancePotPSDContext : PSDContext
{
    PSDScene *_currentScene;
    AFWFinancePotWebViewController *_vc;
    AFWFinancePotNBViewControllerProxy *_proxy;
}

@property(retain, nonatomic) AFWFinancePotNBViewControllerProxy *proxy; // @synthesize proxy=_proxy;
@property(nonatomic) __weak AFWFinancePotWebViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) PSDScene *currentScene; // @synthesize currentScene=_currentScene;
- (void).cxx_destruct;
- (id)currentViewControllerProxy;
- (id)initWithVC:(id)arg1;

@end

