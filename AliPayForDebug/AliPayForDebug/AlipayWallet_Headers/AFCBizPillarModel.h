//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFCBizPointModel.h"

@class NSString;

@interface AFCBizPillarModel : AFCBizPointModel
{
    _Bool _isSolid;
    NSString *_pillarColor;
    CDStruct_dd4ade68 _open;
    CDStruct_dd4ade68 _high;
    CDStruct_dd4ade68 _low;
    CDStruct_dd4ade68 _close;
}

@property(nonatomic) _Bool isSolid; // @synthesize isSolid=_isSolid;
@property(retain, nonatomic) NSString *pillarColor; // @synthesize pillarColor=_pillarColor;
@property(nonatomic) CDStruct_dd4ade68 close; // @synthesize close=_close;
@property(nonatomic) CDStruct_dd4ade68 low; // @synthesize low=_low;
@property(nonatomic) CDStruct_dd4ade68 high; // @synthesize high=_high;
@property(nonatomic) CDStruct_dd4ade68 open; // @synthesize open=_open;
- (void).cxx_destruct;

@end

