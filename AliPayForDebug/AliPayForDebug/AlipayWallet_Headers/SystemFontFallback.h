//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SystemFontFallback : NSObject
{
    NSMutableArray *_fallbackList;
    NSMutableArray *_fontCache;
    NSString *app_id_;
    NSMutableDictionary *custom_font_map_;
}

- (void).cxx_destruct;
- (_Bool)fontCover:(struct __CTFont *)arg1 Unichar:(unsigned short)arg2;
- (id)getCustomFontPath:(id)arg1;
- (id)loadFont:(const char *)arg1;
- (void)clear;
- (struct __CTFont *)getFontNameForUnichar:(unsigned short)arg1 Size:(float)arg2 Bold:(_Bool)arg3 Italic:(_Bool)arg4 Matrix:(struct CGAffineTransform *)arg5 Font:(struct __CTFont *)arg6;
- (id)initWithAppId:(const char *)arg1;

@end

