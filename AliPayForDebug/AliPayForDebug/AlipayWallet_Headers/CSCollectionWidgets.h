//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCollectionWidgets.h"

#import "CCollectionWidgetsDelegate-Protocol.h"
#import "CKWidgetProtocol-Protocol.h"

@class NSString;

@interface CSCollectionWidgets : CCollectionWidgets <CCollectionWidgetsDelegate, CKWidgetProtocol>
{
}

+ (struct CGSize)sizeOfView:(id)arg1 css:(id)arg2 attribute:(id)arg3 superFrame:(struct CGRect)arg4;
+ (id)createView:(id)arg1 reuse:(id)arg2 size:(struct CGSize)arg3;
- (void)respondCollectClick:(id)arg1 selectIndex:(long long)arg2 widgetIndexPath:(id)arg3;
- (_Bool)canRespondClick:(id)arg1 widgetType:(id)arg2;
- (void)updateComponentData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

