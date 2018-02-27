//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AgentOperation.h"

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadStepOperation : AgentOperation
{
    FinishDownloadMemoryEntity *_download;
    NSString *_downloadPhase;
    double _progressFraction;
    CDUnknownBlockType _outputBlock;
}

@property(readonly, nonatomic) FinishDownloadMemoryEntity *download; // @synthesize download=_download;
- (void).cxx_destruct;
- (_Bool)runSubISOperation:(id)arg1 returningError:(id *)arg2;
- (id)_newURLOperationWithAsset:(id)arg1;
- (_Bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
@property double progressFraction;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy) NSString *downloadPhase;
- (_Bool)rollbackAsset:(id)arg1 error:(id *)arg2;
- (_Bool)moveFile:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;
- (_Bool)moveAsset:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;
- (_Bool)installAsset:(id)arg1 error:(id *)arg2;
- (void)finishWithDownloadResponse:(id)arg1;
- (_Bool)downloadAsset:(id)arg1 error:(id *)arg2;
- (_Bool)downloadAndInstallAsset:(id)arg1 error:(id *)arg2;
- (id)documentsDirectoryPathWithClientIdentifier:(id)arg1 downloadKind:(id)arg2;
- (id)initWithParentOperation:(id)arg1 download:(id)arg2;

@end

