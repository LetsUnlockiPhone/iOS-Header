//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RequestOperation.h"

@class ASDInstallManifestRequestOptions;

@interface InstallManifestRequestOperation : RequestOperation
{
}

- (_Bool)_runAgentOperation:(id)arg1 returningError:(id *)arg2;
- (id)_newJobWithActivity:(id)arg1 forManifestType:(long long)arg2;
- (void)_createPlaceholderForManifest:(long long)arg1 bundleID:(id)arg2 download:(id)arg3 transaction:(id)arg4;
- (void)run;

// Remaining properties
@property(readonly, nonatomic) ASDInstallManifestRequestOptions *options; // @dynamic options;

@end

