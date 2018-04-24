//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDAssetRegistry, FMDataArchiver, NSDictionary;
@protocol FMDSupportedAccessoryRegistryDelegate, OS_dispatch_queue;

@interface FMDSupportedAccessoryRegistry : NSObject
{
    id <FMDSupportedAccessoryRegistryDelegate> _delegate;
    NSDictionary *_supportedAccessories;
    NSObject<OS_dispatch_queue> *_serialQueue;
    FMDataArchiver *_dataArchiver;
    FMDAssetRegistry *_assetRegistry;
}

+ (id)defaultStorageLocation;
@property(retain, nonatomic) FMDAssetRegistry *assetRegistry; // @synthesize assetRegistry=_assetRegistry;
@property(retain, nonatomic) FMDataArchiver *dataArchiver; // @synthesize dataArchiver=_dataArchiver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSDictionary *supportedAccessories; // @synthesize supportedAccessories=_supportedAccessories;
@property(nonatomic) __weak id <FMDSupportedAccessoryRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readSupportedAccessoriesFromDisk;
- (id)supportedAccessoryForAccessory:(id)arg1;
- (void)downloadAssetsIfNeededForAccessory:(id)arg1;
- (void)clearSupportedAccessoryRegistry;
- (id)assetsForAccessory:(id)arg1;
- (double)locationThrottleTimeIntervalForAccessory:(id)arg1 speed:(double)arg2;
- (id)locatorForAccessory:(id)arg1;
- (id)advertisementStatusKeyForProfile:(long long)arg1;
- (double)locateDesiredAccuracyForAccessory:(id)arg1;
- (double)locateTimeoutForAccessory:(id)arg1;
- (id)longTermLocationExpiryTimeIntervalForAccessory:(id)arg1;
- (id)shortTermLocationExpiryTimeIntervalForAccessory:(id)arg1;
- (id)maximumHistoricalLocationsForAccessory:(id)arg1;
- (_Bool)isAccessorySupported:(id)arg1;
- (void)resetSupportedAccessoriesVersion;
- (id)supportedAccessoriesVersion;
- (void)updateSupportedAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1;

@end

