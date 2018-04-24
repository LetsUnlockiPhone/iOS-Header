//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDBluetoothManagerDelegate-Protocol.h"
#import "FMDNanoRegistryDelegate-Protocol.h"

@class FMDAccessoryRegistry, NSString;

@interface FMDAccessoryRegistryDelegateAdaptor : NSObject <FMDBluetoothManagerDelegate, FMDNanoRegistryDelegate>
{
    FMDAccessoryRegistry *_registry;
}

@property(retain, nonatomic) FMDAccessoryRegistry *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)bluetoothManagerDidUpdateDevice:(id)arg1;
- (void)bluetoothManagerDidUnpairDevice:(id)arg1;
- (void)bluetoothManagerDidDisconnectDevice:(id)arg1;
- (void)bluetoothManagerDidConnectDevice:(id)arg1;
- (void)nanoRegistryDidUpdateAccessories:(id)arg1;
- (id)initWithAccessoryRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

