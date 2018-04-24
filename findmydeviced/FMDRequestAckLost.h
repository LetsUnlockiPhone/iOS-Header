//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDServiceProvider, NSDictionary, NSURL;

@interface FMDRequestAckLost : FMDRequest
{
    _Bool _locationServicesStateChanged;
    FMDServiceProvider *_provider;
    NSDictionary *_lostCommand;
    NSURL *_ackURL;
    long long _cmdStatusCode;
}

@property(nonatomic) _Bool locationServicesStateChanged; // @synthesize locationServicesStateChanged=_locationServicesStateChanged;
@property(nonatomic) long long cmdStatusCode; // @synthesize cmdStatusCode=_cmdStatusCode;
@property(retain, nonatomic) NSURL *ackURL; // @synthesize ackURL=_ackURL;
@property(retain, nonatomic) NSDictionary *lostCommand; // @synthesize lostCommand=_lostCommand;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (_Bool)canReplace:(id)arg1;
- (id)requestBody;
- (id)requestUrl;
- (id)initWithProvider:(id)arg1 lostCommand:(id)arg2 cmdStatusCode:(long long)arg3 locationServicesStateChanged:(_Bool)arg4 ackURL:(id)arg5;

@end

