//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatDataCtrlBase.h"

@class NSString, UIImage;

@interface PPChatDataItem : PPChatDataCtrlBase
{
    NSString *_title;
    NSString *_detailText;
    UIImage *_titleIcon;
    NSString *_titleIconURL;
    NSString *_clickURL;
    CDUnknownBlockType _customeTap;
}

@property(copy, nonatomic) CDUnknownBlockType customeTap; // @synthesize customeTap=_customeTap;
@property(retain, nonatomic) NSString *clickURL; // @synthesize clickURL=_clickURL;
@property(retain, nonatomic) NSString *titleIconURL; // @synthesize titleIconURL=_titleIconURL;
@property(retain, nonatomic) UIImage *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

