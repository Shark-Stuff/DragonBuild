//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <PlatterKit/PLViewControllerAnimatorObserving-Protocol.h>

@class MTLumaDodgePillView, UILabel, UINotificationFeedbackGenerator, UIPanGestureRecognizer, UIView, _UIStatesFeedbackGenerator;
@protocol PLExpandedPlatter, PLExpandedPlatterPresentationControllerDelegate, PLKeyboardHomeAffordanceAssertion, UIViewControllerTransitionCoordinator;

@interface PLExpandedPlatterPresentationController : UIPresentationController <PLViewControllerAnimatorObserving>
{
    UIView *_sourceView;
    UIView<PLExpandedPlatter> *_presentedExpandedPlatter;
    CGRect _sourceViewInitialPresentationFrame;
    CGRect _sourceViewFinalPresentationFrame;
    CGRect _sourceViewFinalDismissalFrame;
    CGAffineTransform _sourceViewInitialTransform;
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    UIView *_dismissLabelContainerView;
    UILabel *_dismissLabel;
    _UIStatesFeedbackGenerator *_dismissFeedbackBehavior;
    UINotificationFeedbackGenerator *_homeAffordanceFeedbackGenerator;
    BOOL _didPlayDismissHaptic;
    CGSize _childPreferredContentSize;
    MTLumaDodgePillView *_homeAffordanceView;
    BOOL _listenToKeyboardEvents;
    struct {
        unsigned int didPerformPresentedExpandedPlatterCheck:1;
        unsigned int didSetSourceViewInitialPresentationFrame:1;
        unsigned int didSetSourceViewFinalPresentationFrame:1;
        unsigned int didSetSourceViewFinalDismissalFrame:1;
    } _expandedPlatterPresentationControllerHelperFlags;
    BOOL _homeAffordanceVisible;
    id <PLExpandedPlatterPresentationControllerDelegate> _presentationControllerDelegate;
    UIPanGestureRecognizer *_homeAffordancePanGesture;
    double _additionalHomeAffordanceSpacing;
    id <PLKeyboardHomeAffordanceAssertion> _keyboardHomeAffordance;
    CGRect _keyboardFrame;
}

+ (CGSize)_sizeOfExpandedPlatter:(id)arg1 withPreferredContentSize:(CGSize)arg2 inContainerViewWithBounds:(CGRect)arg3;
+ (CGRect)useableContainerViewBoundsForExpandedPlatter:(id)arg1 inContainerViewWithBounds:(CGRect)arg2;
+ (CGSize)_sizeOfViewWithPreferredContentSize:(CGSize)arg1 inUseableContainerViewBounds:(CGRect)arg2;
@property(retain, nonatomic, getter=_keyboardHomeAffordance, setter=_setKeyboardHomeAffordance:) id <PLKeyboardHomeAffordanceAssertion> keyboardHomeAffordance; // @synthesize keyboardHomeAffordance=_keyboardHomeAffordance;
@property(nonatomic, getter=_keyboardFrame, setter=_setKeyboardFrame:) CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) double additionalHomeAffordanceSpacing; // @synthesize additionalHomeAffordanceSpacing=_additionalHomeAffordanceSpacing;
@property(retain, nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture; // @synthesize homeAffordancePanGesture=_homeAffordancePanGesture;
@property(nonatomic, getter=isHomeAffordanceVisible) BOOL homeAffordanceVisible; // @synthesize homeAffordanceVisible=_homeAffordanceVisible;
@property(nonatomic) __weak id <PLExpandedPlatterPresentationControllerDelegate> presentationControllerDelegate; // @synthesize presentationControllerDelegate=_presentationControllerDelegate;
// - (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(id /* CDUnknownBlockType */)arg3;
- (CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldMakePresentedViewControllerFirstResponder;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (CGRect)finalDismissalFrameOfPresentingViewInContainerView;
- (CGRect)finalPresentationFrameOfPresentingViewInContainerView;
- (CGRect)initialFrameOfPresentedViewInContainerView;
- (CGRect)initialPresentationFrameOfPresentingViewInContainerView;
- (CGRect)_sourceViewFinalDismissalFrame;
- (CGRect)_sourceViewFinalPresentationFrame;
- (CGRect)_sourceViewInitialPresentationFrame;
- (CGRect)frameOfPresentedViewInContainerView;
- (void)completeDismissal;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (void)_popDismissLabel;
- (CGRect)_dismissLabelContainerViewFrameForPresentedViewFrame:(CGRect)arg1;
- (void)_configureDismissLabelIfNecessary;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (BOOL)_actuateFeedbackForDismissalIfNecessary;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_handleBackgroundTap:(id)arg1;
- (void)_settleHomeAffordance;
- (void)_fireHomeGesture;
- (void)_dismissExpandedPlatterWithTrigger:(long long)arg1;
- (void)_handleHomeAffordancePan:(id)arg1;
- (void)_setKeyboardHomeAffordanceVisible:(BOOL)arg1;
- (BOOL)_isKeyboardHomeAffordanceVisible;
- (void)_setLocalHomeAffordanceVisible:(BOOL)arg1;
- (BOOL)_isLocalHomeAffordanceVisible;
- (void)_setHomeAffordanceVisible:(BOOL)arg1;
- (CGPoint)_contentOffsetForPresentedExpandedPlatterView:(id)arg1;
- (UIEdgeInsets)_contentInsetWithPresentedFrame:(CGRect)arg1 inContainerViewWithBounds:(CGRect)arg2;
- (CGRect)_frameOfPresentedViewInContainerViewWithBounds:(CGRect)arg1;
- (id)_clickPresentationInteractionManager;
- (id)_presentedExpandedPlatter;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;

@end
