//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewCell.h"

@class AUInputBox;

@interface APInputBoxCell : APTableViewCell
{
    AUInputBox *_textField;
}

+ (float)cellHeight;
@property(retain, nonatomic) AUInputBox *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)textFieldInCell;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
