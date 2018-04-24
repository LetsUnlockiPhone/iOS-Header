//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDBluetoothDiscoveryTokenDelegate-Protocol.h"

@class FMDDispatchTimer, NSDate, NSMutableArray, NSString;
@protocol FMDDeviceDiscovering, OS_dispatch_queue;

@interface FMDBluetoothDiscoveryCoordinator : NSObject <FMDBluetoothDiscoveryTokenDelegate>
{
    _Bool _isDiscoveryActive;
    CDUnknownBlockType _didEndDiscovery;
    CDUnknownBlockType _didStartDiscovery;
    CDUnknownBlockType _didDiscoverDevice;
    CDUnknownBlockType _didLoseDevice;
    NSObject<FMDDeviceDiscovering> *_discovery;
    NSMutableArray *_activeTokens;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSDate *_discoveryEndDate;
    FMDDispatchTimer *_discoveryTimer;
}

@property(retain, nonatomic) FMDDispatchTimer *discoveryTimer; // @synthesize discoveryTimer=_discoveryTimer;
@property(retain, nonatomic) NSDate *discoveryEndDate; // @synthesize discoveryEndDate=_discoveryEndDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *activeTokens; // @synthesize activeTokens=_activeTokens;
@property(retain, nonatomic) NSObject<FMDDeviceDiscovering> *discovery; // @synthesize discovery=_discovery;
@property(copy, nonatomic) CDUnknownBlockType didLoseDevice; // @synthesize didLoseDevice=_didLoseDevice;
@property(copy, nonatomic) CDUnknownBlockType didDiscoverDevice; // @synthesize didDiscoverDevice=_didDiscoverDevice;
@property(copy, nonatomic) CDUnknownBlockType didStartDiscovery; // @synthesize didStartDiscovery=_didStartDiscovery;
@property(copy, nonatomic) CDUnknownBlockType didEndDiscovery; // @synthesize didEndDiscovery=_didEndDiscovery;
@property(nonatomic) _Bool isDiscoveryActive; // @synthesize isDiscoveryActive=_isDiscoveryActive;
- (void).cxx_destruct;
- (void)updateDisccovery;
- (void)scanningTimerFired;
- (void)startDiscoveryTimerWithDuration:(double)arg1;
- (void)didEndDiscoveryWithError:(id)arg1;
- (void)discoveryRequestedStart:(id)arg1;
- (void)discoveryRequestedStop:(id)arg1;
- (_Bool)isDiscoveryActive:(id)arg1;
- (id)newDiscovery;
- (id)initWithDiscovery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

