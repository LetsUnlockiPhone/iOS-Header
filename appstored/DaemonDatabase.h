//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadPolicyManager, SSSQLiteDatabase;

@interface DaemonDatabase : NSObject
{
    SSSQLiteDatabase *_database;
    DownloadPolicyManager *_policyManager;
}

+ (void)_setupDatabase:(id)arg1 attachUpdates:(_Bool)arg2;
+ (id)daemonDatabase;
- (void).cxx_destruct;
- (id)_newUpdateEntityPropertiesWithLegacyUpdate:(id)arg1;
- (id)_newSessionDescription;
- (id)_modifyUsingTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)readUpdatesUsingSessionBlock:(CDUnknownBlockType)arg1;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg1;
- (void)modifyUpdatesUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (id)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (id)modifyUsingJobPurchaseTransactionBlock:(CDUnknownBlockType)arg1;
- (id)modifyUsingJobTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyEventsUsingBlock:(CDUnknownBlockType)arg1;
- (id)modifyUsingDownloadTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyAsyncUsingJobPurchaseTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyAsyncUsingJobTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyAsyncUsingDownloadTransactionBlock:(CDUnknownBlockType)arg1;
- (void)migrateLegacyUpdateHistory;
- (void)dispatchBlockSync:(CDUnknownBlockType)arg1;
- (void)dispatchBlockAsync:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 attachUpdates:(_Bool)arg2;
- (id)init;

@end

