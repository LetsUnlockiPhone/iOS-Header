//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

#import "FMDEncryptable-Protocol.h"

@class NSString;

@interface NSData (FMDEncryptable) <FMDEncryptable>
- (id)randomBytesWithLength:(unsigned long long)arg1 error:(id *)arg2;
- (id)defaultCipherWithError:(id *)arg1;
- (void)decryptWithCipher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encryptWithcompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

