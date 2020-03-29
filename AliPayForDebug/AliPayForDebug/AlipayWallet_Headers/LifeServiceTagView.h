//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class LifeServiceTagModel, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer;

@interface LifeServiceTagView : UIControl <UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UITapGestureRecognizer *_tapGesture;
    LifeServiceTagModel *_tagModel;
    UIImage *_defaultImage;
}

@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) LifeServiceTagModel *tagModel; // @synthesize tagModel=_tagModel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tagClicked;
- (void)setService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
