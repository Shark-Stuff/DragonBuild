//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKContainerProxying-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface SCKStubContainer : NSObject <SCKContainerProxying>
{
    BOOL _accountInfoSupportsDeviceToDeviceEncryption;
    long long _modifyZonesErrorMode;
    NSUInteger _modifyZonesOperationCount;
    NSArray *_modifyZonesSavedZones;
    long long _zoneChangesErrorMode;
    id /* CDUnknownBlockType */ _willFinishZoneChanges;
    NSUInteger _zoneChangesOperationCount;
    long long _modifyRecordsErrorMode;
    id /* CDUnknownBlockType */ _willModifyRecords;
    NSUInteger _modifyRecordsOperationCount;
    NSArray *_modifyRecordsSavedRecords;
    NSUInteger _modifySubscriptionsOperationCount;
    NSArray *_modifySubscriptionsSavedSubscriptions;
    NSUInteger _databaseChangesOperationCount;
    NSArray *_databaseChangesOperationChangedZoneIDs;
    long long _accountInfoErrorMode;
    NSMutableDictionary *_zoneContentsByZoneID;
}

@property(retain, nonatomic) NSMutableDictionary *zoneContentsByZoneID; // @synthesize zoneContentsByZoneID=_zoneContentsByZoneID;
@property(nonatomic) long long accountInfoErrorMode; // @synthesize accountInfoErrorMode=_accountInfoErrorMode;
@property(nonatomic) BOOL accountInfoSupportsDeviceToDeviceEncryption; // @synthesize accountInfoSupportsDeviceToDeviceEncryption=_accountInfoSupportsDeviceToDeviceEncryption;
@property(copy, nonatomic) NSArray *databaseChangesOperationChangedZoneIDs; // @synthesize databaseChangesOperationChangedZoneIDs=_databaseChangesOperationChangedZoneIDs;
@property(readonly, nonatomic) NSUInteger databaseChangesOperationCount; // @synthesize databaseChangesOperationCount=_databaseChangesOperationCount;
@property(readonly, copy, nonatomic) NSArray *modifySubscriptionsSavedSubscriptions; // @synthesize modifySubscriptionsSavedSubscriptions=_modifySubscriptionsSavedSubscriptions;
@property(readonly, nonatomic) NSUInteger modifySubscriptionsOperationCount; // @synthesize modifySubscriptionsOperationCount=_modifySubscriptionsOperationCount;
@property(readonly, copy, nonatomic) NSArray *modifyRecordsSavedRecords; // @synthesize modifyRecordsSavedRecords=_modifyRecordsSavedRecords;
@property(readonly, nonatomic) NSUInteger modifyRecordsOperationCount; // @synthesize modifyRecordsOperationCount=_modifyRecordsOperationCount;
@property(copy, nonatomic) id /* CDUnknownBlockType */ willModifyRecords; // @synthesize willModifyRecords=_willModifyRecords;
@property(nonatomic) long long modifyRecordsErrorMode; // @synthesize modifyRecordsErrorMode=_modifyRecordsErrorMode;
@property(readonly, nonatomic) NSUInteger zoneChangesOperationCount; // @synthesize zoneChangesOperationCount=_zoneChangesOperationCount;
@property(copy, nonatomic) id /* CDUnknownBlockType */ willFinishZoneChanges; // @synthesize willFinishZoneChanges=_willFinishZoneChanges;
@property(nonatomic) long long zoneChangesErrorMode; // @synthesize zoneChangesErrorMode=_zoneChangesErrorMode;
@property(readonly, copy, nonatomic) NSArray *modifyZonesSavedZones; // @synthesize modifyZonesSavedZones=_modifyZonesSavedZones;
@property(readonly, nonatomic) NSUInteger modifyZonesOperationCount; // @synthesize modifyZonesOperationCount=_modifyZonesOperationCount;
@property(nonatomic) long long modifyZonesErrorMode; // @synthesize modifyZonesErrorMode=_modifyZonesErrorMode;
// - (void).cxx_destruct;
- (long long)_ckErrorCodeForErrorMode:(long long)arg1;
- (id)_errorForErrorMode:(long long)arg1 itemIDs:(id)arg2;
- (id)_errorForErrorMode:(long long)arg1;
- (void)accountInfoWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)addDatabaseOperation:(id)arg1;
- (id)recordWithName:(id)arg1 inZone:(id)arg2;
- (id)contentsOfZone:(id)arg1 withType:(id)arg2;
- (id)contentsOfZone:(id)arg1;
- (void)setContentsOfZone:(id)arg1 toRecords:(id)arg2;
- (id)init;

@end
