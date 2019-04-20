//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

@class SBWorkspaceApplication, UIView;

@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController
{
    _Bool _relaunchExpected;
    _Bool _appWasActivating;
    UIView *_staticAppView;
    UIView *_hostView;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (_Bool)_shouldDismissBanner;
- (void)_hideAppHostView;
- (void)_willBeginWaitingForStartDependencies;
- (_Bool)__animationShouldStart;
- (_Bool)_willAnimate;
@property(readonly, nonatomic) SBWorkspaceApplication *app;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
- (id)initWithApp:(id)arg1 starkScreenController:(id)arg2;

@end
