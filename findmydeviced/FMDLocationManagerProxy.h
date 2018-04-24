//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDLocationManaging-Protocol.h"

@class FMWeakWrapper, NSString;
@protocol CLLocationManagerDelegate, FMDLocationManaging;

@interface FMDLocationManagerProxy : NSObject <FMDLocationManaging>
{
    CDUnknownBlockType _proxyDeallocationBlock;
    NSObject<FMDLocationManaging> *_locationManager;
    FMWeakWrapper *_locationManagerWeakWrapper;
}

@property(retain, nonatomic) FMWeakWrapper *locationManagerWeakWrapper; // @synthesize locationManagerWeakWrapper=_locationManagerWeakWrapper;
@property(nonatomic) __weak NSObject<FMDLocationManaging> *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) CDUnknownBlockType proxyDeallocationBlock; // @synthesize proxyDeallocationBlock=_proxyDeallocationBlock;
- (void).cxx_destruct;
@property(nonatomic) id <CLLocationManagerDelegate> delegate;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)dealloc;
- (id)initWithLocationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

