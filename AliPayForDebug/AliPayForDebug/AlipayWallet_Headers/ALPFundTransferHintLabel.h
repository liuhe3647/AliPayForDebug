//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIFont, UILabel;

@interface ALPFundTransferHintLabel : UIControl
{
    UILabel *_label;
    NSString *_textOne;
    NSString *_textTwo;
    NSString *_textThree;
    UIFont *_textFont;
}

@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clearAll;
- (void)updateTextOne:(id)arg1 texttwo:(id)arg2 textThree:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
