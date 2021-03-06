//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TEXInput-Protocol.h"

@class APMTextureView, NSString, TEXContext;

@interface TEXView : UIView <TEXInput>
{
    _Bool _inputTextureOpenGLCoordinatesSystem;
    CDUnknownBlockType _completeHandler;
    APMTextureView *_internalView;
    TEXContext *_context;
}

@property(retain, nonatomic) TEXContext *context; // @synthesize context=_context;
@property(retain, nonatomic) APMTextureView *internalView; // @synthesize internalView=_internalView;
@property(nonatomic, getter=isInputTextureOpenGLCoordinatesSystem) _Bool inputTextureOpenGLCoordinatesSystem; // @synthesize inputTextureOpenGLCoordinatesSystem=_inputTextureOpenGLCoordinatesSystem;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
- (void).cxx_destruct;
- (void)receiveFramebuffer:(id)arg1 fromOutput:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

