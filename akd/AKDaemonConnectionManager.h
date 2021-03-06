//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface AKDaemonConnectionManager : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_anisetteServiceListener;
    NSXPCListener *_authServiceListener;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCListener *authServiceListener; // @synthesize authServiceListener=_authServiceListener;
@property(retain, nonatomic) NSXPCListener *anisetteServiceListener; // @synthesize anisetteServiceListener=_anisetteServiceListener;
- (void).cxx_destruct;
- (void)_stopObservingLanguageChangeNotification;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_startListeningForMessagesFromPairedDevice;
- (void)_cleanUpUnusedAccounts;
- (void)_checkKeybagUnlockState;
- (void)_checkScreenUnlockStateFromNotificationDictionary:(id)arg1;
- (_Bool)_isDeviceScreenUnlockNotification:(id)arg1;
- (_Bool)_isPasscodeChangeNotification:(id)arg1;
- (void)_monitorXPCEvents;
- (void)_startMonitoringPushEvents;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startForTesting;
- (void)start;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

