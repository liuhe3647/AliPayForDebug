//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMediaDetectFilterItem : NSObject
{
    float _minConfidence;
    float _maxConfidence;
    struct CGRect _boundingBox;
}

@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) float maxConfidence; // @synthesize maxConfidence=_maxConfidence;
@property(nonatomic) float minConfidence; // @synthesize minConfidence=_minConfidence;

@end

