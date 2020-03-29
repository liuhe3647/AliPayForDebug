//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface AFWSDInfoAttribView : UIView
{
    _Bool _isMiniView;
    _Bool _isCoustomSize;
    NSString *_name;
    NSString *_value;
    long long _attributeLayout;
    UILabel *_nameLabel;
    UILabel *_valueLabel;
    double _attributeFont;
}

@property(nonatomic) _Bool isCoustomSize; // @synthesize isCoustomSize=_isCoustomSize;
@property(nonatomic) double attributeFont; // @synthesize attributeFont=_attributeFont;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) long long attributeLayout; // @synthesize attributeLayout=_attributeLayout;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)updatePosition;
- (void)customValueColor:(id)arg1;
- (void)adjustLabel:(id)arg1 enableKern:(_Bool)arg2;
- (void)updateView;
- (void)loadView;
- (id)initWithFontSize:(double)arg1;
- (id)initWithIsMiniView:(_Bool)arg1;
- (id)init;

@end
