//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/WiFiAwareDataSessionDelegate-Protocol.h>

@class CUNANEndpoint, NSString, WiFiAwareDataSession, WiFiAwarePublisher, WiFiAwarePublisherDataSessionHandle;
@protocol OS_dispatch_queue;

@interface CUNANDataSession : NSObject <WiFiAwareDataSessionDelegate>
{
    id /* CDUnknownBlockType */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory _ucat;
    WiFiAwareDataSession *_wfaDataSessionClient;
    unsigned int _localInterfaceIndex;
    unsigned int _trafficFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    NSString *_label;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    CUNANEndpoint *_peerEndpoint;
    WiFiAwarePublisher *_publisher;
    WiFiAwarePublisherDataSessionHandle *_wfaDataSessionServer;
    CDUnion_fab80606 _peerAddress;
}

@property(retain, nonatomic) WiFiAwarePublisherDataSessionHandle *wfaDataSessionServer; // @synthesize wfaDataSessionServer=_wfaDataSessionServer;
@property(retain, nonatomic) WiFiAwarePublisher *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) unsigned int trafficFlags; // @synthesize trafficFlags=_trafficFlags;
@property(retain, nonatomic) CUNANEndpoint *peerEndpoint; // @synthesize peerEndpoint=_peerEndpoint;
@property(nonatomic) CDUnion_fab80606 peerAddress; // @synthesize peerAddress=_peerAddress;
@property(nonatomic) unsigned int localInterfaceIndex; // @synthesize localInterfaceIndex=_localInterfaceIndex;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;
- (BOOL)_dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 error:(id )arg4;
- (void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
- (void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)dataSessionRequestStarted:(id)arg1;
- (void)_terminateServerDataSession;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)descriptionWithLevel:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

@end
