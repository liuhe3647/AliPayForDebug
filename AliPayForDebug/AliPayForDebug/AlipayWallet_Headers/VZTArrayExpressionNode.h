//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZTExpressionNode.h"

@class NSArray;

@interface VZTArrayExpressionNode : VZTExpressionNode
{
    NSArray *_expressionList;
}

@property(retain, nonatomic) NSArray *expressionList; // @synthesize expressionList=_expressionList;
- (void).cxx_destruct;
- (id)compute:(id)arg1;
- (id)initWithExpressionList:(id)arg1;

@end

