//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL;

@protocol ODRiTunesStoreDaemonProtocol <NSObject>
- (void)applicationDownloadInitiatedForBundleID:(NSString *)arg1 adamID:(NSString *)arg2 externalVersionID:(NSString *)arg3 bundleVersionID:(NSString *)arg4 buildID:(NSString *)arg5 isBeta:(_Bool)arg6 manifestData:(NSData *)arg7 replyBlock:(void (^)(NSError *))arg8;
- (void)applicationDownloadInitiatedForBundleID:(NSString *)arg1 adamID:(NSString *)arg2 externalVersionID:(NSString *)arg3 bundleVersionID:(NSString *)arg4 buildID:(NSString *)arg5 isBeta:(_Bool)arg6 manifestData:(NSData *)arg7 manifestURL:(NSURL *)arg8 isMachineVPP:(_Bool)arg9 reason:(unsigned long long)arg10 variant:(NSString *)arg11 replyBlock:(void (^)(NSError *))arg12;
- (void)cancelDownloadsForApplicationWithAdamID:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)resumeDownloadsForApplicationWithAdamID:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)pauseDownloadsForApplicationWithAdamID:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)applicationDownloadInitiatedForBundleID:(NSString *)arg1 adamID:(NSString *)arg2 externalVersionID:(NSString *)arg3 bundleVersionID:(NSString *)arg4 buildID:(NSString *)arg5 isBeta:(_Bool)arg6 manifestData:(NSData *)arg7 manifestURL:(NSURL *)arg8 isMachineVPP:(_Bool)arg9 reason:(unsigned long long)arg10 variant:(NSString *)arg11 jobID:(long long)arg12 replyBlock:(void (^)(NSError *))arg13;
@end
