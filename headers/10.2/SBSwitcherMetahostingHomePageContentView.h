//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

#import "FBSceneHostManagerObserver.h"

@class NSMutableSet, NSString, SBAppSwitcherSettings, SBOrientationTransformWrapperView, SBWindowSelfHostWrapper, UIView;

@interface SBSwitcherMetahostingHomePageContentView : SBSwitcherWallpaperPageContentView <FBSceneHostManagerObserver>
{
    SBOrientationTransformWrapperView *_portraitContentWrapper;
    SBOrientationTransformWrapperView *_rotatingContentWrapper;
    UIView *_darkeningView;
    SBWindowSelfHostWrapper *_iconsWindowHostWrapper;
    UIView *_externalHomeScreenSnapshotView;
    SBWindowSelfHostWrapper *_statusBarWindowHostWrapper;
    UIView *_fakeStatusBar;
    SBAppSwitcherSettings *_settings;
    _Bool _presenting;
    _Bool _interactive;
    _Bool _usesSnapshots;
    UIView *_snapshotView;
    NSMutableSet *_snapshotPreventionReasons;
    unsigned long long _snapshotGenerationToken;
}

+ (_Bool)_usesSnapshots;
- (void).cxx_destruct;
- (void)sceneHostManager:(id)arg1 willActivateRequester:(id)arg2;
- (double)_darkeningFactor;
- (long long)_targetWallpaperStyle;
- (void)_handleDidEndSignificantAnimation:(id)arg1;
- (void)_handleWillBeginSignificantAnimation:(id)arg1;
- (void)_handleDidDismissSpotlight:(id)arg1;
- (void)_handleWillDismissSpotlight:(id)arg1;
- (void)_transitionWallpaperWithProgress:(double)arg1 presenting:(_Bool)arg2;
- (void)_createFakeStatusBar;
- (void)_removeDisableSnapshotReason:(id)arg1;
- (void)_addDisableSnapshotReason:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
