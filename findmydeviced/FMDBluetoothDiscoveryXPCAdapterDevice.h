//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDBluetoothDiscoveryDevice-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSString, NSUUID;

@interface FMDBluetoothDiscoveryXPCAdapterDevice : NSObject <FMDBluetoothDiscoveryDevice, NSSecureCoding>
{
    NSUUID *_identifier;
    NSDictionary *_advertisementFields;
    NSString *_name;
    long long _rssi;
    NSData *_bluetoothAddress;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *advertisementFields; // @synthesize advertisementFields=_advertisementFields;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_xpcSafeAdvertisementKeys:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBluetoothDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

