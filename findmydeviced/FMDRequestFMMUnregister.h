//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDServiceProvider, NSURL;

@interface FMDRequestFMMUnregister : FMDRequest
{
    FMDServiceProvider *_provider;
    NSURL *_unregisterURL;
}

@property(retain, nonatomic) NSURL *unregisterURL; // @synthesize unregisterURL=_unregisterURL;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (_Bool)canReplace:(id)arg1;
- (_Bool)canRequestBeRetriedNow;
- (id)authToken;
- (id)requestBody;
- (id)requestUrl;
- (id)initWithProvider:(id)arg1;

@end

