//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

#import "MQPWebServiceDelegate-Protocol.h"

@class MQPWebService, NSString;

@interface ImmPayPluginOpenweb : ImmPayEventPlugin <MQPWebServiceDelegate>
{
    MQPWebService *_webservice;
}

@property(retain, nonatomic) MQPWebService *webservice; // @synthesize webservice=_webservice;
- (void).cxx_destruct;
- (void)webServiceAction:(id)arg1;
- (void)webServiceClose:(id)arg1;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
