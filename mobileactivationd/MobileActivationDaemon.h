//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MobileActivationProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class DataArk, NSData, NSString;
@protocol OS_dispatch_queue;

@interface MobileActivationDaemon : NSObject <NSXPCListenerDelegate, MobileActivationProtocol>
{
    NSString *_hostActivationNonce;
    NSString *_deviceActivationNonce;
    struct PSCSessionInternal_ *_session;
    NSData *_sessionHelloMessage;
    DataArk *_dark;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_creationQueue;
    NSString *_recertNonce;
}

@property(retain, nonatomic) NSString *recertNonce; // @synthesize recertNonce=_recertNonce;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *creationQueue; // @synthesize creationQueue=_creationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) DataArk *dark; // @synthesize dark=_dark;
- (void).cxx_destruct;
- (void)isInFieldCollectedWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)issueClientCertificateWithReferenceKey:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)issueClientCertificateLegacy:(id)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)recertifyDevice:(_Bool)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)unbrickDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)copyActivationRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)copyRegulatoryImagesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleReCertInfo:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)createReCertInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestDeviceReactivationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getActivationBuildWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getActivationStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)isDeviceBrickedWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)copyPCRTTokenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)copyUCRTTokenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)copyUCRTWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleActivationInfo:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)createActivationInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createTunnel1SessionInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createTunnel1ActivationInfo:(id)arg1 options:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)deactivateDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)validateActivationDataSignature:(id)arg1 activationSignature:(id)arg2 withError:(id *)arg3;
- (_Bool)handleSessionResponse:(id)arg1 withError:(id *)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)isEntitled:(id)arg1;
@property(readonly, nonatomic) _Bool isHostConnection;
@property(retain, nonatomic) NSString *activationNonce;
- (id)callingProcessName;
@property(readonly, nonatomic) NSData *sessionHelloMessage; // @synthesize sessionHelloMessage=_sessionHelloMessage;
@property(readonly, nonatomic) struct PSCSessionInternal_ *session; // @synthesize session=_session;
- (void)generateSession;
- (void)dealloc;
- (id)initWithContext:(id)arg1 Queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

