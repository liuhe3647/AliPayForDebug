//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class AUParagraphInputBox, NSArray, NSString, WPBinarySelectionView;

@interface WPSurveyInputView : UIView <UITextViewDelegate>
{
    long long _typeToShowInputBox;
    long long _defaultSelection;
    NSString *_defaultContent;
    long long _type;
    NSString *_title;
    NSArray *_options;
    NSString *_placeHolder;
    AUParagraphInputBox *_inputBox;
    CDUnknownBlockType _frameChangedCallBack;
    CDUnknownBlockType _editingCallBack;
    WPBinarySelectionView *_selectionView;
    struct CGSize _normalSize;
}

@property(retain, nonatomic) WPBinarySelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(copy, nonatomic) CDUnknownBlockType editingCallBack; // @synthesize editingCallBack=_editingCallBack;
@property(copy, nonatomic) CDUnknownBlockType frameChangedCallBack; // @synthesize frameChangedCallBack=_frameChangedCallBack;
@property(nonatomic) struct CGSize normalSize; // @synthesize normalSize=_normalSize;
@property(retain, nonatomic) AUParagraphInputBox *inputBox; // @synthesize inputBox=_inputBox;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *defaultContent; // @synthesize defaultContent=_defaultContent;
@property(nonatomic) long long defaultSelection; // @synthesize defaultSelection=_defaultSelection;
@property(nonatomic) long long typeToShowInputBox; // @synthesize typeToShowInputBox=_typeToShowInputBox;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (long long)getSelection;
- (id)getInputContent;
- (void)animateView:(id)arg1 show:(_Bool)arg2;
- (void)updateInputBoxHidden:(_Bool)arg1 displayImmediately:(_Bool)arg2;
- (void)setTextViewEditingCallback:(CDUnknownBlockType)arg1;
- (void)setViewFrameChangedCallBack:(CDUnknownBlockType)arg1;
- (void)layoutView;
- (id)initWithType:(long long)arg1 title:(id)arg2 selectionOptions:(id)arg3 constrainedWidth:(long long)arg4 placeHolder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
