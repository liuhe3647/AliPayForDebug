//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, gotoneAssistSettingResult;

@interface MBAssistSettingPageDataManager : NSObject
{
    NSString *_assistId;
    gotoneAssistSettingResult *_pageInfo;
}

@property(readonly, nonatomic) gotoneAssistSettingResult *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(readonly, nonatomic) NSString *assistId; // @synthesize assistId=_assistId;
- (void).cxx_destruct;
- (void)updateReminderType:(id)arg1;
- (id)loadDataFromLocal;
- (void)rpcReqFinished:(_Bool)arg1 info:(id)arg2 complate:(CDUnknownBlockType)arg3;
- (void)getAssistSettingInfo:(CDUnknownBlockType)arg1;
- (id)initWithAsssistId:(id)arg1;

@end

