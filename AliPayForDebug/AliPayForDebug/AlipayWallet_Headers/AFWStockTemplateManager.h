//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFWStockContext;

@interface AFWStockTemplateManager : NSObject
{
    AFWStockContext *_landscapeContext;
}

+ (id)shareInstance;
@property(retain, nonatomic) AFWStockContext *landscapeContext; // @synthesize landscapeContext=_landscapeContext;
- (void).cxx_destruct;
- (id)templatePathForScene:(long long)arg1;
- (id)currentBundle;
- (void)setupTransformer;
- (long long)_sceneFromFromScene:(id)arg1;
- (long long)sceneEnumFromStockInfo:(id)arg1;
- (id)sceneFromStockInfo:(id)arg1;
- (id)init;

@end
