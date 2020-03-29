//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, NSURLProtocol, NSURLRequest, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics, PSDProxyEvent;

@protocol PSDWebViewURLProtocolDelegate <NSObject>
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 didCancel:(NSError *)arg2;
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 didFailWithError:(NSError *)arg2;
- (void)PSDWebViewURLProtocolDidFinishLoading:(NSURLProtocol *)arg1;
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 didLoadData:(NSData *)arg2;
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 didReceiveResponse:(NSURLResponse *)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 wasRedirectedToRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 startLoading:(NSURLRequest *)arg2;
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 willStartLoading:(NSURLRequest *)arg2 channelId:(NSString *)arg3;

@optional
- (void)prepareForDiagnose:(PSDProxyEvent *)arg1;
- (void)setTraceId:(NSString *)arg1;
- (NSString *)traceId;
- (void)PSDWebViewURLProtocol:(NSURLProtocol *)arg1 task:(NSURLSessionTask *)arg2 didFinishCollectingMetrics:(NSURLSessionTaskMetrics *)arg3;
@end
