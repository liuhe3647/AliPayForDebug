//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface DFRegionChangeLoadingWindow : UIWindow
{
    _Bool _isShowing;
    double _startTime;
}

@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)dealloc;
- (void)stopLoading:(CDUnknownBlockType)arg1;
- (void)startLoading;
- (id)init;

@end

