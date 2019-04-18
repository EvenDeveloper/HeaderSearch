//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SBAppLayout, SBDisplayItem, SBIconView, SBMainDisplayLayoutState, SBWindow;

@protocol SBMainAppSwitcherContentViewControllerDataSource <NSObject>
- (_Bool)isInAppStatusBarRequestedHidden;
- (long long)homeScreenInterfaceOrientation;
- (long long)switcherInterfaceOrientation;
- (SBWindow *)mainSwitcherWindow;
- (SBIconView *)iconViewForDisplayItem:(SBDisplayItem *)arg1;
- (SBDisplayItem *)_displayItemFromLayoutElementWithIdentifier:(NSString *)arg1;
- (NSArray *)appLayouts;
- (SBMainDisplayLayoutState *)initialLayoutState;
- (SBAppLayout *)initialAppLayout;
- (SBAppLayout *)returnToAppLayout;
@end

