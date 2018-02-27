//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSProgress;

@interface ODRTagsRequest : NSObject
{
    double _lastEnhancedProgressReport;
    double _startTime;
    NSMutableDictionary *_tagRequests;
    NSProgress *_progress;
}

@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateReportForRequestID:(id)arg1 withSecondsRemaining:(double)arg2 bytesDownloaded:(unsigned long long)arg3;
- (id)initWithProgress:(id)arg1;

@end

