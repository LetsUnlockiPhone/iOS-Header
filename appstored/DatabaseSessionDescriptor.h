//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class DownloadPolicyManager, SSSQLiteDatabase;

@interface DatabaseSessionDescriptor : NSObject <NSCopying>
{
    SSSQLiteDatabase *_database;
    DownloadPolicyManager *_policyManager;
}

@property(retain, nonatomic) DownloadPolicyManager *policyManager; // @synthesize policyManager=_policyManager;
@property(retain, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

