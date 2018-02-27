//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ASDManagedApplicationRequestOptions, NSNumber, NSString;

@interface ManagedApplicationOperation : ISOperation
{
    NSString *_applicationVariant;
    NSString *_bundleIdentifer;
    NSString *_bundleVersion;
    NSNumber *_externalVersionIdentifier;
    _Bool _hasInstalledApp;
    NSNumber *_itemIdentifier;
    ASDManagedApplicationRequestOptions *_options;
    _Bool _skipDownload;
    CDUnknownBlockType _detailedResultBlock;
    CDUnknownBlockType _resultBlock;
}

@property(readonly, copy) ASDManagedApplicationRequestOptions *options; // @synthesize options=_options;
@property(copy) CDUnknownBlockType detailedResultBlock; // @synthesize detailedResultBlock=_detailedResultBlock;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void).cxx_destruct;
- (_Bool)_updateSinfsAndRecepitsForDownloadResponse:(id)arg1 sinfData:(id)arg2;
- (id)_sinfPathForBundleID:(id)arg1;
- (id)_md5ForAppProxy:(id)arg1;
- (id)_postBodyData;
- (void)_createJobsFromDownloadResponse:(id)arg1 URLResponse:(id)arg2;
- (id)_downloadMetadata:(id)arg1;
- (void)run;
- (id)getSinf;
- (id)initWithOptions:(id)arg1;

@end

