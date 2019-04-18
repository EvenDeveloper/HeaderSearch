//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSServiceFacility.h"

@interface SBApplicationServer : FBSServiceFacility
{
    id <SBApplicationServerCarPlayDelegate> _carPlayDelegate;
    id <SBApplicationServerHarmonyDelegate> _harmonyDelegate;
    id <SBApplicationServerShortcutDelegate> _shortcutDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <SBApplicationServerShortcutDelegate> shortcutDelegate; // @synthesize shortcutDelegate=_shortcutDelegate;
@property(nonatomic) __weak id <SBApplicationServerHarmonyDelegate> harmonyDelegate; // @synthesize harmonyDelegate=_harmonyDelegate;
@property(nonatomic) __weak id <SBApplicationServerCarPlayDelegate> carPlayDelegate; // @synthesize carPlayDelegate=_carPlayDelegate;
- (void).cxx_destruct;
- (void)_handleShortcutUpdateDynamicApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleShortcutFetchApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHarmonyFetchWhitePointAdaptivityStyleMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleCarPlayFetchApplication:(id)arg1 fromClient:(id)arg2;
- (void)_handleCarPlayResetIconState:(id)arg1 fromClient:(id)arg2;
- (void)_handleCarPlaySetIconState:(id)arg1 fromClient:(id)arg2;
- (void)_handleCarPlayFetchIconState:(id)arg1 fromClient:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)dealloc;
- (id)_init;

@end

