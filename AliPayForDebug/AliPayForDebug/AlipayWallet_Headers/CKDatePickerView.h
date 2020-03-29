//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, UIDatePicker, UIToolbar;
@protocol CKDatePickerViewDelegate;

@interface CKDatePickerView : UIView
{
    unsigned long long _datePickerMode;
    NSDate *_value;
    NSDate *_maxDate;
    NSDate *_minDate;
    id <CKDatePickerViewDelegate> _delegate;
    UIDatePicker *_picker;
    UIToolbar *_titleBar;
}

@property(retain, nonatomic) UIToolbar *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UIDatePicker *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak id <CKDatePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)buildPickerView;
- (void)buildTitleBar;
- (void)buildPicker;
- (id)initWithFrame:(struct CGRect)arg1;

@end
