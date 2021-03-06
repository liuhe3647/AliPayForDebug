//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APGEAGLContext, APGGLResource, NSArray, NSMutableDictionary, NSString;

@interface APGCanvasContext2D : NSObject
{
    struct GCanvasHooks hooks;
    _Bool _isOnScreen;
    _Bool _isContext2DReady;
    float _ratio;
    float _shadowBlur;
    float _shadowOffsetX;
    float _shadowOffsetY;
    float _lineWidth;
    float _miterLimit;
    float _lineDashOffset;
    float _globalAlpha;
    int _ID;
    id _fillStyle;
    id _strokeStyle;
    NSString *_shadowColor;
    NSString *_lineCap;
    NSString *_lineJoin;
    NSArray *_lineDash;
    NSString *_font;
    NSString *_textAlign;
    NSString *_textBaseline;
    NSString *_globalCompositeOperation;
    struct GCanvas *_gcanvas;
    struct GCanvasContext *_context;
    APGGLResource *_glResource;
    APGEAGLContext *_apgeaglContext;
    NSMutableDictionary *_uvListDict;
}

@property(retain, nonatomic) NSMutableDictionary *uvListDict; // @synthesize uvListDict=_uvListDict;
@property(nonatomic) __weak APGEAGLContext *apgeaglContext; // @synthesize apgeaglContext=_apgeaglContext;
@property(nonatomic) __weak APGGLResource *glResource; // @synthesize glResource=_glResource;
@property(nonatomic) struct GCanvasContext *context; // @synthesize context=_context;
@property(nonatomic) struct GCanvas *gcanvas; // @synthesize gcanvas=_gcanvas;
@property(nonatomic) int ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *globalCompositeOperation; // @synthesize globalCompositeOperation=_globalCompositeOperation;
@property(nonatomic) float globalAlpha; // @synthesize globalAlpha=_globalAlpha;
@property(retain, nonatomic) NSString *textBaseline; // @synthesize textBaseline=_textBaseline;
@property(retain, nonatomic) NSString *textAlign; // @synthesize textAlign=_textAlign;
@property(retain, nonatomic) NSString *font; // @synthesize font=_font;
@property(nonatomic) float lineDashOffset; // @synthesize lineDashOffset=_lineDashOffset;
@property(retain, nonatomic) NSArray *lineDash; // @synthesize lineDash=_lineDash;
@property(nonatomic) float miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSString *lineJoin; // @synthesize lineJoin=_lineJoin;
@property(retain, nonatomic) NSString *lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) float shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) float shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) float shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(retain, nonatomic) NSString *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) id strokeStyle; // @synthesize strokeStyle=_strokeStyle;
@property(retain, nonatomic) id fillStyle; // @synthesize fillStyle=_fillStyle;
@property(readonly, nonatomic) _Bool isContext2DReady; // @synthesize isContext2DReady=_isContext2DReady;
@property(readonly, nonatomic) float ratio; // @synthesize ratio=_ratio;
@property(readonly, nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
- (void).cxx_destruct;
- (void)clearDrawCallCount;
- (long long)getDrawCallCount;
- (void)drawVertexList:(id)arg1 count:(int)arg2 vertexList:(float *)arg3 texList:(float *)arg4;
- (float *)getTextureList:(id)arg1;
- (void)saveTextureList:(id)arg1 uvList:(float *)arg2;
- (void)drawTextureWithVertex:(id)arg1 vertexList:(float *)arg2;
- (void)putImageDataWithTexture:(id)arg1 sx:(float)arg2 sy:(float)arg3 sw:(short)arg4 sh:(short)arg5 dx:(float)arg6 dy:(float)arg7 dw:(short)arg8 dh:(short)arg9;
- (void)putImageData:(id)arg1 sw:(short)arg2 sh:(short)arg3 sx:(float)arg4 sy:(float)arg5 dx:(float)arg6 dy:(float)arg7 dw:(short)arg8 dh:(float)arg9;
- (void)putImageData:(id)arg1 sw:(short)arg2 sh:(short)arg3 dx:(float)arg4 dy:(float)arg5;
- (id)getImageDataSx:(short)arg1 sy:(short)arg2 sw:(short)arg3 sh:(short)arg4;
- (void)drawImageWithTex:(id)arg1 sx:(float)arg2 sy:(float)arg3 sw:(float)arg4 sh:(float)arg5 dx:(float)arg6 dy:(float)arg7 dw:(float)arg8 dh:(float)arg9;
- (void)drawImageWithTex:(id)arg1 dx:(float)arg2 dy:(float)arg3 dw:(float)arg4 dh:(float)arg5;
- (void)drawImageWithTex:(id)arg1 dx:(float)arg2 dy:(float)arg3;
- (void)drawImage:(id)arg1 sx:(float)arg2 sy:(float)arg3 sw:(float)arg4 sh:(float)arg5 dx:(float)arg6 dy:(float)arg7 dw:(float)arg8 dh:(float)arg9;
- (void)drawImage:(id)arg1 dx:(float)arg2 dy:(float)arg3 dw:(float)arg4 dh:(float)arg5;
- (void)drawImage:(id)arg1 dx:(float)arg2 dy:(float)arg3;
- (float)measureText:(id)arg1;
- (void)strokeTextCStr:(const char *)arg1 x:(float)arg2 y:(float)arg3 maxWidth:(float)arg4;
- (void)strokeText:(id)arg1 x:(float)arg2 y:(float)arg3 maxWidth:(float)arg4;
- (void)strokeText:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)fillTextCStr:(const char *)arg1 x:(float)arg2 y:(float)arg3 maxWidth:(float)arg4;
- (void)fillText:(id)arg1 x:(float)arg2 y:(float)arg3 maxWidth:(float)arg4;
- (void)fillText:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)arc:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 anticlockwise:(int)arg6;
- (void)stroke;
- (void)fill:(id)arg1;
- (void)fill;
- (void)rect:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)fillRect:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)beginPath;
- (void)arcTo:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)bezierCurveTo:(float)arg1 cp1y:(float)arg2 cp2x:(float)arg3 cp2y:(float)arg4 x:(float)arg5 y:(float)arg6;
- (void)quadraticCurveTo:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4;
- (void)lineTo:(float)arg1 y:(float)arg2;
- (void)moveTo:(float)arg1 y:(float)arg2;
- (void)closePath;
- (void)resetClip;
- (void)clip:(id)arg1;
- (void)clip;
- (void)clearScreen;
- (void)clearRect:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)strokeRect:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)restore;
- (void)save;
- (void)translate:(float)arg1 y:(float)arg2;
- (void)rotate:(float)arg1;
- (void)scale:(float)arg1 y:(float)arg2;
- (void)resetTransform;
- (void)getCurrentTransform:(float [6])arg1;
- (void)transform:(float)arg1 b:(float)arg2 c:(float)arg3 d:(float)arg4 tx:(float)arg5 ty:(float)arg6;
- (void)setTransform:(float)arg1 b:(float)arg2 c:(float)arg3 d:(float)arg4 tx:(float)arg5 ty:(float)arg6;
- (void)setCanvasDimension:(int)arg1 h:(int)arg2;
- (id)getGlobalCompositeOperation;
- (float)getGlobalAlpha;
- (id)getTextBaseline;
- (id)getTextAlign;
- (id)getFont;
- (float)getLineDashOffset;
- (void)getLineDash:(id)arg1;
- (float)getMiterLimit;
- (float)getLineWidth;
- (id)getLineJoin;
- (id)getLineCap;
- (float)getShadowOffsetY;
- (float)getShadowOffsetX;
- (float)getShadowBlur;
- (void)getShadowColor:(float [4])arg1;
- (id)getStrokeStyle;
- (void)doSetGradient:(id)arg1 isStroke:(_Bool)arg2;
- (void)setOtherStyle:(id)arg1 isStroke:(_Bool)arg2;
- (id)getFillStyle;
- (void)endRenderFrame;
- (void)beginRenderFrame;
- (void)drawFrame;
- (id)getTexture;
- (void)setClearColor:(id)arg1;
- (void)checkGCanvasStatus;
- (void)destroyRenderContext;
- (void)resizeWidth:(short)arg1 height:(short)arg2;
- (id)initWithID:(int)arg1 type:(int)arg2 size:(struct CGSize)arg3 ratio:(float)arg4 glResource:(id)arg5 isOnScreen:(_Bool)arg6;

@end

