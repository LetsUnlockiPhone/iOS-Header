//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDDictionaryRepresentable-Protocol.h"
#import "NSObject-Protocol.h"

@class NSData;

@protocol FMDCiphering <NSObject, FMDDictionaryRepresentable>
@property(readonly, nonatomic) NSData *tag;
@property(readonly, nonatomic) NSData *key;
@property(readonly, nonatomic) NSData *initializationVector;
@end

