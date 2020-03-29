//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "H5NavItemViewDelegate-Protocol.h"

@class AUBarButtonItem, AUFloatMenu, NSString, UIViewController;
@protocol RVANavigationTitleViewProtocol;

@interface NXANavigationBarManager : NSObject <H5NavItemViewDelegate>
{
    _Bool _hideLeftButtonsByJs;
    AUFloatMenu *_popView;
    id <RVANavigationTitleViewProtocol> _h5titleView;
    UIViewController *_currentViewController;
    AUBarButtonItem *_backButtonItem;
    AUBarButtonItem *_closeButtonItem;
}

@property(retain, nonatomic) AUBarButtonItem *closeButtonItem; // @synthesize closeButtonItem=_closeButtonItem;
@property(retain, nonatomic) AUBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) id <RVANavigationTitleViewProtocol> h5titleView; // @synthesize h5titleView=_h5titleView;
@property(retain, nonatomic) AUFloatMenu *popView; // @synthesize popView=_popView;
@property(nonatomic) _Bool hideLeftButtonsByJs; // @synthesize hideLeftButtonsByJs=_hideLeftButtonsByJs;
- (void).cxx_destruct;
- (void)onClicked:(id)arg1;
- (void)updateCloseButtonItem:(id)arg1;
- (void)updateBackButtonItem:(id)arg1;
- (void)floatMenuWithItems:(id)arg1;
- (id)initWithWeakViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
