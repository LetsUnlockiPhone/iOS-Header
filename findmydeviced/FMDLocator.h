//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class NSString, NSTimer;
@protocol FMDLocationManaging, FMLocatorPublishing;

@interface FMDLocator : NSObject <CLLocationManagerDelegate>
{
    _Bool _locatorRunning;
    double _desiredAccuracy;
    double _duration;
    CDUnknownBlockType _stoppedLocatorBlock;
    NSObject<FMLocatorPublishing> *_locatorPublisher;
    double _launchTime;
    NSObject<FMDLocationManaging> *_locManager;
    NSTimer *_finishedTimer;
}

@property(retain, nonatomic) NSTimer *finishedTimer; // @synthesize finishedTimer=_finishedTimer;
@property(retain, nonatomic) NSObject<FMDLocationManaging> *locManager; // @synthesize locManager=_locManager;
@property(nonatomic) double launchTime; // @synthesize launchTime=_launchTime;
@property(retain, nonatomic) NSObject<FMLocatorPublishing> *locatorPublisher; // @synthesize locatorPublisher=_locatorPublisher;
@property(nonatomic) _Bool locatorRunning; // @synthesize locatorRunning=_locatorRunning;
@property(copy, nonatomic) CDUnknownBlockType stoppedLocatorBlock; // @synthesize stoppedLocatorBlock=_stoppedLocatorBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (void).cxx_destruct;
- (void)_processStopTimeout:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopLocator;
- (void)startLocator;
- (id)xpcTransactionName;
- (id)powerAssertionName;
- (id)initWithLocationManager:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

