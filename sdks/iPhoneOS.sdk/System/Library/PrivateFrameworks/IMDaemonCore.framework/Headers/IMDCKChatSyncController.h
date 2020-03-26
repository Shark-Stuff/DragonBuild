//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@class CKRecord, CKServerChangeToken, IMDCKChatSyncCKOperationFactory, IMDChatRegistry, IMDRecordZoneManager, NSObject;
@protocol IMDCKSyncTokenStore, OS_dispatch_queue;

@interface IMDCKChatSyncController : IMDCKAbstractSyncController
{
    BOOL _fetchedChatsDuringLastSync;
    CKServerChangeToken *_latestSyncToken;
    NSObject<OS_dispatch_queue> *_ckQueue;
    IMDChatRegistry *_chatRegistry;
    IMDRecordZoneManager *_recordZoneManager;
    id <IMDCKSyncTokenStore> _syncTokenStore;
    IMDCKChatSyncCKOperationFactory *_CKOperationFactory;
    CKRecord *_lockRecord;
    CKRecord *_manateeLockRecord;
    CKRecord *_stingRayLockRecord;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CKRecord *stingRayLockRecord; // @synthesize stingRayLockRecord=_stingRayLockRecord;
@property(retain, nonatomic) CKRecord *manateeLockRecord; // @synthesize manateeLockRecord=_manateeLockRecord;
@property(retain, nonatomic) CKRecord *lockRecord; // @synthesize lockRecord=_lockRecord;
@property(retain, nonatomic) IMDCKChatSyncCKOperationFactory *CKOperationFactory; // @synthesize CKOperationFactory=_CKOperationFactory;
@property(retain, nonatomic) id <IMDCKSyncTokenStore> syncTokenStore; // @synthesize syncTokenStore=_syncTokenStore;
@property(retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(retain, nonatomic) IMDChatRegistry *chatRegistry; // @synthesize chatRegistry=_chatRegistry;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property(nonatomic) BOOL fetchedChatsDuringLastSync; // @synthesize fetchedChatsDuringLastSync=_fetchedChatsDuringLastSync;
- (void)syncPendingDeletionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_handleChatDeletionCompletionForRecordIDs:(id)arg1 error:(id)arg2;
- (id)_copyRecordIDsToDelete;
- (void)clearLocalSyncState:(NSUInteger)arg1;
- (void)__syncChatsWithCloudKit:(long long)arg1 attemptCount:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)syncChatsWithCloudKit:(long long)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)syncChatsWithCloudKitWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_hasMarkedAllChatsAsNeedingSync;
- (BOOL)_shouldMarkAllChatsAsNeedingSync;
- (void)_needsToMarkAllChatsAsNeedingSync;
- (id)_recordKeyManagerSharedInstance;
- (BOOL)_eligibleForTruthZone;
- (void)deleteChatZone;
- (void)anyChatExistsOnServerWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_anyChatExistsOnServerWithResultsLimit:(int)arg1 changeToken:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_syncChatsWithCloudKitWithCompletionType:(long long)arg1 syncChatsCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)deleteChatSyncToken;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2 isUsingStingRay:(BOOL)arg3 syncType:(long long)arg4;
- (void)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2 isUsingStingRay:(BOOL)arg3;
- (void)_kickOffWriteOnCKQueueWithCompletion:(id /* CDUnknownBlockType */)arg1 isUsingStingRay:(BOOL)arg2;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(BOOL)arg4 error:(id)arg5;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3;
- (void)_processRecordChanged:(id)arg1 isUsingStingRay:(BOOL)arg2;
- (void)_processRecordDeletion:(id)arg1;
- (id)_fetchChatRecordOperation;
- (void)_writeDirtyChatsToCloudKitWithCompletion:(id /* CDUnknownBlockType */)arg1 isUsingStingRay:(BOOL)arg2;
- (void)_logGreenTeaLogsForChats:(id)arg1;
- (BOOL)_shouldResyncChatsForError:(id)arg1;
- (NSUInteger)_numberOfChatsToWrite;
- (NSUInteger)_numberOfChatsToFetch;
- (void)_writeCKRecordsToChatZone:(id)arg1 isUsingStingRay:(BOOL)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_lockRecordHadConflict:(id)arg1;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2 isUsingStingRay:(BOOL)arg3;
- (BOOL)_chatZoneCreated;
- (void)_markChatAsDefferedForSyncingUsingRecord:(id)arg1;
- (void)_resetChatSyncStateForRecord:(id)arg1;
- (void)_updateChatUsingCKRecord:(id)arg1;
- (void)_scheduleOperation:(id)arg1;
- (id)_chatZoneID;
- (id)_newckRecordsFromChats:(id)arg1;
- (id)_randomSalt;
- (id)_copyChatsToUploadWithLimit:(NSUInteger)arg1;
- (void)_clearStingRaySyncToken;
@property(retain, nonatomic) CKServerChangeToken *latestSyncToken; // @synthesize latestSyncToken=_latestSyncToken;
- (id)_changeTokenKey;
- (void)_migrateServerChangeToken;
- (void)setLockRecord:(id)arg1 isUsingStingRay:(BOOL)arg2;
- (id)lockRecordForStingRay:(BOOL)arg1;
- (id)_generateLockRecord;
- (long long)syncControllerRecordType;
- (void)dealloc;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;

@end
