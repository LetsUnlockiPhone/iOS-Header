//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDRequest, NSDate, NSMutableDictionary, NSString, PCPersistentTimer;

@interface FMDRequestRetryHelper : NSObject
{
    NSString *_nextRetryType;
    long long _totalRetryCount;
    CDUnknownBlockType _retryAction;
    FMDRequest *_request;
    NSMutableDictionary *_totalRetriesByType;
    NSMutableDictionary *_consecutiveRetriesByType;
    NSString *_lastRetryType;
    NSDate *_lastRetryTime;
    NSDate *_nextRetryTime;
    PCPersistentTimer *_retryTimer;
}

@property(retain, nonatomic) PCPersistentTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSDate *nextRetryTime; // @synthesize nextRetryTime=_nextRetryTime;
@property(retain, nonatomic) NSDate *lastRetryTime; // @synthesize lastRetryTime=_lastRetryTime;
@property(retain, nonatomic) NSString *lastRetryType; // @synthesize lastRetryType=_lastRetryType;
@property(retain, nonatomic) NSMutableDictionary *consecutiveRetriesByType; // @synthesize consecutiveRetriesByType=_consecutiveRetriesByType;
@property(retain, nonatomic) NSMutableDictionary *totalRetriesByType; // @synthesize totalRetriesByType=_totalRetriesByType;
@property(nonatomic) __weak FMDRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) long long totalRetryCount; // @synthesize totalRetryCount=_totalRetryCount;
@property(retain, nonatomic) NSString *nextRetryType; // @synthesize nextRetryType=_nextRetryType;
- (void).cxx_destruct;
- (void)_networkStateChanged:(id)arg1;
- (void)_incrementRetryCountForType:(id)arg1;
- (int)_consecutiveRetryCountForType:(id)arg1;
- (int)_retryCountForType:(id)arg1;
- (void)_scheduleRetryAfterTimeInterval:(double)arg1;
- (void)_networkCameUp;
- (void)_retryNow;
- (void)_retryTimerFired;
- (double)_decayedWaitIntervalForRetryCount:(long long)arg1;
- (void)checkAndScheduleRetries;
- (void)deinitializeHelper;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 retryAction:(CDUnknownBlockType)arg2;

@end

