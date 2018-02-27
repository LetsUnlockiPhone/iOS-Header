//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSNumber, NSString, NSURL;

@interface SystemAppLookupItem : NSObject
{
    _Bool _streamableZip;
    NSString *_bundleID;
    NSNumber *_downloadOffset;
    NSNumber *_downloadSize;
    NSError *_error;
    NSNumber *_hashType;
    NSArray *_hashes;
    NSString *_title;
    NSURL *_URL;
}

+ (id)_stringFromDigest:(char *)arg1;
+ (id)_hashArrayFromMeasurement:(id)arg1;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic, getter=isStreamableZip) _Bool streamableZip; // @synthesize streamableZip=_streamableZip;
@property(readonly, nonatomic) NSArray *hashes; // @synthesize hashes=_hashes;
@property(readonly, nonatomic) NSNumber *hashType; // @synthesize hashType=_hashType;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSNumber *downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSNumber *downloadOffset; // @synthesize downloadOffset=_downloadOffset;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 attributes:(id)arg2;

@end

