//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface DFSplashScreen : UIView
{
    _Bool _newLayout;
    CDUnknownBlockType _block;
    UIImageView *_imageView;
}

+ (int)appTimeWeight:(id)arg1;
@property(nonatomic) _Bool newLayout; // @synthesize newLayout=_newLayout;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)disappearView:(id)arg1;
- (void)disappearViewOnPre;
- (void)layoutSubviews;
- (id)loadingIndicatorView;
- (void)initSubviews:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

