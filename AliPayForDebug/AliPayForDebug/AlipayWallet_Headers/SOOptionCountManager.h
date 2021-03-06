//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage;
@protocol SOOptionCountDAO;

@interface SOOptionCountManager : NSObject
{
    APCustomStorage *_storage;
    id <SOOptionCountDAO> _sooptionCountDAO;
}

+ (id)sharedOptionCountManager;
@property(retain, nonatomic) id <SOOptionCountDAO> sooptionCountDAO; // @synthesize sooptionCountDAO=_sooptionCountDAO;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)daoSelectOptionCountList:(id)arg1;
- (id)daoUpdateOptionCountList:(id)arg1;
- (id)daoSelectCardOptionCountList:(id)arg1;
- (id)daoDeleteOptionCountList:(id)arg1;
- (id)daoInsertOptionCountList:(id)arg1;
- (_Bool)insertOptionCountList:(id)arg1 notification:(_Bool)arg2 biz:(id)arg3 userInfo:(id)arg4;
- (_Bool)insertOptionCountList:(id)arg1 notification:(_Bool)arg2 biz:(id)arg3;
- (_Bool)insertOptionCountList:(id)arg1 notification:(_Bool)arg2;
- (_Bool)updateOptionCountList:(id)arg1 notification:(_Bool)arg2 biz:(id)arg3 userInfo:(id)arg4;
- (_Bool)updateOptionCountList:(id)arg1 notification:(_Bool)arg2 biz:(id)arg3;
- (_Bool)updateOptionCountList:(id)arg1 notification:(_Bool)arg2;
- (id)updateOptionCountWithOption:(id)arg1 isAdd:(_Bool)arg2 opDate:(id)arg3 userInfo:(id)arg4 willNotifyCallback:(CDUnknownBlockType)arg5;
- (id)updateOptionCountWithOption:(id)arg1 isAdd:(_Bool)arg2 opDate:(id)arg3 userInfo:(id)arg4;
- (id)updateOptionCountWithOption:(id)arg1 isAdd:(_Bool)arg2 biz:(id)arg3 userInfo:(id)arg4;
- (id)updateOptionCountWithOption:(id)arg1 isAdd:(_Bool)arg2 biz:(id)arg3;
- (id)updateOptionCountWithOption:(id)arg1 isAdd:(_Bool)arg2;
- (id)init;

@end

