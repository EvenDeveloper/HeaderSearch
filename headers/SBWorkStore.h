//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SBWorkStore : NSObject
{
    NSMutableDictionary *_workItemsPerKey;
    NSMutableArray *_keysWithWork;
    NSMutableDictionary *_workExpirationPeriods;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _maxWorkPerKey;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    double _defaultWorkExpirationPeriod;
}

@property(readonly, nonatomic) unsigned long long maxWorkPerKey; // @synthesize maxWorkPerKey=_maxWorkPerKey;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableDictionary *workItemsPerKey; // @synthesize workItemsPerKey=_workItemsPerKey;
@property(nonatomic) double defaultWorkExpirationPeriod; // @synthesize defaultWorkExpirationPeriod=_defaultWorkExpirationPeriod;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)_notifyObserversWorkDidChange;
- (void)_workQueue_expireWorkForKey:(id)arg1;
- (void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2;
- (void)purgeWorkForKey:(id)arg1;
- (id)dequeueWorkForKey:(id)arg1;
- (void)addWorkItem:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *keysWithWork;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)arg1;

@end

