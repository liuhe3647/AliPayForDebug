//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIViewController;

@interface WHCardDataRequest : NSObject
{
    UIViewController *_pageVC;
    NSString *_refreshMode;
    NSString *_switchEdition;
    NSDictionary *_extMap;
}

@property(retain, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(copy, nonatomic) NSString *switchEdition; // @synthesize switchEdition=_switchEdition;
@property(copy, nonatomic) NSString *refreshMode; // @synthesize refreshMode=_refreshMode;
@property(nonatomic) __weak UIViewController *pageVC; // @synthesize pageVC=_pageVC;
- (void).cxx_destruct;

@end

