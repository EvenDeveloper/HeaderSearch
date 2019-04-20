//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationControllerGroup.h"

@interface SBUISteppableAnimationControllerGroup : SBUIAnimationControllerGroup
{
    double _percentage;
}

- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (void)setStepPercentage:(double)arg1;
- (double)stepPercentage;
- (_Bool)isStepped;
- (void)addAnimation:(id)arg1;
- (id)initWithAnimations:(id)arg1;

@end
