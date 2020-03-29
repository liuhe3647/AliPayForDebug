//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AUButton, DFPrivacyAuthContentView, NSNumber, NSString, TTTAttributedLabel, UILabel, UIScrollView, UIWindow;

@interface DFPrivacyAuthDialog : UIView <TTTAttributedLabelDelegate>
{
    NSString *_title;
    NSString *_message;
    NSString *_tail;
    NSNumber *_customWindowLevel;
    UIWindow *_dialogWindow;
    UILabel *_titleLabel;
    DFPrivacyAuthContentView *_contentView;
    UIScrollView *_scrollView;
    TTTAttributedLabel *_tailLabel;
    AUButton *_cancelBtn;
    AUButton *_actionBtn;
}

@property(retain, nonatomic) AUButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) AUButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) TTTAttributedLabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) DFPrivacyAuthContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIWindow *dialogWindow; // @synthesize dialogWindow=_dialogWindow;
@property(retain, nonatomic) NSNumber *customWindowLevel; // @synthesize customWindowLevel=_customWindowLevel;
@property(retain, nonatomic) NSString *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)addLinkToURL;
- (void)onButtonClicked:(id)arg1;
- (id)addButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)addActionButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)addCancelButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)createStyle;
- (void)dismiss;
- (void)show;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
