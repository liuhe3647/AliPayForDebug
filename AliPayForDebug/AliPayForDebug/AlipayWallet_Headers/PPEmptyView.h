//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PPEmptyWebView, UIImageView, UITableView, UIViewController;

@interface PPEmptyView : UIView
{
    UIImageView *_imageView;
    UITableView *_tableView;
    NSString *_sourceId;
    UIViewController *_vc;
    PPEmptyWebView *_webview;
}

@property(retain, nonatomic) PPEmptyWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dispatchResume;
- (id)initWithFrame:(struct CGRect)arg1 sourceId:(id)arg2;

@end

