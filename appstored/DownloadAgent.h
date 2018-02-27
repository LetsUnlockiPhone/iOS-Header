//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Agent.h"

#import "NSURLSessionDataDelegatePrivate-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class AgentProgress, AgentRef, DownloadSessionManager, NSString, NSURLSessionDataTask;
@protocol DataConsumer;

@interface DownloadAgent : Agent <NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate>
{
    AgentProgress *_progress;
    id <DataConsumer> _dataConsumer;
    NSURLSessionDataTask *_dataTask;
    long long _jobID;
    AgentRef *_jobReference;
    NSString *_kind;
    long long _mediaAssetID;
}

+ (Class)agentStateClassForState:(id)arg1;
@property(nonatomic) long long mediaAssetID; // @synthesize mediaAssetID=_mediaAssetID;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) AgentRef *jobReference; // @synthesize jobReference=_jobReference;
@property(nonatomic) long long jobID; // @synthesize jobID=_jobID;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) id <DataConsumer> dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (void).cxx_destruct;
- (void)_logDownloadCancelReason:(long long)arg1;
- (id)_applicationBundleIdentifierForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2;
- (void)_initialize;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)auditDescription;
- (id)reference;
- (void)stopDownload;
- (id)memoryDownload;
@property(readonly, nonatomic) DownloadSessionManager *sessionManager;
- (_Bool)IC_shouldUseCoordination;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

