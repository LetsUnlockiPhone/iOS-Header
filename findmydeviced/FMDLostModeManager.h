//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLAssertion, FMStateCapture, NSString;

@interface FMDLostModeManager : NSObject
{
    _Bool _lostModeEnabled;
    _Bool _lockScreenFacetimeCapable;
    _Bool _enableLocationServices;
    _Bool _turnStatusBarIconOffAfterLostMode;
    NSString *_lockScreenMessage;
    NSString *_lockScreenOwnerNumber;
    CLAssertion *_locationServicesAssertion;
    FMStateCapture *_stateCapture;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FMStateCapture *stateCapture; // @synthesize stateCapture=_stateCapture;
@property(retain, nonatomic) CLAssertion *locationServicesAssertion; // @synthesize locationServicesAssertion=_locationServicesAssertion;
@property(nonatomic) _Bool turnStatusBarIconOffAfterLostMode; // @synthesize turnStatusBarIconOffAfterLostMode=_turnStatusBarIconOffAfterLostMode;
@property(nonatomic) _Bool enableLocationServices; // @synthesize enableLocationServices=_enableLocationServices;
@property(nonatomic) _Bool lockScreenFacetimeCapable; // @synthesize lockScreenFacetimeCapable=_lockScreenFacetimeCapable;
@property(retain, nonatomic) NSString *lockScreenOwnerNumber; // @synthesize lockScreenOwnerNumber=_lockScreenOwnerNumber;
@property(retain, nonatomic) NSString *lockScreenMessage; // @synthesize lockScreenMessage=_lockScreenMessage;
@property(nonatomic) _Bool lostModeEnabled; // @synthesize lostModeEnabled=_lostModeEnabled;
- (void).cxx_destruct;
- (void)disableLostMode;
- (void)_loadLostModeInfo;
- (void)_storeLostModeInfo;
- (void)_updateLocationServicesState;
- (void)enableLostModeWithMessage:(id)arg1 ownerNumber:(id)arg2 facetimeCapable:(_Bool)arg3 enableLocationServices:(_Bool)arg4 turnOffStatusBarIconAfterLostMode:(_Bool)arg5;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initSingleton;
- (id)init;

@end
