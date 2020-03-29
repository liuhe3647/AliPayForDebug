//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSCardDataProcessor.h"

#import "LSMarketTrendCardDataSourceCombiner-Protocol.h"

@class LSMarketTrendCardDataSource, NSString;

@interface LSMarketTrendCardDataProcessor : LSCardDataProcessor <LSMarketTrendCardDataSourceCombiner>
{
    LSMarketTrendCardDataSource *_processorDataSource;
}

@property(retain, nonatomic) LSMarketTrendCardDataSource *processorDataSource; // @synthesize processorDataSource=_processorDataSource;
- (void).cxx_destruct;
- (void)getMarketTrendCombineData:(id)arg1;
- (id)handleCardData:(id)arg1;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
