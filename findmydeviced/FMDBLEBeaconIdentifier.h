//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDIdentifiable-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FMDBLEBeaconIdentifier : NSObject <NSSecureCoding, FMDIdentifiable>
{
    NSString *_string;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierBLEDevice:(id)arg1 other:(_Bool)arg2;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, copy) NSString *description;
- (id)stringValue;
- (id)initWithBLEDevice:(id)arg1 other:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

