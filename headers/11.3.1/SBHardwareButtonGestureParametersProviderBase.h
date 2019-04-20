//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBHardwareButtonGestureParametersProvider.h"

@class NSMapTable, NSString, SBHardwareButtonGestureParameters;

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <SBHardwareButtonGestureParametersProvider, BSDescriptionProviding>
{
    NSMapTable *_observers;
}

- (void).cxx_destruct;
- (void)addHardwareButtonGestureParametersObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, nonatomic) SBHardwareButtonGestureParameters *hardwareButtonGestureParameters;
- (id)init;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
- (void)publishUpdatedParameters:(id)arg1;
- (void)removeHardwareButtonGestureParametersObserver:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
