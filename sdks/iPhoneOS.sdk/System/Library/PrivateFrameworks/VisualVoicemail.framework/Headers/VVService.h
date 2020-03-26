//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSRecursiveLock, NSString, VMCarrierStateRequestController, VMTranscriptionService, VVVerifier;
@protocol OS_dispatch_queue, VMTelephonySubscription;

@interface VVService : NSObject
{
    NSRecursiveLock *_lock;
    int _mailboxUsage;
    double _trashCompactionAge;
    NSError *_passwordError;
    NSError *_activationError;
    NSString *_password;
    NSString *_passwordMailboxName;
    NSArray *_retryIntervals;
    int _retryIntervalIndex;
    id _carrierParameters;
    Class _notificationInterpreter;
    struct {
        unsigned int offline:1;
        unsigned int subscribed:1;
        unsigned int initialSetupRequired:1;
        unsigned int fakeInitialSetup:1;
        unsigned int launchedWithFakeInitialSetup:1;
        unsigned int mwiState:1;
        unsigned int notificationFallbackEnabled:1;
        unsigned int capabilitiesLoaded:1;
    } _serviceFlags;
    BOOL _cellularNetworkAvailable;
    BOOL _SMSReady;
    BOOL _WiFiNetworkReachable;
    BOOL _WiFiNetworkSupported;
    BOOL _mailboxUsageUpdated;
//     struct os_unfair_lock_s _accessorLock;
    NSString *_isoCountryCode;
    NSMutableDictionary *_stateRequestAttemptCount;
    NSUInteger _trashedCount;
    NSUInteger _unreadCount;
    NSString *_serviceIdentifier;
    NSString *_serviceDestinationID;
    VMTranscriptionService *_transcriptionService;
    VVVerifier *_verifier;
    id <VMTelephonySubscription> _subscription;
    NSUInteger _numFailedAttemptsToSyncOverWifi;
    struct __CFString _lastConnectionTypeUsed;
    NSDictionary *_accountDictionary;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    VMCarrierStateRequestController *_stateRequestController;
}

