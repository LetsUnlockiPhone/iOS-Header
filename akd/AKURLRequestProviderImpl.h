//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKURLRequestProvider-Protocol.h"

@class AKAppleIDAuthenticationContext, AKClient, NSDictionary, NSString, NSURL;

@interface AKURLRequestProviderImpl : NSObject <AKURLRequestProvider>
{
    NSDictionary *authKitBody;
    AKClient *_client;
    NSURL *_requestURL;
    AKAppleIDAuthenticationContext *_context;
}

@property(retain, nonatomic) AKAppleIDAuthenticationContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) AKClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSDictionary *authKitBody; // @synthesize authKitBody;
- (void).cxx_destruct;
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSDictionary *serverCompatibleRequestBody;
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;
- (unsigned long long)expectedResponseType;
- (id)buildRequest:(id *)arg1;
- (id)initWithContext:(id)arg1 requestURL:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

