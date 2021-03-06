//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CpmDataListModel, MtopExtRequest, MunionExtModel, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MunionMtopRequest : NSObject
{
    MtopExtRequest *_request;
    CDUnknownBlockType _requestStartedBlock;
    CDUnknownBlockType _requestSuccessedBlock;
    CDUnknownBlockType _requestFailedBlock;
    long long _requestCnt;
    NSDictionary *_userDic;
    MunionExtModel *_bannerModel;
    NSMutableDictionary *_responseData;
    CpmDataListModel *_cpmDataModel;
    NSString *_nick;
    NSMutableArray *_imageDataArr;
    NSMutableArray *_imageRequestArr;
    NSMutableArray *_imageRequestArrForFlowLimit;
    long long _imageSuccessCnt;
    long long _imageCutType;
    NSString *_serviceName;
    struct CGSize _bannerSize;
}

+ (id)mtopApiVersionWithType:(int)arg1;
+ (id)mtopApiWithType:(int)arg1;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) long long imageCutType; // @synthesize imageCutType=_imageCutType;
@property(nonatomic) struct CGSize bannerSize; // @synthesize bannerSize=_bannerSize;
@property(nonatomic) long long imageSuccessCnt; // @synthesize imageSuccessCnt=_imageSuccessCnt;
@property(retain, nonatomic) NSMutableArray *imageRequestArrForFlowLimit; // @synthesize imageRequestArrForFlowLimit=_imageRequestArrForFlowLimit;
@property(retain, nonatomic) NSMutableArray *imageRequestArr; // @synthesize imageRequestArr=_imageRequestArr;
@property(retain, nonatomic) NSMutableArray *imageDataArr; // @synthesize imageDataArr=_imageDataArr;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) CpmDataListModel *cpmDataModel; // @synthesize cpmDataModel=_cpmDataModel;
@property(retain, nonatomic) NSMutableDictionary *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) MunionExtModel *bannerModel; // @synthesize bannerModel=_bannerModel;
@property(retain, nonatomic) NSDictionary *userDic; // @synthesize userDic=_userDic;
@property(nonatomic) long long requestCnt; // @synthesize requestCnt=_requestCnt;
@property(copy, nonatomic) CDUnknownBlockType requestFailedBlock; // @synthesize requestFailedBlock=_requestFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType requestSuccessedBlock; // @synthesize requestSuccessedBlock=_requestSuccessedBlock;
@property(copy, nonatomic) CDUnknownBlockType requestStartedBlock; // @synthesize requestStartedBlock=_requestStartedBlock;
@property(retain, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)checkIfNeedToRecordFlowLimitHandleSuccessWithAdData:(id)arg1;
- (void)addImageRequest:(id)arg1;
- (void)cancleImageRequest;
- (void)imageDownLoadError:(id)arg1 imageDataModel:(id)arg2;
- (void)processSingleImageDownloadSuccess:(id)arg1;
- (id)dataModelMapToDic;
- (id)resolveAdData;
- (void)callbackAfterAllImageRequestsSuccess;
- (void)downloadAllImages;
- (void)preprocessBeforeDownloadImages;
- (id)imageResolve:(id)arg1 index:(long long)arg2;
- (void)resolveMtopResposeDataToModel:(id)arg1 index:(long long)arg2;
- (void)downloadImagesForCPM;
- (void)downloadImagesForFlowLimitConfiguration:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)resolveBannerDic;
- (id)dataModelMapToDicForFlowLimit;
- (_Bool)handleDefaultDataForFlowLimit:(id)arg1;
- (_Bool)isFlowLimitError:(id)arg1;
- (_Bool)networkError:(id)arg1;
- (void)retryAfterFail;
- (void)setupRequestParm;
- (void)sendCpmRequest:(id)arg1 bannerDic:(id)arg2 serviceName:(id)arg3 startBlock:(CDUnknownBlockType)arg4 successedBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;
- (void)clearDelegatesAndCancel;
- (void)initProperty;
- (id)init;

@end

