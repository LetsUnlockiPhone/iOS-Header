//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSURL, NSUUID;

@protocol FMDServerChannel <NSObject>
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)supportsRequestType:(unsigned long long)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestWithId:(NSUUID *)arg1;
- (void)sendRequestWithId:(NSUUID *)arg1 toURL:(NSURL *)arg2 withHeaders:(NSDictionary *)arg3 body:(NSData *)arg4 completion:(void (^)(long long, NSDictionary *, NSData *, NSURL *, NSError *))arg5;
@end

