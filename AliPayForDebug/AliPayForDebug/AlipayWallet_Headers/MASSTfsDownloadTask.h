//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MASSStreamUnit.h"

@class ConnectTimer, DataResponseTimer, FlowStatisticInfo, MASSDataDownloadSaveStream, NSData, NSDictionary, NSError, NSMutableData, NSString;

@interface MASSTfsDownloadTask : MASSStreamUnit
{
    _Bool _backNeedCrypto;
    _Bool _pathReturnChunked;
    _Bool _fileReturnNeedContinue;
    _Bool _started;
    _Bool _httpRespParsered;
    _Bool _needCrypto;
    _Bool _has302;
    _Bool _chunked;
    _Bool _isHttp1;
    _Bool _fail;
    _Bool _needGraudal;
    _Bool _isPost;
    _Bool _rspGzip;
    _Bool _dnsResFromSys;
    _Bool _dnsFromCache;
    _Bool _emergency;
    _Bool _lowPriority;
    _Bool _safeCdnThisTime;
    _Bool _ignore30x;
    _Bool _netLevelGzip;
    _Bool _ipDirect;
    _Bool _usePreDns;
    _Bool _continusCDNDownload;
    _Bool _cDNDownloadContinus;
    _Bool _continusMd5NotSame;
    float _progress;
    float _lastLogProgress;
    NSString *_taskId;
    NSString *_requestUrl;
    NSString *_requestHost;
    long long _svrPort;
    NSString *_backRequestUrl;
    NSString *_backRequestHost;
    long long _backSvrPort;
    NSString *_fromModel;
    long long _returnType;
    NSString *_pathReturnPath;
    NSData *_tcpToSendData;
    long long _tcpSended;
    NSMutableData *_tcpRespData;
    long long _tcpRspContentCopied;
    long long _downloadFileWholeSize;
    NSMutableData *_downloadFileContent;
    NSMutableData *_errorRspContent;
    unsigned long long _errorRspCopied;
    MASSDataDownloadSaveStream *_fileStream;
    unsigned long long _fileDownloadedSize;
    NSString *_serverAddress;
    long long _timeoutCount;
    unsigned long long _httpRspContentLen;
    unsigned long long _httpRspContentStartIndex;
    unsigned long long _httpRspHeadCode;
    ConnectTimer *_connectTimer;
    DataResponseTimer *_rspTimer;
    long long _rcvFromBussinessTime;
    NSString *_bizType;
    NSString *_cdnVia;
    NSString *_cdnTrace;
    NSData *_httpHead;
    NSDictionary *_extHeaders;
    NSData *_postBody;
    NSString *_dnsIp;
    double _dnsCostMs;
    long long _startConcurrent;
    NSDictionary *_startBizStatistic;
    NSError *_error;
    NSError *_lastError;
    long long _safeCdnCount;
    NSString *_bizScopeId;
    NSString *_pageSession;
    double _taskStartTime;
    double _startConnectTime;
    double _tcpConnectedTime;
    double _sslSuccTime;
    double _firstDataTime;
    double _lastDataTime;
    double _taskEnqueueTime;
    FlowStatisticInfo *_flowStatis;
    NSString *_fileMd5;
    long long _progressCount;
}

