//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface LSTemplateModel : FMLBaseModel
{
    NSString *_templateName;
    NSString *_displayName;
    NSString *_type;
    NSArray *_cards;
    NSDictionary *_ext;
}

@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void).cxx_destruct;
- (id)description;

@end

