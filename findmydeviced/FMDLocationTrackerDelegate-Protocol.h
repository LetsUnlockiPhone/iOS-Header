//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FMGeoLocatable;

@protocol FMDLocationTrackerDelegate <NSObject>
- (void)didAddNewTrackedLocation:(NSObject<FMGeoLocatable> *)arg1;
@end
