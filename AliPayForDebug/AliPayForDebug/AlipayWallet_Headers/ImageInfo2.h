//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ImageInfo2 : NSObject
{
    _Bool _animated;
    int _width;
    int _height;
    unsigned long long _type;
    unsigned long long _cropMode;
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) unsigned long long cropMode; // @synthesize cropMode=_cropMode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
- (void)decode:(id)arg1;
- (id)encode;
- (id)init;

@end

