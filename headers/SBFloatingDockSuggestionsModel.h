//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconListModelObserver.h"
#import "SBRecentDisplayItemsControllerDelegate.h"
#import "SBRecentDisplayItemsPersistenceDelegate.h"

@class NSMutableOrderedSet, NSOrderedSet, NSString, SBAnalyticsClient, SBAppSuggestionManager, SBApplicationController, SBBestAppSuggestion, SBFloatingDockDefaults, SBIconController, SBIconListModel, SBIconModel, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults;

@interface SBFloatingDockSuggestionsModel : NSObject <SBRecentDisplayItemsPersistenceDelegate, SBRecentDisplayItemsControllerDelegate, SBIconListModelObserver>
{
    _Bool _recentsEnabled;
    _Bool _switcherTransitioning;
    _Bool _dockFolderTransitioning;
    _Bool _pendingSuggestionUpdateForTransition;
    SBBestAppSuggestion *_currentAppSuggestion;
    id <SBFloatingDockSuggestionsModelDelegate> _delegate;
    unsigned long long _maxSuggestions;
    SBAppSuggestionManager *_appSuggestionManager;
    SBRecentDisplayItemsController *_recentsController;
    SBRecentDisplayItemsDataStore *_recentsDataStore;
    SBRecentDisplayItemsDefaults *_recentsDefaults;
    SBIconListModel *_userDockListModel;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBIconModel *_iconModel;
    SBFloatingDockDefaults *_floatingDockDefaults;
    SBAnalyticsClient *_analyticsClient;
    NSMutableOrderedSet *_currentRecentDisplayItems;
    NSMutableOrderedSet *_currentRecentDisplayItemsSortedByRecency;
}

@property(readonly, nonatomic) NSMutableOrderedSet *currentRecentDisplayItemsSortedByRecency; // @synthesize currentRecentDisplayItemsSortedByRecency=_currentRecentDisplayItemsSortedByRecency;
@property(readonly, nonatomic) NSMutableOrderedSet *currentRecentDisplayItems; // @synthesize currentRecentDisplayItems=_currentRecentDisplayItems;
@property(readonly, nonatomic, getter=_isPendingSuggestionUpdateForTransition) _Bool pendingSuggestionUpdateForTransition; // @synthesize pendingSuggestionUpdateForTransition=_pendingSuggestionUpdateForTransition;
@property(readonly, nonatomic, getter=_isDockFolderTransitioning) _Bool dockFolderTransitioning; // @synthesize dockFolderTransitioning=_dockFolderTransitioning;
@property(readonly, nonatomic, getter=_isSwitcherTransitioning) _Bool switcherTransitioning; // @synthesize switcherTransitioning=_switcherTransitioning;
@property(retain, nonatomic) SBAnalyticsClient *analyticsClient; // @synthesize analyticsClient=_analyticsClient;
@property(nonatomic) _Bool recentsEnabled; // @synthesize recentsEnabled=_recentsEnabled;
@property(readonly, nonatomic) SBFloatingDockDefaults *floatingDockDefaults; // @synthesize floatingDockDefaults=_floatingDockDefaults;
@property(retain, nonatomic) SBIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property(readonly, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property(retain, nonatomic) SBIconListModel *userDockListModel; // @synthesize userDockListModel=_userDockListModel;
@property(readonly, nonatomic) SBRecentDisplayItemsDefaults *recentsDefaults; // @synthesize recentsDefaults=_recentsDefaults;
@property(readonly, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore; // @synthesize recentsDataStore=_recentsDataStore;
@property(readonly, nonatomic) SBRecentDisplayItemsController *recentsController; // @synthesize recentsController=_recentsController;
@property(readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // @synthesize appSuggestionManager=_appSuggestionManager;
@property(readonly, nonatomic) unsigned long long maxSuggestions; // @synthesize maxSuggestions=_maxSuggestions;
@property(nonatomic) __weak id <SBFloatingDockSuggestionsModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBBestAppSuggestion *currentAppSuggestion; // @synthesize currentAppSuggestion=_currentAppSuggestion;
- (void).cxx_destruct;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)_iconModelDidChange:(id)arg1;
- (void)_iconModelDidLayout:(id)arg1;
- (id)_dockListModelFromIconController;
- (void)_reloadRecentsAndSuggestions;
- (void)_addStateCaptureHandlers;
- (id)_displayItemForAppSuggestion:(id)arg1;
- (void)_setRecentsEnabled:(_Bool)arg1;
- (void)_initializeAndObserveDefaults;
- (void)_performAppSuggestionChangedWithNewSuggestion:(id)arg1;
- (void)_appSuggestionsChanged:(id)arg1;
- (unsigned long long)_indexForAppSuggestion:(id)arg1;
- (_Bool)_shouldProcessAppSuggestion:(id)arg1;
- (id)_filterRecentDisplayItems:(id)arg1 filteredOutItems:(id *)arg2;
- (_Bool)_displayItemContainedInUserDock:(id)arg1;
- (void)_updateCurrentDisplayItemsForUpdate:(long long)arg1 oldDiffItem:(id)arg2 atIndex:(long long)arg3 newDiffItem:(id)arg4 atIndex:(long long)arg5;
- (void)recentDisplayItemsController:(id)arg1 didRemoveItem:(id)arg2;
- (void)recentDisplayItemsController:(id)arg1 didMoveItemToFront:(id)arg2;
- (void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2 andDropItem:(id)arg3;
- (void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2;
- (_Bool)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2;
- (void)_handleNewRecentItem:(id)arg1;
- (id)_oldestRecent;
- (id)_moveOrAddRecentThenCull:(id)arg1;
- (_Bool)dataStore:(id)arg1 shouldRestorePersistedDisplayItem:(id)arg2;
- (id)persistedDisplayItemsForDataStore:(id)arg1;
- (void)dataStore:(id)arg1 persistDisplayItems:(id)arg2;
@property(readonly, copy, nonatomic) NSOrderedSet *currentDisplayItems; // @dynamic currentDisplayItems;
- (void)_appSwitcherOrDockFolderDidFinishTransitioning;
- (void)dockFolderDidEndTransitioning;
- (void)dockFolderWillBeginTransitioning;
- (void)_appSwitcherDidEndTransitioning:(id)arg1;
- (void)_appSwitcherWillBeginTransitioning:(id)arg1;
- (void)dockViewDidResignVisible;
- (void)dockViewDidBecomeVisible;
- (void)dealloc;
- (id)init;
- (id)initWithMaximumNumberOfSuggestions:(unsigned long long)arg1 iconController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 recentsDefaults:(id)arg5 floatingDockDefaults:(id)arg6 appSuggestionManager:(id)arg7 analyticsClient:(id)arg8 applicationController:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

