//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, RUIObjectModel, RUIPage;
@protocol PreferencesRemoteUIDelegateProtocol;

@protocol DelayedPushDelegate <NSObject>
- (void)loadFailed:(id)arg1 withError:(NSError *)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;

@optional
- (void)remoteUIDelegate:(id <PreferencesRemoteUIDelegateProtocol>)arg1 didCreatePage:(RUIPage *)arg2 inObjectModel:(RUIObjectModel *)arg3;
@end
