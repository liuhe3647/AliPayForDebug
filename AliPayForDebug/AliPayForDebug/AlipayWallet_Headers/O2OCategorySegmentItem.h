//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface O2OCategorySegmentItem : UIView
{
    UILabel *_textLabel;
    UIView *_selectView;
    _Bool _selected;
    NSString *_text;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)selectItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

