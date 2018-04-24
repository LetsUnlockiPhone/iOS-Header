//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FMDLostModeInfo, NSData, NSDictionary, NSString;

@protocol FMDFMIPProtocol <NSObject>
- (void)showDailyLocateReport;
- (void)setDailyLocateReportEnabled:(_Bool)arg1;
- (oneway void)clearData:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)soundStoppedForAccessoryIdentifier:(NSString *)arg1;
- (void)playSoundWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getAccessoriesWithCompletion:(void (^)(NSError *, NSArray *))arg1;
- (void)signatureHeadersWithData:(NSData *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)_forceFMWUpgradeAlertUsingCallback:(void (^)(NSError *))arg1;
- (void)setLowBatteryLocateEnabled:(_Bool)arg1 usingCallback:(void (^)(NSError *))arg2;
- (void)lowBatteryLocateEnabledUsingCallback:(void (^)(_Bool, NSError *))arg1;
- (oneway void)initiateLostModeExitAuthForApp:(NSString *)arg1 idsDeviceID:(NSString *)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)didReceiveLostModeExitAuthToken:(NSString *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)activationLockVersionWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)enableActivationLockUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)isActivationLockedUsingCallback:(void (^)(_Bool, NSError *))arg1;
- (oneway void)isActivationLockEnabledUsingCallback:(void (^)(_Bool, NSError *))arg1;
- (oneway void)isActivationLockAllowedUsingCallback:(void (^)(_Bool, NSError *))arg1;
- (oneway void)markPairedDeviceWithUDID:(NSString *)arg1 asMissingUsingToken:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)markAsMissingSupportedForPairedDeviceWithUDID:(NSString *)arg1 usingCallback:(void (^)(_Bool, NSError *))arg2;
- (oneway void)disableFMIPUsingToken:(NSString *)arg1 forPairedDeviceWithUDID:(NSString *)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)disableFMIPUsingToken:(NSString *)arg1 inContext:(unsigned long long)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)enableFMIPInContext:(unsigned long long)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)didChangeFMIPAccountInfo:(NSString *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)getFmipAccountUsingCallback:(void (^)(NSString *, NSString *, NSError *))arg1;
- (oneway void)getFMIPStateUsingCallback:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)getLockdownShouldDisableDevicePairingUsingCallback:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getLockdownShouldDisableDeviceRestoreUsingCallback:(void (^)(_Bool, NSError *))arg1;
- (oneway void)deviceActivationDidSucceedUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)disableLostModeUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)enableLostModeWithInfo:(FMDLostModeInfo *)arg1 usingCallback:(void (^)(NSError *))arg2;
@end

