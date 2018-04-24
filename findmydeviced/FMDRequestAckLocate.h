//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDAccount, NSDictionary, NSString, NSURL;

@interface FMDRequestAckLocate : FMDRequest
{
    FMDAccount *_account;
    NSDictionary *_locateCommand;
    NSURL *_ackURL;
    long long _cmdStatusCode;
    NSString *_cmdStatusMsg;
}

@property(retain, nonatomic) NSString *cmdStatusMsg; // @synthesize cmdStatusMsg=_cmdStatusMsg;
@property(nonatomic) long long cmdStatusCode; // @synthesize cmdStatusCode=_cmdStatusCode;
@property(retain, nonatomic) NSURL *ackURL; // @synthesize ackURL=_ackURL;
@property(retain, nonatomic) NSDictionary *locateCommand; // @synthesize locateCommand=_locateCommand;
@property(retain, nonatomic) FMDAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)canReplace:(id)arg1;
- (_Bool)canRequestBeRetriedNow;
- (id)requestBody;
- (id)requestUrl;
- (id)initWithAccount:(id)arg1 locateCommand:(id)arg2 ackURL:(id)arg3 cmdStatusCode:(long long)arg4 cmdStatusMessage:(id)arg5;

@end
