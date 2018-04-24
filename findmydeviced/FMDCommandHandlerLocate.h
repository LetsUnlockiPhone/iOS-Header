//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDCommandHandler.h"

@class FMDAccessoryIdentifier, NSNumber;

@interface FMDCommandHandlerLocate : FMDCommandHandler
{
    FMDAccessoryIdentifier *_accessoryIdentifier;
    NSNumber *_lastPublishedAccuracy;
}

@property(retain, nonatomic) NSNumber *lastPublishedAccuracy; // @synthesize lastPublishedAccuracy=_lastPublishedAccuracy;
@property(retain, nonatomic) FMDAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void).cxx_destruct;
- (id)locationPublisherWithParams:(id)arg1;
- (id)createLocatorWithParams:(id)arg1;
- (void)_showAlertAfterUnlock:(id)arg1;
- (void)_sendTrackedLocations;
- (void)_sendAccessoryCurrentLocationsForCmd:(id)arg1 reason:(long long)arg2 locator:(id)arg3 accessoryIdentifier:(id)arg4;
- (void)_sendCurrentLocation:(id)arg1 isFinished:(_Bool)arg2 forCmd:(id)arg3 withReason:(long long)arg4 andAccuracyChange:(double)arg5;
- (void)sendAckWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCommand;

@end

