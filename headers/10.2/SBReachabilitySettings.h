//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBReachabilitySettings : SBUISettings
{
    _Bool _allowOnAllDevices;
    double _reachabilityDefaultKeepAlive;
    double _reachabilityInteractiveKeepAlive;
    double _yOffsetFactor;
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    double _reducedMotionSlideDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) double reducedMotionSlideDuration; // @synthesize reducedMotionSlideDuration=_reducedMotionSlideDuration;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double yOffsetFactor; // @synthesize yOffsetFactor=_yOffsetFactor;
@property(nonatomic) double reachabilityInteractiveKeepAlive; // @synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive;
@property(nonatomic) double reachabilityDefaultKeepAlive; // @synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive;
@property(nonatomic) _Bool allowOnAllDevices; // @synthesize allowOnAllDevices=_allowOnAllDevices;
- (id)animationFactory;
- (void)setDefaultValues;

@end
