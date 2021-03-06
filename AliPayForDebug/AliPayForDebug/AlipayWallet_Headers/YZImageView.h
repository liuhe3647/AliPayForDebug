//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSLock, UIImage, YZAnimationImage;

@interface YZImageView : UIImageView
{
    _Bool _isDisplayedInMainScreen;
    _Bool _needDecodeInBackground;
    _Bool _isGifPlaying;
    _Bool _shouldPlay;
    YZAnimationImage *_animatedImage;
    CDUnknownBlockType _loopCompletionBlock;
    UIImage *_currentFrame;
    unsigned long long _currentFrameIndex;
    double _repeatTimeDelay;
    unsigned long long _loopCountdown;
    double _accumulator;
    double _repeatEnd;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) double repeatEnd; // @synthesize repeatEnd=_repeatEnd;
@property(nonatomic) double accumulator; // @synthesize accumulator=_accumulator;
@property(nonatomic) unsigned long long loopCountdown; // @synthesize loopCountdown=_loopCountdown;
@property(nonatomic) _Bool shouldPlay; // @synthesize shouldPlay=_shouldPlay;
@property(nonatomic) _Bool isGifPlaying; // @synthesize isGifPlaying=_isGifPlaying;
@property(nonatomic) _Bool needDecodeInBackground; // @synthesize needDecodeInBackground=_needDecodeInBackground;
@property(nonatomic) _Bool isDisplayedInMainScreen; // @synthesize isDisplayedInMainScreen=_isDisplayedInMainScreen;
@property(nonatomic) double repeatTimeDelay; // @synthesize repeatTimeDelay=_repeatTimeDelay;
@property(nonatomic) unsigned long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(retain, nonatomic) UIImage *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(copy, nonatomic) CDUnknownBlockType loopCompletionBlock; // @synthesize loopCompletionBlock=_loopCompletionBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changeCurrentFrame:(id)arg1;
- (void)updateDisplayedInScreen;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setPresentIndex:(unsigned long long)arg1;
@property(retain, nonatomic) YZAnimationImage *animatedImage; // @synthesize animatedImage=_animatedImage;

@end

