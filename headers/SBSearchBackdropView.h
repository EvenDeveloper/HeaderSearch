//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIProgressiveBlur.h"

@class MTMaterialView, NSString, SBWallpaperEffectView;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur>
{
    MTMaterialView *_materialView;
    SBWallpaperEffectView *_effectView;
    UIView *_reduceTransparencyView;
    UIView *_tintView;
    NSString *_privateGroupName;
    _Bool _usesTint;
    unsigned long long _lowQualityStyle;
    _Bool _transitioning;
    _Bool _transitioningToBlur;
    long long _wallpaperVariant;
}

@property(nonatomic) long long wallpaperVariant; // @synthesize wallpaperVariant=_wallpaperVariant;
@property(nonatomic) unsigned long long lowQualityStyle; // @synthesize lowQualityStyle=_lowQualityStyle;
@property(nonatomic) _Bool usesTint; // @synthesize usesTint=_usesTint;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_privateGroupName;
- (void).cxx_destruct;
- (void)completeIncrementalTransitionSuccessfully:(_Bool)arg1;
- (void)completeTransitionSuccessfully:(_Bool)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)prepareForTransitionToBlurred:(_Bool)arg1;
- (_Bool)usesAnimatedBlurRadiusTransition;
- (_Bool)shouldUseBlurView;
- (void)reduceTransparencyStatusDidChange:(id)arg1;
- (void)_createMaterialView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
