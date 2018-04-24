//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMLocatorPublishing-Protocol.h"

@class NSNumber, NSString;
@protocol FMGeoLocatable;

@interface FMDTrackedLocationPublisher : NSObject <FMLocatorPublishing>
{
    _Bool _startedPublishing;
    NSNumber *_startThreshold;
    NSNumber *_endThreshold;
    NSNumber *_decayFactor;
    NSNumber *_publishTimeInterval;
    NSNumber *_minimumDistance;
    NSNumber *_cachedLocationValidityTimeInterval;
    CDUnknownBlockType _publishingBlock;
    NSObject<FMGeoLocatable> *_lastLocation;
    NSObject<FMGeoLocatable> *_lastPublishedLocation;
}

@property(retain, nonatomic) NSObject<FMGeoLocatable> *lastPublishedLocation; // @synthesize lastPublishedLocation=_lastPublishedLocation;
@property(retain, nonatomic) NSObject<FMGeoLocatable> *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) _Bool startedPublishing; // @synthesize startedPublishing=_startedPublishing;
@property(copy, nonatomic) CDUnknownBlockType publishingBlock; // @synthesize publishingBlock=_publishingBlock;
@property(retain, nonatomic) NSNumber *cachedLocationValidityTimeInterval; // @synthesize cachedLocationValidityTimeInterval=_cachedLocationValidityTimeInterval;
@property(retain, nonatomic) NSNumber *minimumDistance; // @synthesize minimumDistance=_minimumDistance;
@property(retain, nonatomic) NSNumber *publishTimeInterval; // @synthesize publishTimeInterval=_publishTimeInterval;
@property(retain, nonatomic) NSNumber *decayFactor; // @synthesize decayFactor=_decayFactor;
@property(retain, nonatomic) NSNumber *endThreshold; // @synthesize endThreshold=_endThreshold;
@property(retain, nonatomic) NSNumber *startThreshold; // @synthesize startThreshold=_startThreshold;
- (void).cxx_destruct;
- (void)flushLocations;
- (void)_publishResultLocation:(id)arg1 reason:(long long)arg2;
- (void)updatedLocations:(id)arg1 reason:(long long)arg2;
- (void)updatedLocations:(id)arg1;
- (void)startPublishingWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
