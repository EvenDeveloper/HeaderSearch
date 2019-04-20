/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownAppToHome.h"

@class SBCenterAppIconZoomAnimator, SBLockToAppStatusBarAnimator, SBLockScreenViewController;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome {
	SBLockScreenViewController* _lockScreenViewController;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
	SBCenterAppIconZoomAnimator* _zoomAnimator;
}
-(id)_zoomSettings;
-(BOOL)_shouldTakeActivationAssertionForDeactivatingApp;
-(void)animateZoomWithCompletion:(id)completion;
-(void)cleanupZoom;
-(void)prepareZoom;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithLockScreenViewController:(id)lockScreenViewController;
@end
