//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DataArk;

@interface MACollectionInterface : NSObject
{
    _Bool _collectionLibraryLoaded;
    // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}, name: _signingKey
    DataArk *_dark;
}

+ (id)copyIngestURL;
@property(readonly, nonatomic) DataArk *dark; // @synthesize dark=_dark;
@property(nonatomic) _Bool collectionLibraryLoaded; // @synthesize collectionLibraryLoaded=_collectionLibraryLoaded;
- (_Bool)processSUInfo:(id)arg1 withError:(id *)arg2;
- (id)copyIngestData:(id *)arg1;
- (id)copyIngestHeaders:(id)arg1 withError:(id *)arg2;
- (id)signatureForData:(id)arg1 error:(id *)arg2;
- (id)signingKeyPublicKeyWithError:(id *)arg1;
- (id)collectPCRT:(id *)arg1;
- (id)collectSIK:(id *)arg1;
- (id)collectSigningAttestation:(id *)arg1;
- (_Bool)loadInFieldCollectionLibrary;
// Error parsing type for property signingKey:
// Property attributes: T^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v},R,V_signingKey

- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

