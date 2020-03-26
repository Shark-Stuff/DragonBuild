//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer, _WKUserInitiatedAction;

@interface WBSURLSpoofingMitigator : NSObject
{
    NSDate *_dateOfStartOfLastProvisionalNavigation;
    NSUInteger _recentlyInterruptedNavigationCount;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSTimer *_timerForRevertingToCommittedURL;
    BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;
    long long _navigationSource;
}

+ (BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
@property(nonatomic) long long navigationSource; // @synthesize navigationSource=_navigationSource;
@property(readonly, nonatomic) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL; // @synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL;
// - (void).cxx_destruct;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)didCommitNavigation;
- (void)didFailProvisionalNavigationWithError:(id)arg1;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1;

@end
