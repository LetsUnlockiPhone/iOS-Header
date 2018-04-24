//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDSystemConfig.h"

@interface FMDSystemConfig_ios : FMDSystemConfig
{
    _Bool _deviceNameUpToDate;
    _Bool _passcodeConstraintUpToDate;
    _Bool _passcodeStateUpToDate;
}

- (unsigned long long)alCapability;
- (id)pscSUIURL;
- (id)suinfoLastModifiedTimestamp;
- (id)wristStatusString;
- (long long)connectionStatus;
- (_Bool)canHandleLocates;
- (_Bool)isFMIPLocationServicesEnabled;
- (_Bool)isLocationServicesEnabledForShareMyLocation;
- (_Bool)isLowPowerModeEnabled;
- (id)escrowHash;
- (id)deletablePlans;
- (_Bool)hasCellularCapability;
- (_Bool)isRegionMonitoringAvailable;
- (_Bool)isLocationServicesEnabled;
- (id)currentPasscodeConstraintStr;
- (void)currentPasscodeStateMayNeedUpdate;
- (_Bool)isPasscodeChangeRestricted;
- (_Bool)isPasscodeSet;
- (_Bool)isLocking;
- (unsigned long long)unlockState;
- (_Bool)isLocked;
- (int)currentPasscodeConstraint;
- (id)locale;
- (id)timezone;
- (id)btMacAddress;
- (id)wifiMacAddress;
- (id)ecid;
- (id)chipId;
- (id)serialNumber;
- (id)mobileEquipmentIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (_Bool)hasNFC;
- (_Bool)hasSecureElement;
- (id)backOfEnclosureColor;
- (id)housingColor;
- (id)coverGlassColor;
- (id)deviceEnclosureColor;
- (id)deviceColor;
- (_Bool)allowsActivationLock;
- (_Bool)isBuddyDone;
- (id)platform;
- (id)deviceRegion;
- (id)deviceModel;
- (id)buildVersion;
- (id)productVersion;
- (id)productName;
- (id)productType;
- (id)deviceUDID;
- (long long)deviceClass;
- (id)deviceClassString;
- (void)deviceNameMayNeedUpdate;
- (id)deviceName;
- (_Bool)_boolGestaltQueryForKey:(struct __CFString *)arg1;
- (id)_numberGestaltQueryForKey:(struct __CFString *)arg1;
- (id)_stringGestaltQueryForKey:(struct __CFString *)arg1;
- (void)_handleGestaltError:(int)arg1 forKey:(struct __CFString *)arg2;
- (void)initializeSystemConfig;
- (id)init;
- (void)dealloc;

@end

