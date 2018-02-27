//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableString, NSString, ODRAssetPackManagedObject, ODRDownloadRequest;

@protocol ODRStoreIntegrationProtocol <NSObject>
- (void)cancelRequestsForApplicationWithBundleID:(NSString *)arg1;
- (void)scanAndCleanQueue;
- (NSArray *)currentDownloadRequestsForApplicationBundleID:(NSString *)arg1;
- (NSMutableString *)status;
- (void)reportOnTopic:(NSString *)arg1 withData:(NSDictionary *)arg2;
- (void)fetchManifestForBetaApplicationWithAdamID:(NSString *)arg1 withExternalVersionID:(NSString *)arg2 bundleShortVersion:(NSString *)arg3 bundleVersion:(NSString *)arg4 variant:(NSString *)arg5 appBundleIdentifier:(NSString *)arg6 isMachineVPP:(_Bool)arg7 withCompletionBlock:(void (^)(NSData *, NSError *))arg8;
- (void)fetchManifestForAdamID:(NSString *)arg1 withExternalVersionID:(NSString *)arg2 variant:(NSString *)arg3 appBundleIdentifier:(NSString *)arg4 isMachineVPP:(_Bool)arg5 withCompletionBlock:(void (^)(NSData *, NSError *))arg6;
- (void)addIntegrityHashingFromAssetPack:(ODRAssetPackManagedObject *)arg1 toRequest:(ODRDownloadRequest *)arg2;
- (void)updatePriorityOfRequest:(ODRDownloadRequest *)arg1;
- (void)resumeRequest:(ODRDownloadRequest *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)pauseRequest:(ODRDownloadRequest *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)removeRequest:(ODRDownloadRequest *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (long long)addRequest:(ODRDownloadRequest *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
@end

