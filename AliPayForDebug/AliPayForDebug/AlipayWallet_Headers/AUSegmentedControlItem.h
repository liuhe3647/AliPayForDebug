//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUBadgeLabel, NSString, UIColor, UIFont;
@protocol AUSegmentedControlItemDelegate;

@interface AUSegmentedControlItem : UIView
{
    _Bool _selected;
    _Bool _fixedWidth;
    _Bool _badgeReserved;
    id <AUSegmentedControlItemDelegate> _delegate;
    AUBadgeLabel *_badgeLabel;
    UIFont *_titleFont;
    UIColor *_selectedColor;
    long long _textHorizontalPadding;
    double _textLeftPadding;
    double _textRightPadding;
}

@property(nonatomic) double textRightPadding; // @synthesize textRightPadding=_textRightPadding;
@property(nonatomic) double textLeftPadding; // @synthesize textLeftPadding=_textLeftPadding;
@property(nonatomic) _Bool badgeReserved; // @synthesize badgeReserved=_badgeReserved;
@property(nonatomic) _Bool fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(nonatomic) long long textHorizontalPadding; // @synthesize textHorizontalPadding=_textHorizontalPadding;
@property(copy, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) AUBadgeLabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(nonatomic) __weak id <AUSegmentedControlItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)didClickItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end
