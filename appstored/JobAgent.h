//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Agent.h"

#import "IXAppInstallCoordinatorObserver-Protocol.h"

@class AgentProgress, AgentRef, NSDate, NSOrderedSet, NSString;

@interface JobAgent : Agent <IXAppInstallCoordinatorObserver>
{
    _Bool _attemptingToTerminate;
    AgentProgress *_progress;
    NSDate *_timestamp;
    _Bool _hasInitialODRAssets;
    _Bool _hasRestoreData;
    _Bool _systemApp;
    NSString *_bundleID;
    NSOrderedSet *_downloadReferences;
    long long _priority;
    long long _restoreState;
    AgentRef *_softwareDownloadReference;
    long long _type;
}

+ (Class)agentStateClassForState:(id)arg1;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(retain, nonatomic) AgentRef *softwareDownloadReference; // @synthesize softwareDownloadReference=_softwareDownloadReference;
@property(readonly, nonatomic) long long restoreState; // @synthesize restoreState=_restoreState;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) _Bool hasRestoreData; // @synthesize hasRestoreData=_hasRestoreData;
@property(readonly, nonatomic) _Bool hasInitialODRAssets; // @synthesize hasInitialODRAssets=_hasInitialODRAssets;
@property(retain, nonatomic) NSOrderedSet *downloadReferences; // @synthesize downloadReferences=_downloadReferences;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_terminateWhenReady;
- (_Bool)_isTerminationComplete;
- (void)_initialize;
- (_Bool)_hasApprovalInDatabase;
- (void)_finalizeTermination;
- (void)_abortTermination;
- (id)auditDescription;
- (void)userInitiatedRestart;
- (void)terminateWhenReady;
@property(readonly, nonatomic) _Bool requiresPlaceholder;
@property(readonly, nonatomic) _Bool requiresApproval;
@property(readonly, nonatomic) _Bool isPersistent;
- (void)convertToUserInitiated;
- (void)abortTermination;
- (id)initWithPID:(long long)arg1 initialState:(id)arg2 supervisor:(id)arg3 type:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

