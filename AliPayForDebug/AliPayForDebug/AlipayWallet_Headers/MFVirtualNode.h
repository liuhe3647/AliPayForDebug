//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFScene, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIView;

@interface MFVirtualNode : NSObject
{
    struct css_node *_cssNode;
    _Bool _filterChildren;
    _Bool _root;
    unsigned long long _type;
    NSString *_clsType;
    NSString *_clsSubType;
    NSString *_cssclass;
    NSString *_cssstyle;
    NSString *_uuid;
    NSString *_cssid;
    NSString *_tabindex;
    NSString *_mirror;
    NSString *_mirrorOffset;
    NSString *_bubbleImage;
    NSString *_bubbleStretch;
    NSNumber *_isAccessibilityElement;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
    NSNumber *_accessibilityTraits;
    NSString *_stretchInset;
    NSString *_bindingField;
    id _originData;
    NSDictionary *_fullData;
    NSString *_defaultData;
    id _data;
    NSString *_forIndex;
    NSDictionary *_cssNodes;
    NSMutableDictionary *_displayCssNodes;
    NSMutableDictionary *_dynamicCssNodes;
    NSMutableDictionary *_eventNodes;
    MFVirtualNode *_superVNode;
    NSMutableArray *_subVNodes;
    long long _mfTag;
    UIView *_objRef;
    NSString *_sceneManifest;
    MFScene *_scene;
    NSString *_displayMode;
    NSString *_visibility;
    NSString *_nsuuid;
    NSString *_embedAdapterDataKey;
    struct CGRect _calSuperFrame;
    struct CGRect _calculatedFrame;
    struct CGRect _absoluteFrame;
}

@property(copy, nonatomic) NSString *embedAdapterDataKey; // @synthesize embedAdapterDataKey=_embedAdapterDataKey;
@property(nonatomic) _Bool root; // @synthesize root=_root;
@property(retain, nonatomic) NSString *nsuuid; // @synthesize nsuuid=_nsuuid;
@property(copy, nonatomic) NSString *visibility; // @synthesize visibility=_visibility;
@property(copy, nonatomic) NSString *displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) __weak MFScene *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sceneManifest; // @synthesize sceneManifest=_sceneManifest;
@property(nonatomic) __weak UIView *objRef; // @synthesize objRef=_objRef;
@property(nonatomic) long long mfTag; // @synthesize mfTag=_mfTag;
@property(nonatomic) struct CGRect absoluteFrame; // @synthesize absoluteFrame=_absoluteFrame;
@property(nonatomic) struct CGRect calculatedFrame; // @synthesize calculatedFrame=_calculatedFrame;
@property(nonatomic) struct CGRect calSuperFrame; // @synthesize calSuperFrame=_calSuperFrame;
@property(retain, nonatomic) NSMutableArray *subVNodes; // @synthesize subVNodes=_subVNodes;
@property(nonatomic) __weak MFVirtualNode *superVNode; // @synthesize superVNode=_superVNode;
@property(retain, nonatomic) NSMutableDictionary *eventNodes; // @synthesize eventNodes=_eventNodes;
@property(retain, nonatomic) NSMutableDictionary *dynamicCssNodes; // @synthesize dynamicCssNodes=_dynamicCssNodes;
@property(retain, nonatomic) NSMutableDictionary *displayCssNodes; // @synthesize displayCssNodes=_displayCssNodes;
@property(retain, nonatomic) NSDictionary *cssNodes; // @synthesize cssNodes=_cssNodes;
@property(copy, nonatomic) NSString *forIndex; // @synthesize forIndex=_forIndex;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *defaultData; // @synthesize defaultData=_defaultData;
@property(retain, nonatomic) NSDictionary *fullData; // @synthesize fullData=_fullData;
@property(retain, nonatomic) id originData; // @synthesize originData=_originData;
@property(copy, nonatomic) NSString *bindingField; // @synthesize bindingField=_bindingField;
@property(copy, nonatomic) NSString *stretchInset; // @synthesize stretchInset=_stretchInset;
@property(copy, nonatomic) NSNumber *accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSNumber *isAccessibilityElement; // @synthesize isAccessibilityElement=_isAccessibilityElement;
@property(nonatomic) _Bool filterChildren; // @synthesize filterChildren=_filterChildren;
@property(copy, nonatomic) NSString *bubbleStretch; // @synthesize bubbleStretch=_bubbleStretch;
@property(copy, nonatomic) NSString *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
@property(copy, nonatomic) NSString *mirrorOffset; // @synthesize mirrorOffset=_mirrorOffset;
@property(copy, nonatomic) NSString *mirror; // @synthesize mirror=_mirror;
@property(copy, nonatomic) NSString *tabindex; // @synthesize tabindex=_tabindex;
@property(copy, nonatomic) NSString *cssid; // @synthesize cssid=_cssid;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *cssstyle; // @synthesize cssstyle=_cssstyle;
@property(copy, nonatomic) NSString *cssclass; // @synthesize cssclass=_cssclass;
@property(copy, nonatomic) NSString *clsSubType; // @synthesize clsSubType=_clsSubType;
@property(copy, nonatomic) NSString *clsType; // @synthesize clsType=_clsType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)buildingCssNode;
- (_Bool)isEmbedNode;
- (_Bool)isEqualToNode:(id)arg1;
- (id)triggerEvent:(id)arg1 withParams:(id)arg2;
- (void)bindData;
- (void)layout;
- (id)create;
- (void)calcFrame;
- (void)layoutWithSuperFrame:(struct CGRect)arg1;
- (id)subVNodeWithId:(id)arg1;
- (void)specialCssHandle;
- (id)valueForKeyPath:(id)arg1 dataSource:(id)arg2;
- (void)updateDomCss:(id)arg1 WithDataUI:(id)arg2;
- (id)objectForKey:(id)arg1 object:(id)arg2;
- (id)dataWithKeyPath:(id)arg1 dataSource:(id)arg2;
- (id)getDataWithDom:(id)arg1 dataSource:(id)arg2 originData:(id)arg3 scene:(id)arg4;
- (id)initWithDom:(id)arg1 dataSource:(id)arg2 originData:(id)arg3 scene:(id)arg4 traversalPath:(id)arg5;
- (void)setCssNode:(struct css_node *)arg1;
- (struct css_node *)cssNode;
- (void)dealloc;
- (int)getGestureWithMap:(id)arg1;
- (void)bindEvent:(id)arg1;
- (void)prepareBindData:(id)arg1 widget:(id)arg2 isPreload:(_Bool)arg3 syncLoadCache:(_Bool)arg4;
- (void)preparePreloadFrame:(id)arg1;
- (void)prepareFrame:(id)arg1;
- (void)prepareObjRef:(id)arg1 widget:(id)arg2 syncLoadCache:(_Bool)arg3;
- (void)prepareObjRef:(id)arg1 syncLoadCache:(_Bool)arg2;
- (id)createObjRef;

@end
