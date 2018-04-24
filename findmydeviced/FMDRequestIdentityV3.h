//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDServiceProvider, NSData, NSString, NSUUID;

@interface FMDRequestIdentityV3 : FMDRequest
{
    FMDServiceProvider *_provider;
    NSString *_signatureHeader;
    NSString *_skAuthHeader;
    NSData *_requestBodyDataForSignature;
    NSUUID *_activationLockRequestUUID;
    NSString *_signatureError;
}

@property(retain, nonatomic) NSString *signatureError; // @synthesize signatureError=_signatureError;
@property(retain, nonatomic) NSUUID *activationLockRequestUUID; // @synthesize activationLockRequestUUID=_activationLockRequestUUID;
@property(retain, nonatomic) NSData *requestBodyDataForSignature; // @synthesize requestBodyDataForSignature=_requestBodyDataForSignature;
@property(retain, nonatomic) NSString *skAuthHeader; // @synthesize skAuthHeader=_skAuthHeader;
@property(retain, nonatomic) NSString *signatureHeader; // @synthesize signatureHeader=_signatureHeader;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)_calculateSignatureForBody:(id)arg1;
- (_Bool)canReplace:(id)arg1;
- (_Bool)canRequestBeRetriedNow;
- (long long)maxConsecutiveNetworkNotificationRetries;
- (long long)maxNonNetworkRelatedRetries;
- (double)maxRetryInterval;
- (id)requestBody;
- (id)requestBodyData;
- (id)requestHeaders;
- (id)requestUrl;
- (id)initWithProvider:(id)arg1;

@end

