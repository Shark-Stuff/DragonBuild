//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/CTCarrierSpaceClientDelegateProxyInterface-Protocol.h>

@protocol CTCarrierSpaceClientDelegate;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface>
{
    id <CTCarrierSpaceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CTCarrierSpaceClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3;
- (void)dataPlanMetricsDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;
- (void)capabilitiesDidChange:(id)arg1;
- (void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(id /* CDUnknownBlockType */)arg2;

@end
