//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface AUILoadingIndicatorConfig : NSObject
{
    double _itemSpace;
    double _itemWidth;
    double _itemHeight;
    UIColor *_itemColor;
    double _itemAngleWidth;
}

@property(nonatomic) double itemAngleWidth; // @synthesize itemAngleWidth=_itemAngleWidth;
@property(retain, nonatomic) UIColor *itemColor; // @synthesize itemColor=_itemColor;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
- (void).cxx_destruct;
- (void)scale:(double)arg1;

@end

