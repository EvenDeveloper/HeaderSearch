//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCUIModularControlCenterViewControllerDelegate.h"

@class CCUIModularControlCenterOverlayViewController;

@protocol CCUIModularControlCenterOverlayViewControllerDelegate <CCUIModularControlCenterViewControllerDelegate>
- (id <UIViewSpringAnimationBehaviorDescribing>)reachabilitySpringAnimationBehaviorForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (double)reachabilityOffsetForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 wantsHostStatusBarHidden:(_Bool)arg2;

@optional
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 significantPresentationProgressChange:(double)arg2;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 didChangePresentationState:(unsigned long long)arg2;
@end

