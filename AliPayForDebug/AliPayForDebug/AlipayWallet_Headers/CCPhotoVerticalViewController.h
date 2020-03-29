//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEPhotoVerticalPreviewViewController.h"

#import "BEEPhotoVerticalPreviewDelegate-Protocol.h"
#import "SocialAPhotoBrowserDelegate-Protocol.h"

@class CCard, NSString, SocialAPhotoBrowser;

@interface CCPhotoVerticalViewController : BEEPhotoVerticalPreviewViewController <BEEPhotoVerticalPreviewDelegate, SocialAPhotoBrowserDelegate>
{
    NSString *_userId;
    NSString *_loginId;
    NSString *_targetId;
    NSString *_subSceneCode;
    CCard *_cardData;
    SocialAPhotoBrowser *_aphotoBrowser;
}

@property(retain, nonatomic) SocialAPhotoBrowser *aphotoBrowser; // @synthesize aphotoBrowser=_aphotoBrowser;
@property(retain, nonatomic) CCard *cardData; // @synthesize cardData=_cardData;
@property(copy, nonatomic) NSString *subSceneCode; // @synthesize subSceneCode=_subSceneCode;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (struct CGSize)getThumbImageSizeFromIndex:(unsigned long long)arg1;
- (id)getThumbImageFromIndex:(unsigned long long)arg1;
- (void)exitPhotoBrowser;
- (_Bool)shouldShowFooterView:(id)arg1;
- (void)didEditImage:(id)arg1 atPos:(long long)arg2 itemView:(id)arg3;
- (void)didDeleteImage:(long long)arg1 itemView:(id)arg2;
- (void)didTapedImage:(long long)arg1 itemView:(id)arg2;
- (id)delegate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
