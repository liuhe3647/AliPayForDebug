//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;
@protocol SZTextViewDelegate;

@interface SZTextView : UITextView
{
    NSString *_placeholder;
    double _fadeTime;
    id <SZTextViewDelegate> _szDelegate;
    UITextView *__placeholderTextView;
}

@property(retain, nonatomic) UITextView *_placeholderTextView; // @synthesize _placeholderTextView=__placeholderTextView;
@property(nonatomic) __weak id <SZTextViewDelegate> szDelegate; // @synthesize szDelegate=_szDelegate;
@property(nonatomic) double fadeTime; // @synthesize fadeTime=_fadeTime;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPlaceholderVisibleForText:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)textDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *placeholderTextColor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resizePlaceholderFrame;
- (void)layoutSubviews;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)preparePlaceholder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)paste:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

