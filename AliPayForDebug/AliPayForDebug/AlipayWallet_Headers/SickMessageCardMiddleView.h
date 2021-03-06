//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UILabel, UITapGestureRecognizer;
@protocol SickMessageCardMiddleViewDelegate;

@interface SickMessageCardMiddleView : UIView
{
    id <SickMessageCardMiddleViewDelegate> _delegate;
    NSDictionary *_dataResDict;
    UILabel *_contentLab;
    UILabel *_countLab;
    UILabel *_descAttriLab;
    UITapGestureRecognizer *_tabGesture;
}

+ (struct CGSize)midViewItemSizeWithData:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tabGesture; // @synthesize tabGesture=_tabGesture;
@property(retain, nonatomic) UILabel *descAttriLab; // @synthesize descAttriLab=_descAttriLab;
@property(retain, nonatomic) UILabel *countLab; // @synthesize countLab=_countLab;
@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) NSDictionary *dataResDict; // @synthesize dataResDict=_dataResDict;
@property(nonatomic) __weak id <SickMessageCardMiddleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layout;
- (void)refreshWithDataSource:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)addTabGesture;
- (id)initWithFrame:(struct CGRect)arg1;

@end

