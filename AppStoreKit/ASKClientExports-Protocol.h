//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreKit-1103/JSExport-Protocol.h>

@class NSArray, NSString;

@protocol ASKClientExports <JSExport>
@property(readonly, copy) NSString *storefrontIdentifier;
@property(readonly, copy) NSArray *deviceCapabilities;
@property(readonly) _Bool newPaymentMethodEnabled;
@property(readonly, copy) NSString *modelIdentifier;
@property(readonly, copy) NSString *thinnedApplicationVariantIdentifier;
@property(readonly, copy) NSString *guid;
@property(readonly) struct CGSize screenSize;
@property(readonly) NSString *deviceType;
@property(readonly, copy) NSString *name;
- (_Bool)isOperatingSystemAtLeast:(long long)arg1:(long long)arg2:(long long)arg3;
@end
