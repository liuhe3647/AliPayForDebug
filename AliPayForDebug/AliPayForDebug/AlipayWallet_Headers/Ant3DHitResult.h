//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Ant3DAnchor, NSString;

@interface Ant3DHitResult : NSObject
{
    float _transX;
    float _transY;
    float _transZ;
    float _cameraProjX;
    float _cameraProjY;
    float _cameraProjZ;
    NSString *_identifier;
    unsigned long long _resultType;
    Ant3DAnchor *_anchor;
    union _GLKMatrix4 _transform;
}

@property(nonatomic) union _GLKMatrix4 transform; // @synthesize transform=_transform;
@property(retain, nonatomic) Ant3DAnchor *anchor; // @synthesize anchor=_anchor;
@property(nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) float cameraProjZ; // @synthesize cameraProjZ=_cameraProjZ;
@property(nonatomic) float cameraProjY; // @synthesize cameraProjY=_cameraProjY;
@property(nonatomic) float cameraProjX; // @synthesize cameraProjX=_cameraProjX;
@property(nonatomic) float transZ; // @synthesize transZ=_transZ;
@property(nonatomic) float transY; // @synthesize transY=_transY;
@property(nonatomic) float transX; // @synthesize transX=_transX;
- (void).cxx_destruct;

@end

