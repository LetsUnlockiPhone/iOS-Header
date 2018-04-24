//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDAsset-Protocol.h"

@class NSData, NSString, NSURL;

@interface FMDStandardAsset : NSObject <FMDAsset>
{
    NSString *_lastModified;
    NSString *_etag;
    NSURL *_url;
    NSData *_data;
    NSURL *_fileURL;
    unsigned long long _assetType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 lastModified:(id)arg2 etag:(id)arg3 type:(unsigned long long)arg4 url:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

