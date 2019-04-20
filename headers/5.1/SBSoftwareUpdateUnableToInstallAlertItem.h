/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSError;

@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateAlertItem {
	NSError* _error;
}
@property(retain, nonatomic) NSError* error;
-(void)dealloc;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)buildUnavailableSheet;
-(void)buildDefaultSheetWithBody:(id)body isLocked:(BOOL)locked;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)reappearsAfterLock;
-(BOOL)undimsScreen;
-(BOOL)shouldShowInLockScreen;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)dismissOnLock;
@end
