//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FMDInternalAccessory;

@protocol FMDAccessoryRegistryDelegate <NSObject>

@optional
- (void)accessoryDidConnect:(NSObject<FMDInternalAccessory> *)arg1;
- (void)accessoryDidDisconnect:(NSObject<FMDInternalAccessory> *)arg1;
- (void)accessoryDidUnpair:(NSObject<FMDInternalAccessory> *)arg1;
- (void)accessoryDidPair:(NSObject<FMDInternalAccessory> *)arg1;
- (void)accessoryDidUpdate:(NSObject<FMDInternalAccessory> *)arg1;
@end

