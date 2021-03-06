//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnnotationView.h"

@class NSArray, WXMapCalloutView;

@interface APMapAnnotationView : MAAnnotationView
{
    NSArray *_hiddenList;
    WXMapCalloutView *_calloutView;
    double _labelWidth;
}

@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(retain, nonatomic) WXMapCalloutView *calloutView; // @synthesize calloutView=_calloutView;
@property(retain, nonatomic) NSArray *hiddenList; // @synthesize hiddenList=_hiddenList;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)calloutViewNaviClicked:(id)arg1;
- (void)calloutViewClicked:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

