//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDDictionaryRepresentable-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface FMDBatteryInfo : NSObject <NSSecureCoding, FMDDictionaryRepresentable>
{
    long long _batteryType;
    double _batteryLevel;
    long long _batteryState;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(readonly, nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) long long batteryType; // @synthesize batteryType=_batteryType;
- (id)batteryStatusForState:(long long)arg1;
- (void)populateBatterStatsForCurrentDevice;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 level:(double)arg2 state:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
