//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CoreInterface : NSObject
{
    struct FalconImgBaseAlgInterface *core;
}

- (char *)getGrayData:(char *)arg1 width:(int)arg2 height:(int)arg3;
- (_Bool)analyzeImage:(id)arg1 withRect:(struct CGRect)arg2;
- (struct CGContext *)newBitmapContextFromImage:(struct CGImage *)arg1 WithBitmapInfo:(unsigned int)arg2;
- (char *)convertImageToData:(id)arg1;
- (id)init;

@end

