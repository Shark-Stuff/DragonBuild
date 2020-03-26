//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/DeliveryAccount.h>

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount
{
    DAMailAccount *_DAMailAccount;
}

// - (void).cxx_destruct;
- (id)mailAccountIfAvailable;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (Class)deliveryClass;
- (id)initWithDAMailAccount:(id)arg1;

@end
