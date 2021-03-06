//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKEvent.h"

@class NSString;
@protocol RVAToolbarMenuProtocol;

@interface RVAToolbarMenuEvent : RVKEvent
{
    id <RVAToolbarMenuProtocol> _toolbarMenu;
    NSString *_selectedRowTag;
    NSString *_selectedTag;
}

+ (id)selectCancelEvent:(id)arg1 selectedTag:(id)arg2 selectedRowTag:(id)arg3;
+ (id)selectEvent:(id)arg1 selectedTag:(id)arg2 selectedRowTag:(id)arg3;
+ (id)createAfterEvent:(id)arg1;
+ (id)createBeforeEvent:(id)arg1;
+ (id)allEvent:(id)arg1;
+ (id)hideEvent;
+ (id)showEvent;
@property(readonly, copy, nonatomic) NSString *selectedTag; // @synthesize selectedTag=_selectedTag;
@property(readonly, copy, nonatomic) NSString *selectedRowTag; // @synthesize selectedRowTag=_selectedRowTag;
@property(retain, nonatomic) id <RVAToolbarMenuProtocol> toolbarMenu; // @synthesize toolbarMenu=_toolbarMenu;
- (void).cxx_destruct;
- (void)setSelectedTag:(id)arg1;
- (void)setSelectedRowTag:(id)arg1;

@end

