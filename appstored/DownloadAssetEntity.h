//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray;

@interface DownloadAssetEntity : SSSQLiteEntity
{
}

+ (void)initialize;
+ (Class)memoryEntityClass;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)databaseTable;
+ (id)newDownloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
+ (id)copyDatabaseDictionaryWithRequestProperties:(id)arg1;
- (_Bool)deleteFromDatabase;
@property(readonly, nonatomic) NSArray *sinfs;
- (id)copyURLRequestProperties;
- (id)copyStoreDownloadKeyCookie;

@end

