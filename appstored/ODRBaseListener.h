//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseListener.h"

@class NSString;

@interface ODRBaseListener : BaseListener
{
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, nonatomic) NSString *odrServiceName;
@property(readonly, nonatomic) NSString *odrEntitlementName;
- (void)configureClientWithConnection:(id)arg1;

@end
