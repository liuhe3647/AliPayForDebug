//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface TFTransferRecordLoadMoreCell : UITableViewCell
{
    UILabel *_lblLoadMore;
    UIImageView *_imgViewArrow;
    UIImageView *_imgViewLeft;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *imgViewLeft; // @synthesize imgViewLeft=_imgViewLeft;
@property(retain, nonatomic) UIImageView *imgViewArrow; // @synthesize imgViewArrow=_imgViewArrow;
@property(retain, nonatomic) UILabel *lblLoadMore; // @synthesize lblLoadMore=_lblLoadMore;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

