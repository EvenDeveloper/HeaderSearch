//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLPlatterView.h"

@class SBBannerContextView, SBUIBannerContext;

@interface SBBannerContainerView : PLPlatterView
{
    SBBannerContextView *_bannerContextView;
}

@property(retain, nonatomic) SBBannerContextView *bannerContextView; // @synthesize bannerContextView=_bannerContextView;
- (void).cxx_destruct;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
@property(readonly, retain, nonatomic) SBUIBannerContext *bannerContext;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
