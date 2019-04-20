/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBUIAnimationZoomUpDown.h>

@class BSAnimationSettings, UIView, FBWindowContextHostManager, SBAppStatusBarTransitionInfo, SBSceneLayoutElementAnimationWrapperView, SBAppStatusBarSettingsAssertion, BSUIAnimationFactory, NSString;

@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController <SBUIAnimationZoomUpDown> {

	BSAnimationSettings* _animationSettings;
	UIView* _contextHostView;
	BOOL _zoomHostView;
	FBWindowContextHostManager* _activatingContextHostManager;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	long long _animationTransition;
	SBSceneLayoutElementAnimationWrapperView* _placeholderView;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	BOOL _animationFinished;
	UIView* _viewToAnimate;

}

@property (assign,nonatomic) long long animationTransition;                                            //@synthesize animationTransition=_animationTransition - In the implementation block
@property (nonatomic,readonly) BSUIAnimationFactory * crossfadeAnimationFactory; 
@property (nonatomic,readonly) SBAppStatusBarTransitionInfo * appStatusBarTransitionInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                                    //@synthesize animationSettings=_animationSettings - In the implementation block
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(void)_applicationDependencyStateChanged;
-(double)animationDelay;
-(void)cleanupZoom;
-(void)prepareZoom;
-(id)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(void)_willSetupStartDependencies;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_noteZoomDidFinish;
-(id)appStatusBarTransitionInfoWithStartStyleRequest:(id)arg1 startOrientation:(long long)arg2 ;
-(void)noteDependencyDidInvalidate;
-(BSUIAnimationFactory *)crossfadeAnimationFactory;
-(void)setAnimatableWrapperView:(id)arg1 ;
-(BOOL)_shouldWaitForSiriDismissBeforeZooming;
-(SBAppStatusBarTransitionInfo *)appStatusBarTransitionInfo;
-(long long)animationTransition;
-(void)setAnimationTransition:(long long)arg1 ;
-(void)dealloc;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(double)animationDuration;
-(void)_startAnimation;
@end
