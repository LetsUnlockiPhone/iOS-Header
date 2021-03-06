//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSData, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface XPCClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _applicationState;
    long long _clientType;
    NSXPCConnection *_inputConnection;
    int _pid;
    BKSApplicationStateMonitor *_stateMonitor;
    NSData *_auditTokenData;
    NSString *_clientID;
    NSString *_clientVersion;
    NSXPCConnection *_outputConnection;
}

+ (id)_copyExecutablePathForConnection:(id)arg1;
+ (id)_copyBundleForExecutablePath:(id)arg1;
+ (id)clientIDForConnnection:(id)arg1;
@property(retain, nonatomic) NSXPCConnection *outputConnection; // @synthesize outputConnection=_outputConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSData *auditTokenData; // @synthesize auditTokenData=_auditTokenData;
- (void).cxx_destruct;
- (void)_createConnection:(id)arg1;
- (id)_copyClientValues;
- (long long)_clientType;
- (void)_applicationStateChanged:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)invalidate;
@property(readonly, nonatomic) long long clientType;
- (_Bool)canReceiveMessages;
- (id)addClientEntityToDatabase:(id)arg1;
- (id)initWithInputConnection:(id)arg1;
- (id)init;

@end

