//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACDKeychainMigrator : NSObject
{
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)_keychainItemFromAttributesArray:(id)arg1;
- (id)_keychainItemFromAttributes:(id)arg1;
- (id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2;
- (id)allKeychainItems;
- (void)_migrateUUIDKeychainItems:(id)arg1;
- (void)_validateKeychainItemClass:(id)arg1;
- (BOOL)migrateKeychainItem:(id)arg1;
- (void)migrateAllKeychainItems;
- (id)init;

@end
