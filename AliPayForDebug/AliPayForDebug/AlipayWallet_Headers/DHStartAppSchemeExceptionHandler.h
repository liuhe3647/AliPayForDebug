//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APStartAppSchemeExceptionHandler.h"

@interface DHStartAppSchemeExceptionHandler : APStartAppSchemeExceptionHandler
{
}

- (void)reportAppStartUpFailLog:(id)arg1 reason:(id)arg2 sourceId:(id)arg3;
- (_Bool)handleZMDylibFailedException:(id)arg1 params:(id)arg2;
- (_Bool)handleDylibFailedException:(id)arg1 params:(id)arg2;
- (void)canHandleStartApplicationException:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4 sceneParams:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
