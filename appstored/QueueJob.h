//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "InternalJob.h"

@interface QueueJob : InternalJob
{
    _Bool _isAutoDownload;
}

@property(readonly, nonatomic) _Bool isAutoDownload; // @synthesize isAutoDownload=_isAutoDownload;
@property(readonly, nonatomic) _Bool isPendingApproval;
- (id)initJobAsAutoDownload:(_Bool)arg1 withActivity:(id)arg2;

@end

