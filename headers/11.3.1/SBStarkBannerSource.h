//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"

@class NSMutableArray, NSString;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver>
{
    id <SBStarkSessionConfiguring> _configuration;
    void *_allowedTargetIdentifier;
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
}

- (void).cxx_destruct;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
@property(readonly, nonatomic) id <SBStarkSessionConfiguring> configuration; // @synthesize configuration=_configuration;
- (id)currentItemFromTarget;
- (void)dealloc;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (void)dismissCurrentItemFromTarget;
- (void)enqueueItem:(id)arg1;
- (unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)indexesOfEnqueuedItemsMatchingContext:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;
- (id)newBannerViewForContext:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (void)removeEnqueuedItemsAtIndexes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