+ (id)accountDictionaryForURL:(id)arg1;
+ (void)releaseInsomniaAssertion;
+ (void)obtainInsomniaAssertion;
+ (void)_setInsomniaStateSupressed:(BOOL)arg1;
+ (void)_acquireAssertionsForInsomniaState:(BOOL)arg1;
+ (unsigned int)_voicemailPowerAssertion;
+ (struct __CTServerConnection )CTServerConnection;
+ (BOOL)sharedServiceIsSubscribed;
+ (BOOL)_lockedSharedServiceIsSubscribed;
+ (id)serviceWithIdentifier:(id)arg1 destinationID:(id)arg2 name:(id)arg3 isoCountryCode:(id)arg4 subscription:(id)arg5 stateRequestController:(id)arg6;
+ (void)_subscriptionStateChanged;
+ (void)initialize;
@property(readonly, nonatomic) VMCarrierStateRequestController *stateRequestController; // @synthesize stateRequestController=_stateRequestController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(retain, nonatomic) NSDictionary *accountDictionary; // @synthesize accountDictionary=_accountDictionary;
@property(nonatomic) struct __CFString lastConnectionTypeUsed; // @synthesize lastConnectionTypeUsed=_lastConnectionTypeUsed;
@property(nonatomic) NSUInteger numFailedAttemptsToSyncOverWifi; // @synthesize numFailedAttemptsToSyncOverWifi=_numFailedAttemptsToSyncOverWifi;
// @property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) id <VMTelephonySubscription> subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) VVVerifier *verifier; // @synthesize verifier=_verifier;
@property(retain, nonatomic) VMTranscriptionService *transcriptionService; // @synthesize transcriptionService=_transcriptionService;
@property(copy, nonatomic) NSString *serviceDestinationID; // @synthesize serviceDestinationID=_serviceDestinationID;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
// - (void).cxx_destruct;
- (void)removeServiceInformation;
- (void)performSynchronousBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performAtomicAccessorBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSMutableDictionary *stateRequestAttemptCount; // @synthesize stateRequestAttemptCount=_stateRequestAttemptCount;
- (void)removeAttemptCountForStateRequest:(id)arg1;
- (void)incrementAttemptCountForStateRequest:(id)arg1;
- (long long)attemptCountForStateRequest:(id)arg1;
- (void)handleCPNetworkObserverNetworkReachableNotification:(id)arg1;
- (void)handleVVServiceDataAvailableNotification:(id)arg1;
- (void)handleVoicemailInfoUpdate:(id)arg1;
- (struct __CFString )dataConnectionServiceTypeOverride;
- (void)scheduleImmediateSynchronizeRetryOverCellular;
- (BOOL)lastUsedConnectionTypeWasCellular;
- (void)setLastUsedConnectionType:(struct __CFString )arg1;
- (BOOL)shouldImmediatelyRetrySyncOverCellular;
- (void)reportSucessfulSync;
- (void)reportFailedToSyncOverWifi;
- (void)_attemptScheduledTrashCompaction:(id)arg1;
- (void)_cancelAutomatedTrashCompaction;
- (void)cancelAutomatedTrashCompaction;
- (void)_scheduleAutomatedTrashCompaction;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (id)retryIntervals;
- (void)_attemptDelayedSynchronize;
- (void)resetDelayedSynchronizationAttemptCount;
- (void)cancelDelayedSynchronize;
- (void)reportError:(id)arg1;
- (void)moveRecordsWithIdentifiersToInbox:(id)arg1;
- (void)moveRecordsWithIdentifiersToTrash:(id)arg1;
- (void)movePendingMessagesToInboxTask:(id)arg1;
- (void)movePendingMessagesToTrashTask:(id)arg1;
- (void)setGreetingType:(long long)arg1 data:(id)arg2 duration:(NSUInteger)arg3 forAccountUUID:(id)arg4;
- (BOOL)greetingAvailable;
- (void)retrieveGreetingForAccountUUID:(id)arg1;
- (void)setPasscode:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)clearRemoteUIDsForDetachedMessages;
- (void)retrieveDataForRecord:(void )arg1;
- (void)synchronize:(BOOL)arg1;
- (BOOL)isSyncInProgress;
- (BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL )arg1;
- (BOOL)synchronizationPending;
- (BOOL)headerChangesPending;
- (BOOL)dataForRecordPending:(void )arg1 progressiveLoadInProgress:(BOOL )arg2;
- (void)progressiveDataLengthsForRecord:(void )arg1 expected:(unsigned int )arg2 current:(unsigned int )arg3;
- (BOOL)taskOfTypeExists:(long long)arg1;
- (BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
- (BOOL)doesClientManageTrashCompaction;
- (id)carrierParameterValueForKey:(id)arg1;
- (long long)mailboxGreetingType;
- (BOOL)passwordChangeRequiresEnteringOldPassword;
- (int)maximumPasswordLength;
- (int)minimumPasswordLength;
- (int)maximumRecordedNameDuration;
- (void)cancelPasswordRequest;
- (void)displayPasswordRequestIfNecessary;
- (void)handlePasswordRequestCancellation;
- (id)provisionalPassword;
- (void)setProvisionalPassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)passwordIgnoringSubscription:(BOOL)arg1;
- (id)password;
- (BOOL)isPasswordReady;
- (BOOL)respectsMWINotifications;
- (void)handleNotification:(id)arg1 isMWI:(BOOL)arg2;
- (Class)notificationInterpreterClass;
- (void)_cancelIndicatorAction;
- (void)_reactToIndicator;
- (void)setMessageWaiting:(BOOL)arg1;
- (BOOL)isMessageWaiting;
- (BOOL)isInSync;
- (void)_scheduleFallbackActivityIfNecessary;
- (void)_enterFallbackMode;
- (void)_deliverFallbackNotification;
- (void)cancelNotificationFallback;
- (void)_handleSMSCAvailable;
- (void)clearActivationError;
- (id)activationError;
- (void)_setActivationError:(id)arg1;
- (void)_updateOnlineStatus;
- (BOOL)isOfflineDueToRoaming;
- (BOOL)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary )arg1;
- (struct __CFString )connectionServiceType;
- (void)setOnline:(BOOL)arg1;
- (void)_setOnline:(BOOL)arg1 fallbackMode:(BOOL)arg2;
- (BOOL)isOnline;
@property(nonatomic) NSUInteger unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) NSUInteger trashedCount; // @synthesize trashedCount=_trashedCount;
@property(nonatomic, getter=isSMSReady) BOOL SMSReady; // @synthesize SMSReady=_SMSReady;
@property(nonatomic, getter=isMailboxUsageUpdated) BOOL mailboxUsageUpdated; // @synthesize mailboxUsageUpdated=_mailboxUsageUpdated;
@property(nonatomic, getter=isWiFiNetworkSupported) BOOL WiFiNetworkSupported; // @synthesize WiFiNetworkSupported=_WiFiNetworkSupported;
@property(nonatomic, getter=isWiFiNetworkReachable) BOOL WiFiNetworkReachable; // @synthesize WiFiNetworkReachable=_WiFiNetworkReachable;
@property(readonly, nonatomic, getter=isWiFiNetworkAvailable) BOOL WiFiNetworkAvailable;
@property(readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic, getter=isCellularNetworkAvailable) BOOL cellularNetworkAvailable; // @synthesize cellularNetworkAvailable=_cellularNetworkAvailable;
- (void)resetCounts;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)setMailboxUsage:(int)arg1;
- (int)mailboxUsage;
- (BOOL)sharedSubscriptionRequiresSetup;
- (void)setMailboxRequiresSetup:(BOOL)arg1;
- (BOOL)mailboxRequiresSetup;
- (id)mailboxName;
- (void)kill;
- (void)setSubscribed:(BOOL)arg1;
- (id)accountParamsAtFilePath:(id)arg1;
- (id)parametersFilePathForUUIDString:(id)arg1;
- (BOOL)isSubscribed;
- (void)dealloc;
- (id)initWithServiceIdentifier:(id)arg1 destinationID:(id)arg2 isoCountryCode:(id)arg3 subscription:(id)arg4 stateRequestController:(id)arg5;
- (void)_callStatusChanged;
- (void)_carrierBundleChanged;
- (void)handleDataContextDeactivated;
- (void)_dataRoamingStatusChanged;
- (BOOL)doTrashCompaction;
- (BOOL)shouldTrashCompactRecord:(void )arg1;
- (double)trashCompactionAge;

@end
