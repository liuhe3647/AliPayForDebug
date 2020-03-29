//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UnableUseLoggerProtocol-Protocol.h"

@class APTheme, NSString;

@interface APThemeManager : NSObject <UnableUseLoggerProtocol>
{
    APTheme *_defaultTheme;
    APTheme *_currentTheme;
}

+ (id)sharedInstance;
+ (void)logger_unableUse:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 params:(id)arg4;
@property(readonly, nonatomic) APTheme *currentTheme; // @synthesize currentTheme=_currentTheme;
@property(readonly, nonatomic) APTheme *defaultTheme; // @synthesize defaultTheme=_defaultTheme;
- (void).cxx_destruct;
- (void)loadThemeWithPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
