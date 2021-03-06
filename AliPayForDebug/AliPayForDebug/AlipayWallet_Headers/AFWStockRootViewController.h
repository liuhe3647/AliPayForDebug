//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEButtonTabController.h"

#import "AFWStockRootVCProtocol-Protocol.h"

@class AFWStockTabbarButton, AUBadgeView, AUBarButtonItem, BSBadgeSpaceInfo, BSBadgeView, DTRpcAsyncCaller, NSArray, NSString, UIButton, UIView;
@protocol APConfigService;

@interface AFWStockRootViewController : BEEButtonTabController <AFWStockRootVCProtocol>
{
    BSBadgeView *_marketBadgeView;
    AFWStockTabbarButton *_marketBarButton;
    _Bool _hasLoaded;
    NSString *_tabName;
    NSString *_tabBarName;
    DTRpcAsyncCaller *_tradeRPC;
    id <APConfigService> _configService;
    BSBadgeSpaceInfo *_searchBadgeInfo;
    BSBadgeSpaceInfo *_discoverBadgeInfo;
    BSBadgeSpaceInfo *_marketBadgeInfo;
    UIView *_searchRedPoint;
    AUBadgeView *_badgeView;
    NSArray *_tabsModelList;
    AUBarButtonItem *_moreItem;
    AUBarButtonItem *_portfolioEditItem;
    UIButton *_moreButton;
    AUBarButtonItem *_searchItem;
    AUBarButtonItem *_searchItemBlue;
    AUBarButtonItem *_tradeItem;
    NSString *_specialExtraParams;
}

+ (_Bool)isStockTabTypeHome:(id)arg1;
+ (_Bool)isStockTabTypeTrade:(id)arg1;
+ (_Bool)isStockTabTypeDiscovery:(id)arg1;
+ (_Bool)isStockTabTypeMarket:(id)arg1;
+ (_Bool)isStockTabTypePortfolio:(id)arg1;
+ (id)busnessName;
+ (_Bool)isVersionBig:(id)arg1 version2:(id)arg2;
+ (id)tabTitleForName:(id)arg1;
+ (id)tabIconSelectedDictForName:(id)arg1;
+ (id)tabIconNormalDictForName:(id)arg1;
+ (id)supportTitleMap;
+ (id)tabIconSelectedDict;
+ (id)tabIconNormalDict;
+ (void)loadTemplateVersion2;
+ (void)loadTemplateVersion1;
+ (id)loadDefaultCfg:(_Bool)arg1;
+ (id)tradeItem;
+ (id)supportTabsMap;
+ (id)supportSpmMap;
+ (id)loadControllersByCfg:(id)arg1 extParam:(id)arg2 selectedTabBarName:(id)arg3;
@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(copy, nonatomic) NSString *specialExtraParams; // @synthesize specialExtraParams=_specialExtraParams;
@property(retain, nonatomic) AUBarButtonItem *tradeItem; // @synthesize tradeItem=_tradeItem;
@property(retain, nonatomic) AUBarButtonItem *searchItemBlue; // @synthesize searchItemBlue=_searchItemBlue;
@property(retain, nonatomic) AUBarButtonItem *searchItem; // @synthesize searchItem=_searchItem;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) AUBarButtonItem *portfolioEditItem; // @synthesize portfolioEditItem=_portfolioEditItem;
@property(retain, nonatomic) AUBarButtonItem *moreItem; // @synthesize moreItem=_moreItem;
@property(retain, nonatomic) NSArray *tabsModelList; // @synthesize tabsModelList=_tabsModelList;
@property(retain, nonatomic) AUBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *searchRedPoint; // @synthesize searchRedPoint=_searchRedPoint;
@property(retain, nonatomic) BSBadgeSpaceInfo *marketBadgeInfo; // @synthesize marketBadgeInfo=_marketBadgeInfo;
@property(retain, nonatomic) BSBadgeSpaceInfo *discoverBadgeInfo; // @synthesize discoverBadgeInfo=_discoverBadgeInfo;
@property(retain, nonatomic) BSBadgeSpaceInfo *searchBadgeInfo; // @synthesize searchBadgeInfo=_searchBadgeInfo;
@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
@property(retain, nonatomic) DTRpcAsyncCaller *tradeRPC; // @synthesize tradeRPC=_tradeRPC;
@property(copy, nonatomic) NSString *tabBarName; // @synthesize tabBarName=_tabBarName;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;
- (void)handlePushInStockApp:(_Bool)arg1;
- (id)subControllerNeedToExecutingTopView;
- (id)addTabBar;
- (void)tabbarDidLoad:(id)arg1 tabType:(id)arg2;
- (id)getTabbar:(id)arg1 posX:(double)arg2 width:(double)arg3;
- (long long)getTabIndexByTabName:(id)arg1;
- (id)getSelectedTabModel;
- (struct NSObject *)addTabControlWithPreSelectedIndex:(unsigned long long)arg1;
- (struct NSObject *)addTabControl;
- (void)reloadTabBar;
- (void)updateTradeSwitch:(_Bool)arg1;
- (void)reportSearchAndDiscoverExposure;
- (void)reportDiscoverRP;
- (void)reportSearchRP;
- (void)reportSearchRPAndPost;
- (void)reportMarketClick;
- (void)reportMarketShow;
- (void)checkConfigService;
- (id)configDict;
@property(copy, nonatomic) NSArray *tabsCfg;
@property(nonatomic) _Bool isTradeVisiable;
@property(copy, nonatomic) NSString *tabVersion;
- (id)userID;
- (void)registNotice;
- (void)addObservseForStockTradeBar;
- (void)didSelectTabbarButton:(id)arg1;
- (void)editClick:(id)arg1;
- (void)tradeQueryClick:(id)arg1;
- (void)searchClick:(id)arg1;
- (id)addBtnWithTitle:(id)arg1 normalIcon:(id)arg2 selectedImage:(id)arg3 startX:(double)arg4 perWidth:(double)arg5;
- (id)redPoint:(double)arg1;
- (void)moreClick;
- (void)addBottomView;
- (void)setupRightBar;
- (void)opportunitySchemaAction;
- (void)setNaviBarColor;
- (void)setupBackbuttonColor:(id)arg1;
- (void)setupNaviBarItem;
- (void)updateTabBarIndex;
- (void)configTitleView;
- (void)loadBadgeData;
- (id)onloadRemoteCfg:(id)arg1;
- (void)loadRemoteCfg;
- (id)filterTabs:(id)arg1;
- (id)loadTabsModel;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSpecialExtraParams:(id)arg1 tabBarName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

