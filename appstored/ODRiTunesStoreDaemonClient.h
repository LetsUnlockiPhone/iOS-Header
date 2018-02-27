//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRiTunesStoreDaemonProtocol-Protocol.h"

@class NSString;

@interface ODRiTunesStoreDaemonClient : NSObject <ODRiTunesStoreDaemonProtocol>
{
}

+ (id)_attributionIDForConnectionWithBundleID:(id)arg1;
+ (id)displayStringForReason:(unsigned long long)arg1;
- (void)cancelDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)resumeDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)pauseDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)applicationDownloadInitiatedForBundleID:(id)arg1 adamID:(id)arg2 externalVersionID:(id)arg3 bundleVersionID:(id)arg4 buildID:(id)arg5 isBeta:(_Bool)arg6 manifestData:(id)arg7 replyBlock:(CDUnknownBlockType)arg8;
- (void)applicationDownloadInitiatedForBundleID:(id)arg1 adamID:(id)arg2 externalVersionID:(id)arg3 bundleVersionID:(id)arg4 buildID:(id)arg5 isBeta:(_Bool)arg6 manifestData:(id)arg7 manifestURL:(id)arg8 isMachineVPP:(_Bool)arg9 reason:(unsigned long long)arg10 variant:(id)arg11 replyBlock:(CDUnknownBlockType)arg12;
- (void)applicationDownloadInitiatedForBundleID:(id)arg1 adamID:(id)arg2 externalVersionID:(id)arg3 bundleVersionID:(id)arg4 buildID:(id)arg5 isBeta:(_Bool)arg6 manifestData:(id)arg7 manifestURL:(id)arg8 isMachineVPP:(_Bool)arg9 reason:(unsigned long long)arg10 variant:(id)arg11 jobID:(long long)arg12 replyBlock:(CDUnknownBlockType)arg13;
- (id)interface;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

