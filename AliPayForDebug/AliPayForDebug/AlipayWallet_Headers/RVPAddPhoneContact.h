//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNContactPickerDelegate-Protocol.h"
#import "CNContactViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSDictionary, NSString, UIAlertController, UIViewController;

@interface RVPAddPhoneContact : NSObject <UIActionSheetDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate>
{
    NSDictionary *_data;
    UIViewController *_rootViewController;
    UIAlertController *_actionSheet;
    CDUnknownBlockType _completeCallback;
    CDUnknownBlockType _cancelCallback;
}

@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType completeCallback; // @synthesize completeCallback=_completeCallback;
@property(retain, nonatomic) UIAlertController *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)dealloc;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)ABMultiValueAddValueAndLabelIfNotEmptyWithRef:(void *)arg1 value:(id)arg2 label:(struct __CFString *)arg3 identifier:(int *)arg4;
- (void)CFDictionaryAddValueIfNotEmptyWithRef:(struct __CFDictionary *)arg1 key:(const void *)arg2 value:(const void *)arg3;
- (id)labelWithLanguage:(id)arg1;
- (struct __CFString *)cfLabelWithLanguage:(id)arg1;
- (_Bool)isBlank:(id)arg1;
- (_Bool)isNotBlank:(id)arg1;
- (void)setRecordValue:(void *)arg1 propertyID:(int)arg2 value:(id)arg3;
- (void)addToAddressMultiValueWithAddressMultiValue:(void *)arg1 counrty:(id)arg2 state:(id)arg3 city:(id)arg4 street:(id)arg5 postalCode:(id)arg6 label:(id)arg7;
- (void *)getMultiValueRefWithRecordRef:(void *)arg1 propertyID:(int)arg2 propertyType:(int)arg3;
- (int)getIndexWithRecord:(void *)arg1 label:(struct __CFString *)arg2;
- (void)addOrReplaceInstantMessageWithRecord:(void *)arg1 label:(id)arg2 value:(id)arg3;
- (void)fillPerson:(void *)arg1 withData:(id)arg2;
- (void)addToAddressesWithAddresses:(id)arg1 counrty:(id)arg2 state:(id)arg3 city:(id)arg4 street:(id)arg5 postalCode:(id)arg6 label:(id)arg7;
- (void)addToInstantMessageAddressesWithAddresses:(id)arg1 andAddress:(id)arg2;
- (void)addOrReplaceItemIntoNumsWithItems:(id)arg1 item:(id)arg2;
- (void)fillContact:(id)arg1 withData:(id)arg2;
- (void)showPeoplePickerController;
- (void)createNewPerson:(id)arg1 contact:(id)arg2 orPerson:(void *)arg3;
- (void)execute;
- (id)initWithData:(id)arg1 viewController:(id)arg2 completeCallback:(CDUnknownBlockType)arg3 cancelCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

