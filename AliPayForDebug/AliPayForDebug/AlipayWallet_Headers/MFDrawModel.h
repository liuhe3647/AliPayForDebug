//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MFDrawModel : NSObject
{
    NSMutableDictionary *_maps;
}

@property(retain, nonatomic) NSMutableDictionary *maps; // @synthesize maps=_maps;
- (void).cxx_destruct;
- (void)sizeY:(struct CGSize)arg1 key:(id)arg2;
- (void)sizeN:(struct CGSize)arg1 key:(id)arg2;
- (void)attachmentsImage:(struct CGImage *)arg1 key:(id)arg2;
- (void)setCoreTextFrame:(struct __CTFrame *)arg1 key:(id)arg2;
- (void)setTotalLineNumbers:(long long)arg1 key:(id)arg2;
- (void)setAttributedStr:(id)arg1 key:(id)arg2;
- (void)setAttachments:(id)arg1 key:(id)arg2;
- (void)setAutoLinks:(id)arg1 key:(id)arg2;
- (void)setLocationLinks:(id)arg1 key:(id)arg2;
- (void)setLocationFonts:(id)arg1 key:(id)arg2;
- (void)setElementData:(id)arg1 elementKey:(id)arg2;
- (id)getElements:(id)arg1;
- (id)sizeY:(id)arg1;
- (id)sizeN:(id)arg1;
- (id)attachmentsImage:(id)arg1;
- (id)coreTextFrame:(id)arg1;
- (id)totalLineNumbers:(id)arg1;
- (id)attributedStr:(id)arg1;
- (id)attachments:(id)arg1;
- (id)autoLinks:(id)arg1;
- (id)locationLinks:(id)arg1;
- (id)locationFonts:(id)arg1;
- (id)getElement:(id)arg1 withKey:(id)arg2;
- (id)init;

@end

