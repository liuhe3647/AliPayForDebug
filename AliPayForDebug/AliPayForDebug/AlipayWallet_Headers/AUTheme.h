//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AUTheme : NSObject
{
    NSMutableDictionary *_dictionary_au;
    NSMutableDictionary *_customThemeDic;
}

@property(retain, nonatomic) NSMutableDictionary *customThemeDic; // @synthesize customThemeDic=_customThemeDic;
@property(copy, nonatomic) NSMutableDictionary *dictionary_au; // @synthesize dictionary_au=_dictionary_au;
- (void).cxx_destruct;
- (id)imageNameForKey:(id)arg1;
- (double)cornerRadiusForKey:(id)arg1;
- (double)spaceForKey:(id)arg1;
- (struct CGSize)iconSizeForKey:(id)arg1;
- (id)fontForKey:(id)arg1;
- (id)colorForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
