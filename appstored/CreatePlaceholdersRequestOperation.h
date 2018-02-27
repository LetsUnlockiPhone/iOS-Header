//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RequestOperation.h"

@class ASDRestoreApplicationsRequestOptions;

@interface CreatePlaceholdersRequestOperation : RequestOperation
{
}

+ (id)_newURLByPopulatingTemplate:(id)arg1 withValues:(id)arg2;
+ (id)_newStoreMetadataWithApplication:(id)arg1;
+ (id)_newPlatformContext;
+ (id)_newArtworkURLUsingTemplate:(id)arg1;
+ (id)_newArtworkPromiseWithArtworkPath:(id)arg1;
+ (id)_lookupItemIDs:(id)arg1 withPlatformContext:(id)arg2 error:(id *)arg3;
+ (id)_copyItemIDsFromApplicationMetadata:(id)arg1;
+ (id)_copyArtworkTemplateForApplication:(id)arg1 fromPlatformData:(id)arg2;
- (_Bool)_runAgentOperation:(id)arg1 returningError:(id *)arg2;
- (id)_newArtworkPromiseWithArtworkTemplate:(id)arg1;
- (_Bool)_loadArtworkForBundleID:(id)arg1 templateURL:(id)arg2 path:(id *)arg3 error:(id *)arg4;
- (void)_runWithApplications:(id)arg1;
- (void)run;

// Remaining properties
@property(readonly, nonatomic) ASDRestoreApplicationsRequestOptions *options; // @dynamic options;

@end

