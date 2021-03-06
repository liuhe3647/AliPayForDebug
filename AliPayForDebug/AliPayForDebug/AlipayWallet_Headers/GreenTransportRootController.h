//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APSKShareServiceDelegate-Protocol.h"
#import "GreenWalletViewDelegate-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"

@class ACCAMapButtonData, ACCAMapPollingManager, ACCAlgoRecommendCardInfo, ACCElderData, ACCGreenWidgetResponse, ACCImaspData, ACCNewUserGuideView, ACCOperateWidgetDetail, ACCOperateWidgetResponse, ACCPollingManager, ACCPredictedCardInfo, ACCVirtualCardInfo, ACCVirtualCardQueryCardListResponse, ACCWalletGroupedCardModel, ACCWindowTipView, AUActionSheet, AUActionSheetItem, AUBarButtonItem, AUPopBar, AUPopTipView, CDPSpaceInfo, GreenTransAnimationView, GreenWalletContentView, GreenWalletTipView, GreenWalletView, NSArray, NSMutableArray, NSString, XMediaCoreBizConfig, XMediaCoreBizManager;

@interface GreenTransportRootController : DTViewController <GreenWalletViewDelegate, PromotionCenterDelegate, APSKShareServiceDelegate>
{
    _Bool _canLockScreen;
    _Bool _needRecommend;
    _Bool _fromCache;
    _Bool _killSelf;
    _Bool _cardDetailRPCSuccessBack;
    _Bool _cardListRPCSuccessBack;
    _Bool _cardDetailRPCBack;
    _Bool _cardListRPCBack;
    _Bool _locationRPCBack;
    _Bool _showUserGuideView;
    _Bool _defaultUserGuideView;
    _Bool _verified;
    _Bool _isInCurrentPage;
    _Bool _showAMap;
    _Bool _amapRPCBack;
    _Bool _cannotShowCdp;
    _Bool _hasClickRedDot;
    _Bool _hasShowCardsGuideAnimation;
    _Bool _noNeedRefreshCodeWhenDidAppear;
    _Bool _fromSettingOpenOrCloseService;
    _Bool _showListCache;
    _Bool _canShowShortcutPopTip;
    _Bool _hideShortcutPopTipForFirstTime;
    _Bool _allowCardListCache;
    _Bool _downgradeLottie;
    _Bool _disableLottieAnimation;
    _Bool _hasShownLottie;
    _Bool _greenWidgetIsBack;
    _Bool _closeYW;
    _Bool _hasStartedYW;
    _Bool _hasShowResult;
    _Bool _canShowCardList;
    _Bool _needShowCardList;
    _Bool _isShowingWelcomeAnimation;
    int _pageNo;
    int _displayCount;
    NSMutableArray *_rpcArr;
    NSString *_cardType;
    NSString *_cardNo;
    NSString *_source;
    NSString *_insPassBack;
    NSString *_extInfo;
    NSArray *_menuArray;
    ACCVirtualCardInfo *_cardInfo;
    ACCPollingManager *_pollingManager;
    ACCImaspData *_imaspData;
    NSString *_adCode;
    NSString *_cityName;
    NSString *_districtCode;
    NSString *_longitude;
    NSString *_latitude;
    GreenWalletContentView *_contentView;
    GreenWalletTipView *_greenTipView;
    ACCPredictedCardInfo *_predictedCardInfo;
    ACCNewUserGuideView *_userGuildView;
    GreenWalletView *_greenWalletView;
    ACCVirtualCardInfo *_displayCardInfo;
    ACCAMapPollingManager *_amapPollingManager;
    ACCAMapButtonData *_amapButtonData;
    AUPopBar *_shortcutPopBar;
    AUActionSheetItem *_shortcutItemView;
    AUBarButtonItem *_moreItemView;
    AUActionSheetItem *_settingItemView;
    ACCWalletGroupedCardModel *_cardListManagerModel;
    ACCAlgoRecommendCardInfo *_algoRecommendCardInfo;
    ACCAlgoRecommendCardInfo *_clientLbsRecommendCardInfo;
    NSString *_ticketType;
    NSString *_seatClass;
    ACCVirtualCardQueryCardListResponse *_cardListResponse;
    AUPopTipView *_popViewForShortcut;
    AUActionSheet *_menuActionSheet;
    ACCOperateWidgetDetail *_operateWidgetDetail;
    CDPSpaceInfo *_huabeiAndCdpSpaceInfo;
    ACCOperateWidgetResponse *_huabeiAndCdpResponse;
    ACCGreenWidgetResponse *_greenWidgetData;
    GreenTransAnimationView *_greenAnimationView;
    XMediaCoreBizConfig *_ywConfig;
    XMediaCoreBizManager *_ywManager;
    NSString *_currentHexCode;
    NSString *_cardUsedDateBegin;
    ACCElderData *_elderData;
    NSString *_promoExt;
    NSString *_specifiedContentDisplay;
    ACCWindowTipView *_windowTip;
    CDUnknownBlockType _taskAfterWelcomeAnimation;
}

