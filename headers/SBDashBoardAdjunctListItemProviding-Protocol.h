//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBSLockScreenContentAction, UIView, UIViewController<SBDashBoardAdjunctItemHosting>;

@protocol SBDashBoardAdjunctListItemProviding <NSObject>
@property(retain, nonatomic) UIViewController<SBDashBoardAdjunctItemHosting> *contentHost;
@property(retain, nonatomic) UIView *platterView;
@property(readonly, nonatomic) SBSLockScreenContentAction *action;
@property(readonly, nonatomic) NSString *identifier;
@end

