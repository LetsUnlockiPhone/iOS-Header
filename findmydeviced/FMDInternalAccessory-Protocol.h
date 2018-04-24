//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDAccessory-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class FMDCommandContext, NSArray, NSDate, NSDictionary, NSObject, NSString;
@protocol FMDAsset, FMDInternalAccessory;

@protocol FMDInternalAccessory <FMDAccessory, NSSecureCoding>
+ (NSArray *)volatileKeysToExcludeFromRegisterDigest;
@property(readonly, nonatomic) unsigned long long category;
@property(readonly, nonatomic) _Bool nearby;
@property(readonly, nonatomic) unsigned long long inEar;
@property(readonly, nonatomic) FMDCommandContext *commandContext;
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, nonatomic) NSString *name;
- (void)updateWithAccessory:(NSObject<FMDInternalAccessory> *)arg1;
- (_Bool)updatePlaybackChannels:(NSArray *)arg1;
- (_Bool)updateAudioAsset:(id <FMDAsset>)arg1;
- (NSDate *)lastDiscoveryDate;
- (NSDictionary *)deviceInfoForHostCurrentLocation;
- (NSDictionary *)deviceInfoForHostRegister;
- (NSDictionary *)completeDeviceInfo;
- (NSDictionary *)deviceInfo;
- (NSDictionary *)lastKnownLocationDeviceInfo;
- (NSDictionary *)locationDeviceInfo;
@end
