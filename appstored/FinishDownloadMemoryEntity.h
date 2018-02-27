//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

@class FinishDownloadAssetMemoryEntity, Job, NSArray, NSData, NSNumber, NSString, StoreDownload;

@interface FinishDownloadMemoryEntity : SSMemoryEntity
{
    Job *_job;
    FinishDownloadAssetMemoryEntity *_mediaAsset;
    NSArray *_secondaryAssets;
    StoreDownload *_storeMetadata;
    NSString *_documentTargetIdentifier;
    NSNumber *_durationInMilliseconds;
    NSNumber *_handlerIdentifier;
    NSNumber *_storePublicationVersion;
    NSNumber *_storeSagaIdentifier;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
@property(readonly, nonatomic) NSNumber *storeSagaIdentifier; // @synthesize storeSagaIdentifier=_storeSagaIdentifier;
@property(readonly, nonatomic) NSNumber *storePublicationVersion; // @synthesize storePublicationVersion=_storePublicationVersion;
@property(readonly, nonatomic) NSNumber *handlerIdentifier; // @synthesize handlerIdentifier=_handlerIdentifier;
@property(readonly, nonatomic) NSNumber *durationInMilliseconds; // @synthesize durationInMilliseconds=_durationInMilliseconds;
@property(readonly, nonatomic) NSString *documentTargetIdentifier; // @synthesize documentTargetIdentifier=_documentTargetIdentifier;
@property(readonly, nonatomic) NSArray *secondaryAssets; // @synthesize secondaryAssets=_secondaryAssets;
@property(retain, nonatomic) StoreDownload *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(readonly, nonatomic) FinishDownloadAssetMemoryEntity *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
- (void).cxx_destruct;
- (id)_newDateFormatter;
- (id)_copyInfoFromAccount:(id)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *storeXID;
@property(readonly, nonatomic) NSString *storeTransactionIdentifier;
@property(readonly, nonatomic) NSNumber *storeItemIdentifier;
@property(readonly, nonatomic) NSString *storeFrontIdentifier;
@property(readonly, nonatomic) NSNumber *storeCollectionIdentifier;
@property(readonly, nonatomic) NSString *storeAccountName;
@property(readonly, nonatomic) NSNumber *storeAccountIdentifier;
- (id)secondaryAssetForType:(id)arg1;
@property(readonly, nonatomic) long long restoreState;
@property(readonly, nonatomic) NSData *receiptData;
- (id)newITunesMetadataDictionary;
- (void)loadJobUsingSession:(id)arg1;
- (void)loadAssetsUsingSession:(id)arg1;
@property(readonly, nonatomic) long long jobID;
@property(readonly, nonatomic) NSString *ITunesMetadataDestinationPath;
@property(readonly, nonatomic, getter=isTvTemplate) _Bool tvTemplate;
@property(readonly, nonatomic, getter=isSystemApp) _Bool systemApp;
@property(readonly, nonatomic, getter=isStoreDownload) _Bool storeDownload;
@property(readonly, nonatomic, getter=isSharedDownload) _Bool sharedDownload;
@property(readonly, nonatomic, getter=isRestoreDownload) _Bool restoreDownload;
@property(readonly, nonatomic, getter=isDeviceBasedVPP) _Bool deviceBasedVPP;
@property(readonly, nonatomic) _Bool hasRestoreData;
@property(readonly, nonatomic) NSString *genreName;
@property(readonly, nonatomic) NSString *downloadPermalink;
@property(readonly, nonatomic) NSString *downloadKind;
- (id)destinationDirectoryPathForAsset:(id)arg1;
@property(readonly, nonatomic) NSString *collectionName;
@property(readonly, nonatomic) NSString *clientIdentifier;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) long long automaticType;
@property(readonly, nonatomic) NSString *artworkTemplateName;
@property(readonly, nonatomic) NSString *artistName;

@end

