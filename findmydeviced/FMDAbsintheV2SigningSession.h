//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

@interface FMDAbsintheV2SigningSession : NSObject
{
    struct NACContextOpaque_ *_context;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    int _error;
    NSString *_certURL;
    NSString *_sessionURL;
    NSOperationQueue *_queue;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *sessionURL; // @synthesize sessionURL=_sessionURL;
@property(retain, nonatomic) NSString *certURL; // @synthesize certURL=_certURL;
@property(nonatomic) int error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)_clientInfoHeader;
- (id)_sessionCreationURLRequest;
- (id)_configurationURLRequest;
- (void)_fetchUrlsUsingSession:(id)arg1;
- (id)signatureForData:(id)arg1;
- (void)establishSession;
- (void)dealloc;
- (id)init;

@end

