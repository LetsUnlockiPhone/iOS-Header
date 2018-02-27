//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface ODRBundleManagedObject : NSManagedObject
{
}

+ (_Bool)areTags:(id)arg1 validForBundleWithID:(id)arg2;
+ (id)existingRecordsForBundleWithBundleID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (_Bool)haveExistingRecordForBundleWithBundleID:(id)arg1;
+ (id)createBundleWithBundleID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)bundleForBundleID:(id)arg1;
+ (_Bool)deleteBundleForID:(id)arg1;
- (_Bool)validateForInsert:(id *)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSSet *tags; // @dynamic tags;

@end