@property(copy, nonatomic) CDUnknownBlockType taskAfterWelcomeAnimation; // @synthesize taskAfterWelcomeAnimation=_taskAfterWelcomeAnimation;
@property(nonatomic) _Bool isShowingWelcomeAnimation; // @synthesize isShowingWelcomeAnimation=_isShowingWelcomeAnimation;
@property(nonatomic) __weak ACCWindowTipView *windowTip; // @synthesize windowTip=_windowTip;
@property(retain, nonatomic) NSString *specifiedContentDisplay; // @synthesize specifiedContentDisplay=_specifiedContentDisplay;
@property(retain, nonatomic) NSString *promoExt; // @synthesize promoExt=_promoExt;
@property(retain, nonatomic) ACCElderData *elderData; // @synthesize elderData=_elderData;
@property(nonatomic) _Bool needShowCardList; // @synthesize needShowCardList=_needShowCardList;
@property(nonatomic) _Bool canShowCardList; // @synthesize canShowCardList=_canShowCardList;
@property(retain, nonatomic) NSString *cardUsedDateBegin; // @synthesize cardUsedDateBegin=_cardUsedDateBegin;
@property(retain, nonatomic) NSString *currentHexCode; // @synthesize currentHexCode=_currentHexCode;
@property(nonatomic) _Bool hasShowResult; // @synthesize hasShowResult=_hasShowResult;
@property(nonatomic) __weak XMediaCoreBizManager *ywManager; // @synthesize ywManager=_ywManager;
@property(retain, nonatomic) XMediaCoreBizConfig *ywConfig; // @synthesize ywConfig=_ywConfig;
@property(nonatomic) _Bool hasStartedYW; // @synthesize hasStartedYW=_hasStartedYW;
@property(nonatomic) _Bool closeYW; // @synthesize closeYW=_closeYW;
@property(retain, nonatomic) GreenTransAnimationView *greenAnimationView; // @synthesize greenAnimationView=_greenAnimationView;
@property(nonatomic) _Bool greenWidgetIsBack; // @synthesize greenWidgetIsBack=_greenWidgetIsBack;
@property(retain, nonatomic) ACCGreenWidgetResponse *greenWidgetData; // @synthesize greenWidgetData=_greenWidgetData;
@property(nonatomic) _Bool hasShownLottie; // @synthesize hasShownLottie=_hasShownLottie;
@property(nonatomic) _Bool disableLottieAnimation; // @synthesize disableLottieAnimation=_disableLottieAnimation;
@property(nonatomic) _Bool downgradeLottie; // @synthesize downgradeLottie=_downgradeLottie;
@property(retain, nonatomic) ACCOperateWidgetResponse *huabeiAndCdpResponse; // @synthesize huabeiAndCdpResponse=_huabeiAndCdpResponse;
@property(retain, nonatomic) CDPSpaceInfo *huabeiAndCdpSpaceInfo; // @synthesize huabeiAndCdpSpaceInfo=_huabeiAndCdpSpaceInfo;
@property(retain, nonatomic) ACCOperateWidgetDetail *operateWidgetDetail; // @synthesize operateWidgetDetail=_operateWidgetDetail;
@property(nonatomic) __weak AUActionSheet *menuActionSheet; // @synthesize menuActionSheet=_menuActionSheet;
@property(nonatomic) _Bool allowCardListCache; // @synthesize allowCardListCache=_allowCardListCache;
@property(nonatomic) __weak AUPopTipView *popViewForShortcut; // @synthesize popViewForShortcut=_popViewForShortcut;
@property(nonatomic) _Bool hideShortcutPopTipForFirstTime; // @synthesize hideShortcutPopTipForFirstTime=_hideShortcutPopTipForFirstTime;
@property(nonatomic) _Bool canShowShortcutPopTip; // @synthesize canShowShortcutPopTip=_canShowShortcutPopTip;
@property(nonatomic) _Bool showListCache; // @synthesize showListCache=_showListCache;
@property(retain, nonatomic) ACCVirtualCardQueryCardListResponse *cardListResponse; // @synthesize cardListResponse=_cardListResponse;
@property(nonatomic) _Bool fromSettingOpenOrCloseService; // @synthesize fromSettingOpenOrCloseService=_fromSettingOpenOrCloseService;
@property(nonatomic) _Bool noNeedRefreshCodeWhenDidAppear; // @synthesize noNeedRefreshCodeWhenDidAppear=_noNeedRefreshCodeWhenDidAppear;
@property(copy, nonatomic) NSString *seatClass; // @synthesize seatClass=_seatClass;
@property(copy, nonatomic) NSString *ticketType; // @synthesize ticketType=_ticketType;
@property(nonatomic) _Bool hasShowCardsGuideAnimation; // @synthesize hasShowCardsGuideAnimation=_hasShowCardsGuideAnimation;
@property(retain, nonatomic) ACCAlgoRecommendCardInfo *clientLbsRecommendCardInfo; // @synthesize clientLbsRecommendCardInfo=_clientLbsRecommendCardInfo;
@property(retain, nonatomic) ACCAlgoRecommendCardInfo *algoRecommendCardInfo; // @synthesize algoRecommendCardInfo=_algoRecommendCardInfo;
@property(retain, nonatomic) ACCWalletGroupedCardModel *cardListManagerModel; // @synthesize cardListManagerModel=_cardListManagerModel;
@property(nonatomic) _Bool hasClickRedDot; // @synthesize hasClickRedDot=_hasClickRedDot;
@property(nonatomic) __weak AUActionSheetItem *settingItemView; // @synthesize settingItemView=_settingItemView;
@property(nonatomic) _Bool cannotShowCdp; // @synthesize cannotShowCdp=_cannotShowCdp;
@property(nonatomic) __weak AUBarButtonItem *moreItemView; // @synthesize moreItemView=_moreItemView;
@property(nonatomic) __weak AUActionSheetItem *shortcutItemView; // @synthesize shortcutItemView=_shortcutItemView;
@property(nonatomic) __weak AUPopBar *shortcutPopBar; // @synthesize shortcutPopBar=_shortcutPopBar;
@property(nonatomic) _Bool amapRPCBack; // @synthesize amapRPCBack=_amapRPCBack;
@property(retain, nonatomic) ACCAMapButtonData *amapButtonData; // @synthesize amapButtonData=_amapButtonData;
@property(retain, nonatomic) ACCAMapPollingManager *amapPollingManager; // @synthesize amapPollingManager=_amapPollingManager;
@property(nonatomic) _Bool showAMap; // @synthesize showAMap=_showAMap;
@property(nonatomic) _Bool isInCurrentPage; // @synthesize isInCurrentPage=_isInCurrentPage;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(retain, nonatomic) ACCVirtualCardInfo *displayCardInfo; // @synthesize displayCardInfo=_displayCardInfo;
@property(retain, nonatomic) GreenWalletView *greenWalletView; // @synthesize greenWalletView=_greenWalletView;
@property(retain, nonatomic) ACCNewUserGuideView *userGuildView; // @synthesize userGuildView=_userGuildView;
@property(retain, nonatomic) ACCPredictedCardInfo *predictedCardInfo; // @synthesize predictedCardInfo=_predictedCardInfo;
@property(retain, nonatomic) GreenWalletTipView *greenTipView; // @synthesize greenTipView=_greenTipView;
@property(retain, nonatomic) GreenWalletContentView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *districtCode; // @synthesize districtCode=_districtCode;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *adCode; // @synthesize adCode=_adCode;
@property(retain, nonatomic) ACCImaspData *imaspData; // @synthesize imaspData=_imaspData;
@property(nonatomic) _Bool defaultUserGuideView; // @synthesize defaultUserGuideView=_defaultUserGuideView;
@property(nonatomic) _Bool showUserGuideView; // @synthesize showUserGuideView=_showUserGuideView;
@property(retain, nonatomic) ACCPollingManager *pollingManager; // @synthesize pollingManager=_pollingManager;
@property(retain, nonatomic) ACCVirtualCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(nonatomic) int displayCount; // @synthesize displayCount=_displayCount;
@property(nonatomic) _Bool locationRPCBack; // @synthesize locationRPCBack=_locationRPCBack;
@property(nonatomic) _Bool cardListRPCBack; // @synthesize cardListRPCBack=_cardListRPCBack;
@property(nonatomic) _Bool cardDetailRPCBack; // @synthesize cardDetailRPCBack=_cardDetailRPCBack;
@property(nonatomic) _Bool cardListRPCSuccessBack; // @synthesize cardListRPCSuccessBack=_cardListRPCSuccessBack;
@property(nonatomic) _Bool cardDetailRPCSuccessBack; // @synthesize cardDetailRPCSuccessBack=_cardDetailRPCSuccessBack;
@property(nonatomic) _Bool killSelf; // @synthesize killSelf=_killSelf;
@property(retain, nonatomic) NSArray *menuArray; // @synthesize menuArray=_menuArray;
@property(nonatomic) _Bool fromCache; // @synthesize fromCache=_fromCache;
@property(nonatomic) _Bool needRecommend; // @synthesize needRecommend=_needRecommend;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) _Bool canLockScreen; // @synthesize canLockScreen=_canLockScreen;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *insPassBack; // @synthesize insPassBack=_insPassBack;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSMutableArray *rpcArr; // @synthesize rpcArr=_rpcArr;
- (void).cxx_destruct;
- (void)handleBuscodeNotify:(id)arg1;
- (void)queryBuscodeNotifyRPC;
- (void)handleStatusSync:(id)arg1;
- (void)buscodeStatus:(id)arg1;
- (void)showWindowTipViewWithData:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 closeBlock:(CDUnknownBlockType)arg3;
- (void)hideTipView;
- (void)showTipViewWithData:(id)arg1 clickCallBack:(CDUnknownBlockType)arg2 refreshCallBack:(CDUnknownBlockType)arg3;
- (void)showCodeRedirectShowTipView:(id)arg1;
- (void)showDefaultQrErrorView;
- (void)handleRpcError:(id)arg1;
- (void)handleDicError:(id)arg1;
- (void)sendUserApplyImasp;
- (void)changeSpecialCardsViews:(id)arg1;
- (void)cleanGuideView;
- (void)checkAndShowGuideImage;
- (void)checkAndDownloadGuideImage;
- (void)otherCardDeletedAll:(id)arg1;
- (_Bool)cardNeedStartYW:(id)arg1;
- (void)showYWResult;
- (void)stopYW;
- (void)startYW;
- (void)setupYW;
- (void)shareServiceDidFinish:(_Bool)arg1 channel:(id)arg2 err:(id)arg3;
- (void)actionShare;
- (void)gotoElderVideoWithUrl:(id)arg1;
- (void)gotoElderVerifyWithUrl:(id)arg1;
- (void)gotoGreenIconWithUrl:(id)arg1;
- (void)handleGreenWidget:(id)arg1;
- (void)queryGreenWidget;
- (long long)getAnimationTypeFromCardInfo:(id)arg1;
- (void)changeGreenAnimationFrom:(id)arg1 to:(id)arg2;
- (void)excuteTasksAfterWelcomeAnimation;
- (void)showGreenWelcomeAnimation:(id)arg1;
- (_Bool)hasShownLottieWelcome;
- (void)sendUseHuabeiRPCWithExtInfo:(id)arg1;
- (void)confirmHuabeiWidget;
- (void)showHuabeiWidgetWithData:(id)arg1;
- (void)processHuabeiAndCdp;
- (void)queryHuabeiCDPAndRPC;
- (void)hasCloseShortcutPop;
- (void)showShortcutPopIsFirst:(_Bool)arg1;
- (id)getNeedShowSeatClass:(id)arg1;
- (id)getNeedShowTicketType:(id)arg1;
- (id)needShowCardTicketInfo:(id)arg1;
- (void)handleQRCodeTicketType:(id)arg1;
- (id)getCardInfoWithCardType:(id)arg1;
- (void)changedSelectWithType:(unsigned long long)arg1 code:(id)arg2 cardType:(id)arg3;
- (void)gotoTicketSelectWithCardInfo:(id)arg1 options:(id)arg2;
- (void)processTicketSelectWithOptions:(id)arg1 cardInfo:(id)arg2 fromTransport:(_Bool)arg3;
- (void)processTicketSelectWithOptions:(id)arg1;
- (void)processCurrentSelectWithType:(unsigned long long)arg1;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (_Bool)needShowSettingNewBadge;
- (_Bool)needShowShortCutBadge;
- (void)beeDesktopShortcut;
- (void)gotoSettingWithCardInfo:(id)arg1 cleanRedDot:(_Bool)arg2;
- (void)gotoAddShortcut:(_Bool)arg1 info:(id)arg2;
- (void)showPopBarWithInfo:(id)arg1 image:(id)arg2;
- (void)checkDataInfo:(id)arg1;
- (void)setupShortcutCDP;
- (void)spmClickedLog:(id)arg1 ext:(id)arg2;
- (void)spmClickedLog:(id)arg1;
- (void)bottomImaspExposureSpm:(id)arg1;
- (void)reloadBottomImaspDataList;
- (void)displayAMapResult:(id)arg1;
- (void)tryStopAMapPolling;
- (void)tryStartAMapPolling;
- (void)triggerAMapPolling;
- (void)setupAMapPolling;
- (void)displayResult:(id)arg1 isYwResult:(_Bool)arg2;
- (void)displayResult:(id)arg1;
- (void)resultExit:(id)arg1;
- (void)tryStopPolling;
- (void)tryStartPolling;
- (void)setupPollingEnvWithDictionary:(id)arg1;
- (_Bool)showRecommendIfNeed:(id)arg1 isLbs:(_Bool)arg2;
- (void)recommendWithCurrentCard;
- (void)triggerImaspRPC;
- (id)setupMenu:(id)arg1;
- (void)stopGencodeTimer;
- (void)startGencodeTimer:(int)arg1;
- (void)hideUserGuideView;
- (void)showUserGuideViewWithData:(id)arg1;
- (void)showDialogWithActionBtn:(id)arg1 defaultBtn:(id)arg2 actionUrl:(id)arg3 defaultUrl:(id)arg4 tips:(id)arg5;
- (void)updateQRCode;
- (_Bool)checkDegradeWithUrlTag:(id)arg1 forCardInfo:(id)arg2;
- (id)appendH5ExtWithTag:(long long)arg1;
- (id)baseInfoWithTag:(id)arg1;
- (void)refreshCardData:(id)arg1;
- (void)gotoBottomImaspDetailWithData:(id)arg1;
- (void)gotoCardInfoDetailH5:(id)arg1;
- (void)handleCardInfo:(id)arg1 imaspResponse:(id)arg2;
- (id)prepareImaspDataWithResponse:(id)arg1;
- (void)amapSpm:(id)arg1;
- (void)unregisterSyncNotification;
- (void)registerSyncNotification;
- (void)syncResult:(id)arg1;
- (void)resumeFromAllCard:(id)arg1;
- (void)layoutControllerSubViews:(id)arg1;
- (void)appEnterBackground;
- (void)appEnterForground;
- (void)needRefreshOfflinecode:(id)arg1;
- (void)cutScreenAlert;
- (void)killMe;
- (void)registNoti;
- (id)currentDisplayedCardInfo;
- (void)nebulaDeleteCard:(id)arg1;
- (void)managerCardAt:(id)arg1 cardInfo:(id)arg2;
- (void)deleteCardFromList:(id)arg1;
- (void)processDeleteCardInfo:(id)arg1;
- (void)deleteCardAt:(id)arg1 cardInfo:(id)arg2;
- (void)clickAllCardBtn:(id)arg1;
- (void)didStartPanCardGestrue:(id)arg1;
- (void)showDetailInWalletView:(id)arg1 useGesture:(_Bool)arg2;
- (void)tapListGuideImage:(id)arg1;
- (void)didShowListInWalletView:(id)arg1;
- (void)showListInWalletView:(id)arg1;
- (id)currentCardGroupList:(id)arg1;
- (id)otherCardList:(id)arg1;
- (id)walletViewBottomCardList:(id)arg1;
- (void)walletView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)walletView:(id)arg1 indexPathForCard:(id)arg2;
- (id)contentViewInWalletView:(id)arg1;
- (unsigned long long)walletView:(id)arg1 headerTypeInSection:(long long)arg2;
- (id)walletView:(id)arg1 titleInSection:(long long)arg2;
- (id)walletView:(id)arg1 cardInfoAtIndexPath:(id)arg2;
- (long long)wallectView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)totalCountOfItemsInWalletView:(id)arg1;
- (long long)numberOfSectionsInWalletView:(id)arg1;
- (void)cleanCardList;
- (void)displayCardDetail:(id)arg1;
- (_Bool)handleVerifyIfNeed:(id)arg1;
- (void)handleQRCodeFailed:(id)arg1;
- (void)handleQRCodeSuccess:(id)arg1;
- (id)getSelectedSeatClassJsonString;
- (id)getSelectedTicketTypeJsonString;
- (void)generateQRCode:(_Bool)arg1;
- (void)handleCardListSuccess:(id)arg1;
- (void)handleCardDetailSuccess:(id)arg1;
- (void)queryNewUserGuideRPCIfNeed;
- (void)queryNewUserGuideRPC;
- (void)addToKabaoRPC;
- (void)queryGuideRPC;
- (void)feedbackImasp:(id)arg1;
- (void)queryImaspRPC:(id)arg1;
- (void)queryLocationRPC:(_Bool)arg1;
- (void)queryCardListRPC:(int)arg1;
- (void)queryCardListMoreRPC;
- (void)queryCardListInitRPC;
- (void)queryCardDetailRPC:(_Bool)arg1;
- (void)queryCardDetailAndListRPC:(_Bool)arg1;
- (id)queryCardListCache;
- (_Bool)shouldDisplayCardDetail:(id)arg1;
- (id)queryCache;
- (void)setupData;
- (void)goToAllCardList;
- (void)rightBarItemPressedForList;
- (void)leftBarItemPressedForList;
- (void)setAllCardListNavigationItem;
- (void)setupNavigationBarForList;
- (void)rightBarItemPressedForDetail;
- (void)leftBarItemPressedForDetail;
- (void)setupNavigationBarForDetail;
- (void)setupNavigationBar;
- (void)undoExtSettings;
- (void)doExtSettings;
- (void)createSubviews;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)customStatusBarStytle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (void)resume;
- (id)getSource:(id)arg1;
- (void)setOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)dealloc;
- (void)uploadCTUEvent:(id)arg1;
- (void)subscribeAMapLine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

