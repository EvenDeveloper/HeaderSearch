//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UILegibilitySettings;

@protocol SBWallpaperObserver <NSObject>

@optional
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperGeometryDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(_UILegibilitySettings *)arg1 forVariant:(long long)arg2;
- (void)wallpaperWillChangeForVariant:(long long)arg1;
@end
