//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBFAuthenticationResponder.h"
#import "SBIdleTimerBehaviorProviding.h"
#import "SBPasscodeEntryAlertViewDelegate.h"
#import "SBUIPasscodeLockViewDelegate.h"
#import "SBWorkspaceAlertAnimationProviding.h"

@class NSString;

@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate, SBFAuthenticationResponder, SBPasscodeEntryAlertViewDelegate, SBIdleTimerBehaviorProviding, SBWorkspaceAlertAnimationProviding>
{
    _Bool _wantsToHandleItsOwnAnimation;
    id <SBPasscodeEntryAlertViewControllerDelegate> _delegate;
    _Bool _attemptingUnlock;
    id <SBUIPasscodeLockView> _passcodeRequester;
    _Bool _showEmergencyCallButton;
    _Bool _useBiometricPresentation;
    _Bool _animatePasscodePresentation;
    NSString *_unlockDestination;
}

@property(nonatomic) _Bool animatePasscodePresentation; // @synthesize animatePasscodePresentation=_animatePasscodePresentation;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(nonatomic) _Bool useBiometricPresentation; // @synthesize useBiometricPresentation=_useBiometricPresentation;
@property(nonatomic) _Bool showEmergencyCallButton; // @synthesize showEmergencyCallButton=_showEmergencyCallButton;
@property(nonatomic) _Bool wantsToHandleItsOwnAnimation; // @synthesize wantsToHandleItsOwnAnimation=_wantsToHandleItsOwnAnimation;
@property(nonatomic) __weak id <SBPasscodeEntryAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_presentEmergencyCall;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (void)_attemptUnlock:(id)arg1 passcode:(id)arg2;
- (id)_passcodeEntryAlertView;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (void)_authenticationSuccess:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationFailure:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationCancelled;
- (void)_configurePasscodeView:(id)arg1;
- (_Bool)canSuggestSwipeToRetry;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (_Bool)passcodeAlertViewShouldAnimatePresentation:(id)arg1;
- (id)_displayLayoutElementIdentifier;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)hasTranslucentBackground;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

