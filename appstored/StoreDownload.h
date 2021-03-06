//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSDownloadMetadata.h>

@class NSArray, NSNumber;

@interface StoreDownload : SSDownloadMetadata
{
}

- (void)_setGameCenterEnabled:(_Bool)arg1;
- (void)_setStoreFrontID:(unsigned long long)arg1;
- (id)_newPrimaryAssetsWithAssetDictionary:(id)arg1 assetType:(id)arg2;
- (id)_newDeltaPackageAssetsWithAssetDictionary:(id)arg1;
- (id)_newDateFormatter;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (id)_newAssetPropertiesWithStoreDictionary:(id)arg1 assetType:(id)arg2;
- (id)_copySinfValueWithField:(long long)arg1;
- (id)_copyPinfValueWithField:(long long)arg1;
- (id)newDownloadProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWritableMetadata;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly) NSNumber *redownloadedStatus;
@property(readonly) NSNumber *purchaserAccountIdentifier;
@property(readonly) _Bool gameCenterEnabled;
@property(readonly) NSNumber *familyAccountIdentifier;
@property(readonly) NSNumber *downloaderAccountIdentifier;
- (id)_newAssetArrayWithDownloadAssets:(id)arg1;
- (id)copyJobActivity;
@property(readonly) NSArray *assets;
- (id)initWithDownload:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end

