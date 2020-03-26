//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, CKServerChangeToken, HMDCloudChange, HMDCloudZone, HMDCloudZoneChange, HMFOSTransaction, NSArray, NSUUID;

@interface HMDCloudTransaction : HMFObject
{
    BOOL _needConflictResolution;
    BOOL _iCloudSwitchStateEnabled;
    BOOL _temporaryCache;
    BOOL _zoneHasNoLocalData;
    BOOL _createZone;
    BOOL _zoneWasCreated;
    BOOL _deleteZone;
    BOOL _zoneWasDeleted;
    HMFOSTransaction *_osTransaction;
    NSUUID *_identifier;
    HMDCloudZone *_cloudZone;
    CKServerChangeToken *_updatedServerChangeToken;
    NSArray *_recordsToSave;
    NSArray *_recordsToDelete;
    NSUInteger _transactionType;
    HMDCloudZoneChange *_cloudZoneChange;
    HMDCloudChange *_homeDataChange;
}

+ (id)shortDescription;
@property(retain, nonatomic) HMDCloudChange *homeDataChange; // @synthesize homeDataChange=_homeDataChange;
@property(retain, nonatomic) HMDCloudZoneChange *cloudZoneChange; // @synthesize cloudZoneChange=_cloudZoneChange;
@property(nonatomic) NSUInteger transactionType; // @synthesize transactionType=_transactionType;
@property(readonly, nonatomic) NSArray *recordsToDelete; // @synthesize recordsToDelete=_recordsToDelete;
@property(readonly, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(nonatomic, getter=wasZoneDeleted) BOOL zoneWasDeleted; // @synthesize zoneWasDeleted=_zoneWasDeleted;
@property(nonatomic, getter=shouldDeleteZone) BOOL deleteZone; // @synthesize deleteZone=_deleteZone;
@property(nonatomic, getter=wasZoneCreated) BOOL zoneWasCreated; // @synthesize zoneWasCreated=_zoneWasCreated;
@property(nonatomic, getter=shouldCreateZone) BOOL createZone; // @synthesize createZone=_createZone;
@property(readonly, nonatomic) BOOL zoneHasNoLocalData; // @synthesize zoneHasNoLocalData=_zoneHasNoLocalData;
@property(readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache; // @synthesize temporaryCache=_temporaryCache;
@property(retain, nonatomic) CKServerChangeToken *updatedServerChangeToken; // @synthesize updatedServerChangeToken=_updatedServerChangeToken;
@property(nonatomic) BOOL iCloudSwitchStateEnabled; // @synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled;
@property(nonatomic) BOOL needConflictResolution; // @synthesize needConflictResolution=_needConflictResolution;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *objectChanges;
- (id)replayTransaction:(id)arg1 stagedTransaction:(id)arg2;
- (void)loadObjectChanges;
- (id)changeWithRecordName:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
@property(readonly, nonatomic, getter=isHomeTransaction) BOOL homeTransaction;
@property(readonly, nonatomic, getter=isHomeManagerTransaction) BOOL homeManagerTransaction;
@property(readonly, nonatomic, getter=isMetadataTransaction) BOOL metadataTransaction;
@property(readonly, nonatomic, getter=isLegacyTransaction) BOOL legacyTransaction;
- (void)updateCloudCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(id /* CDUnknownBlockType */)arg1;
- (BOOL)moreChangesToProcess;
- (void)setAllChangedAsProcessed;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* CDUnknownBlockType */)arg1;
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (BOOL)doesRecordExistInCacheWithObjectID:(id)arg1;
- (BOOL)doesRecordExistWithObjectID:(id)arg1;
@property(readonly, nonatomic) BOOL hasValidChanges;
- (void)removeChangeWithObjectID:(id)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property(readonly, nonatomic) BOOL controllerIdentifierChanged;
@property(readonly, nonatomic) BOOL encryptionFailed;
@property(readonly, nonatomic) BOOL decryptionFailed;
@property(retain, nonatomic) HMFOSTransaction *osTransaction; // @synthesize osTransaction=_osTransaction;
- (id)description;
- (id)shortDescription;
- (void)updateCloudZone:(id)arg1;
- (id)initWithType:(NSUInteger)arg1 temporaryCache:(BOOL)arg2 noLocalData:(BOOL)arg3;
- (id)initWithType:(NSUInteger)arg1 temporaryCache:(BOOL)arg2;
- (id)init;

@end
