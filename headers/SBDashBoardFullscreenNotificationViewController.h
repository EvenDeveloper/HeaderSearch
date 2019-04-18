//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardModalViewControllerBase.h"

#import "SBDashBoardModalViewDelegate.h"
#import "SBDashBoardNotificationDestination.h"

@class NCNotificationAction, NCNotificationRequest, NSString;

@interface SBDashBoardFullscreenNotificationViewController : SBDashBoardModalViewControllerBase <SBDashBoardModalViewDelegate, SBDashBoardNotificationDestination>
{
    NCNotificationRequest *_request;
    NCNotificationAction *_primaryAction;
    NCNotificationAction *_secondaryAction;
    NCNotificationAction *_silenceAction;
    NCNotificationAction *_dismissAction;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
}

@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_request;
- (void).cxx_destruct;
- (void)_dismissFromSignificantUserInteraction;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
- (_Bool)isPresentingNotificationInLongLook;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)lockButtonPressed:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)_handleAction:(id)arg1 withName:(id)arg2;
- (void)_handleSilenceAction;
- (void)_handleDismissAction;
- (void)_handleSecondaryAction;
- (void)_handlePrimaryAction;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNotificationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