+ (id)tfsDownloadTaskFromModel:(id)arg1 taskId:(id)arg2 requestUrl:(id)arg3 returnType:(long long)arg4 filePath:(id)arg5 fileReturnContinue:(_Bool)arg6 extHeaders:(id)arg7;
@property(nonatomic) float lastLogProgress; // @synthesize lastLogProgress=_lastLogProgress;
@property(nonatomic) long long progressCount; // @synthesize progressCount=_progressCount;
@property(nonatomic) _Bool continusMd5NotSame; // @synthesize continusMd5NotSame=_continusMd5NotSame;
@property(nonatomic) _Bool cDNDownloadContinus; // @synthesize cDNDownloadContinus=_cDNDownloadContinus;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(nonatomic) _Bool continusCDNDownload; // @synthesize continusCDNDownload=_continusCDNDownload;
@property(retain, nonatomic) FlowStatisticInfo *flowStatis; // @synthesize flowStatis=_flowStatis;
@property(nonatomic) _Bool usePreDns; // @synthesize usePreDns=_usePreDns;
@property(nonatomic) _Bool ipDirect; // @synthesize ipDirect=_ipDirect;
@property(nonatomic) double taskEnqueueTime; // @synthesize taskEnqueueTime=_taskEnqueueTime;
@property(nonatomic) double lastDataTime; // @synthesize lastDataTime=_lastDataTime;
@property(nonatomic) double firstDataTime; // @synthesize firstDataTime=_firstDataTime;
@property(nonatomic) double sslSuccTime; // @synthesize sslSuccTime=_sslSuccTime;
@property(nonatomic) double tcpConnectedTime; // @synthesize tcpConnectedTime=_tcpConnectedTime;
@property(nonatomic) double startConnectTime; // @synthesize startConnectTime=_startConnectTime;
@property(nonatomic) double taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(nonatomic) _Bool netLevelGzip; // @synthesize netLevelGzip=_netLevelGzip;
@property(nonatomic) _Bool ignore30x; // @synthesize ignore30x=_ignore30x;
@property(retain, nonatomic) NSString *pageSession; // @synthesize pageSession=_pageSession;
@property(retain, nonatomic) NSString *bizScopeId; // @synthesize bizScopeId=_bizScopeId;
@property(nonatomic) long long safeCdnCount; // @synthesize safeCdnCount=_safeCdnCount;
@property(nonatomic) _Bool safeCdnThisTime; // @synthesize safeCdnThisTime=_safeCdnThisTime;
@property(retain) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *startBizStatistic; // @synthesize startBizStatistic=_startBizStatistic;
@property(nonatomic) long long startConcurrent; // @synthesize startConcurrent=_startConcurrent;
@property(nonatomic) _Bool lowPriority; // @synthesize lowPriority=_lowPriority;
@property(nonatomic) _Bool emergency; // @synthesize emergency=_emergency;
@property(nonatomic) _Bool dnsFromCache; // @synthesize dnsFromCache=_dnsFromCache;
@property(nonatomic) _Bool dnsResFromSys; // @synthesize dnsResFromSys=_dnsResFromSys;
@property(nonatomic) double dnsCostMs; // @synthesize dnsCostMs=_dnsCostMs;
@property(retain, nonatomic) NSString *dnsIp; // @synthesize dnsIp=_dnsIp;
@property(nonatomic) _Bool rspGzip; // @synthesize rspGzip=_rspGzip;
@property(retain, nonatomic) NSData *postBody; // @synthesize postBody=_postBody;
@property(nonatomic) _Bool isPost; // @synthesize isPost=_isPost;
@property(nonatomic) _Bool needGraudal; // @synthesize needGraudal=_needGraudal;
@property(retain, nonatomic) NSDictionary *extHeaders; // @synthesize extHeaders=_extHeaders;
@property(retain, nonatomic) NSData *httpHead; // @synthesize httpHead=_httpHead;
@property(nonatomic) _Bool fail; // @synthesize fail=_fail;
@property(nonatomic) _Bool isHttp1; // @synthesize isHttp1=_isHttp1;
@property(retain, nonatomic) NSString *cdnTrace; // @synthesize cdnTrace=_cdnTrace;
@property(retain, nonatomic) NSString *cdnVia; // @synthesize cdnVia=_cdnVia;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool chunked; // @synthesize chunked=_chunked;
@property(nonatomic) _Bool has302; // @synthesize has302=_has302;
@property(nonatomic) long long rcvFromBussinessTime; // @synthesize rcvFromBussinessTime=_rcvFromBussinessTime;
@property(retain, nonatomic) DataResponseTimer *rspTimer; // @synthesize rspTimer=_rspTimer;
@property(retain, nonatomic) ConnectTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
@property(nonatomic) _Bool needCrypto; // @synthesize needCrypto=_needCrypto;
@property(nonatomic) unsigned long long httpRspHeadCode; // @synthesize httpRspHeadCode=_httpRspHeadCode;
@property(nonatomic) unsigned long long httpRspContentStartIndex; // @synthesize httpRspContentStartIndex=_httpRspContentStartIndex;
@property(nonatomic) unsigned long long httpRspContentLen; // @synthesize httpRspContentLen=_httpRspContentLen;
@property(nonatomic) _Bool httpRespParsered; // @synthesize httpRespParsered=_httpRespParsered;
@property(nonatomic) long long timeoutCount; // @synthesize timeoutCount=_timeoutCount;
@property(retain, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property _Bool started; // @synthesize started=_started;
@property(nonatomic) unsigned long long fileDownloadedSize; // @synthesize fileDownloadedSize=_fileDownloadedSize;
@property(retain, nonatomic) MASSDataDownloadSaveStream *fileStream; // @synthesize fileStream=_fileStream;
@property(nonatomic) unsigned long long errorRspCopied; // @synthesize errorRspCopied=_errorRspCopied;
@property(retain, nonatomic) NSMutableData *errorRspContent; // @synthesize errorRspContent=_errorRspContent;
@property(retain, nonatomic) NSMutableData *downloadFileContent; // @synthesize downloadFileContent=_downloadFileContent;
@property(nonatomic) long long downloadFileWholeSize; // @synthesize downloadFileWholeSize=_downloadFileWholeSize;
@property(nonatomic) long long tcpRspContentCopied; // @synthesize tcpRspContentCopied=_tcpRspContentCopied;
@property(retain, nonatomic) NSMutableData *tcpRespData; // @synthesize tcpRespData=_tcpRespData;
@property(nonatomic) long long tcpSended; // @synthesize tcpSended=_tcpSended;
@property(retain, nonatomic) NSData *tcpToSendData; // @synthesize tcpToSendData=_tcpToSendData;
@property(retain, nonatomic) NSString *pathReturnPath; // @synthesize pathReturnPath=_pathReturnPath;
@property(nonatomic) _Bool fileReturnNeedContinue; // @synthesize fileReturnNeedContinue=_fileReturnNeedContinue;
@property(nonatomic) _Bool pathReturnChunked; // @synthesize pathReturnChunked=_pathReturnChunked;
@property(nonatomic) long long returnType; // @synthesize returnType=_returnType;
@property(retain, nonatomic) NSString *fromModel; // @synthesize fromModel=_fromModel;
@property(nonatomic) _Bool backNeedCrypto; // @synthesize backNeedCrypto=_backNeedCrypto;
@property(nonatomic) long long backSvrPort; // @synthesize backSvrPort=_backSvrPort;
@property(retain, nonatomic) NSString *backRequestHost; // @synthesize backRequestHost=_backRequestHost;
@property(retain, nonatomic) NSString *backRequestUrl; // @synthesize backRequestUrl=_backRequestUrl;
@property(nonatomic) long long svrPort; // @synthesize svrPort=_svrPort;
@property(retain, nonatomic) NSString *requestHost; // @synthesize requestHost=_requestHost;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)toString;
- (id)getTaskLogInfo;
- (void)cancelByOutsize;
- (long long)getDownloadedSize;
- (float)getDownloadProgress;
- (void)clearForNewRequest;
- (void)noticeFileDownloadSucc;
- (void)noticeFileDownloadPercentage;
- (void)SaveDataToFileError;
- (void)SaveDataToFileComplated;
- (void)tryToParserHeadInfo;
- (void)pathReturnByteRcv:(char *)arg1 length:(long long)arg2;
- (void)pathReturnDataComming;
- (_Bool)dealChunkedRspBody;
- (_Bool)dealTcpRspData;
- (void)dealStatusError;
- (void)dataReturnDataComming;
- (void)fillHttpRequestData;
- (void)onDataComming;
- (void)onCloseHappens;
- (void)onDataCanSending;
- (void)onConnectComplate;
- (void)startRequest;
- (id)init;
- (void)dealloc;
- (void)setContinusContext;

@end

