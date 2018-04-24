//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDServiceProvider.h"

#import "FMDLocationTrackerDelegate-Protocol.h"

@class FMDLocationTracker, NSString;

@interface FMDDeviceActionsServiceProvider : FMDServiceProvider <FMDLocationTrackerDelegate>
{
    FMDLocationTracker *_locationTracker;
}

@property(retain, nonatomic) FMDLocationTracker *locationTracker; // @synthesize locationTracker=_locationTracker;
- (void).cxx_destruct;
- (void)sendTrackedLocations:(id)arg1 withCurrentLocation:(id)arg2;
- (void)didAddNewTrackedLocation:(id)arg1;
- (void)lostModeDisabled:(id)arg1;
- (void)sendLostModeExitAuthWithToken:(id)arg1;
- (_Bool)setPasscodeLock:(id)arg1 statusCode:(long long *)arg2;
- (void)recordLocation:(id)arg1 ofType:(unsigned char)arg2;
- (void)deregisterCommonNotifications;
- (void)registerCommonNotifications;
- (void)_cleanupFMIPPreferences;
- (void)accountRemoveRequestedWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountAdded;
- (void)willMakeProviderInactive;
- (void)didMakeProviderActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

