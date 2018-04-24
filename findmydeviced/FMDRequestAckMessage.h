//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDAccount, NSDictionary, NSError, NSURL;

@interface FMDRequestAckMessage : FMDRequest
{
    NSError *_timeoutError;
    FMDAccount *_account;
    NSDictionary *_messageCommand;
    long long _cmdStatusCode;
    NSURL *_ackURL;
}

@property(retain, nonatomic) NSURL *ackURL; // @synthesize ackURL=_ackURL;
@property(nonatomic) long long cmdStatusCode; // @synthesize cmdStatusCode=_cmdStatusCode;
@property(retain, nonatomic) NSDictionary *messageCommand; // @synthesize messageCommand=_messageCommand;
@property(retain, nonatomic) FMDAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSError *timeoutError; // @synthesize timeoutError=_timeoutError;
- (void).cxx_destruct;
- (_Bool)canReplace:(id)arg1;
- (id)requestBody;
- (id)requestHeaders;
- (id)requestUrl;
- (id)initWithAccount:(id)arg1 messageCommand:(id)arg2 cmdStatusCode:(long long)arg3 ackURL:(id)arg4;

@end
