//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBestAppSuggestion.h"

@class NSString, NSUUID;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion
{
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)uniqueIdentifier;

@end
