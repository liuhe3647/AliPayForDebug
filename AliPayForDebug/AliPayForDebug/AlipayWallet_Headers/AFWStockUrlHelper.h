//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFWStockUrlHelper : NSObject
{
    NSString *_scheme;
    NSString *_host;
    NSString *_path;
    NSDictionary *_params;
    NSString *_absoluteString;
}

+ (id)URLWithString:(id)arg1;
@property(retain, nonatomic) NSString *absoluteString; // @synthesize absoluteString=_absoluteString;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;

@end
