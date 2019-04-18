//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconListViewDraggingPolicyHandling.h"

@class NSMapTable, NSString, SBIconListViewDraggingDestinationDelegate;

@interface SBIconListViewDraggingAppPolicyHandler : NSObject <SBIconListViewDraggingPolicyHandling>
{
    NSMapTable *_dragContexts;
    SBIconListViewDraggingDestinationDelegate *_draggingDestinationDelegate;
}

@property(nonatomic) __weak SBIconListViewDraggingDestinationDelegate *draggingDestinationDelegate; // @synthesize draggingDestinationDelegate=_draggingDestinationDelegate;
- (void).cxx_destruct;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (id)_destinationFolderIconViewForDragItem:(id)arg1 iconIndexPath:(id *)arg2 folderRelativeIconIndexPath:(id *)arg3;
- (id)_iconViewForDragItem:(id)arg1;
- (id)_iconForDragItem:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)handleSpringLoadOnIconView:(id)arg1;
- (_Bool)allowsSpringLoadOnIconView:(id)arg1;
- (void)_updateDragPreviewIconLabelsForDropSession:(id)arg1;
- (void)_updateDragPauseForDropSession:(id)arg1;
- (void)_updateIconViewWallpaperRelativeIconCenterInIconListView:(id)arg1 forDropSession:(id)arg2;
- (void)_dragPauseTimerFired:(id)arg1;
- (void)_resetDragPauseTimerForPoint:(struct CGPoint)arg1 dropSession:(id)arg2;
- (void)_cancelDragPauseTimerForDropSession:(id)arg1;
- (void)_cancelDragPauseTimers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

