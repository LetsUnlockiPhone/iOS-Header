//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataConsumerDefinition.h"

@class NSDictionary, NSString;

@interface MutableDataConsumerDefinition : DataConsumerDefinition
{
    _Bool overrideProgress;
    _Bool streamableZip;
    long long assetID;
    unsigned long long assetSize;
    unsigned long long bytesOffset;
    unsigned long long diskSpaceNeeded;
    NSString *name;
    NSDictionary *streamingZipOptions;
    NSString *transferPath;
}

@property(copy, nonatomic) NSString *transferPath; // @synthesize transferPath;
@property(copy, nonatomic) NSDictionary *streamingZipOptions; // @synthesize streamingZipOptions;
@property(nonatomic, getter=isStreamableZip) _Bool streamableZip; // @synthesize streamableZip;
@property(nonatomic) _Bool overrideProgress; // @synthesize overrideProgress;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) unsigned long long diskSpaceNeeded; // @synthesize diskSpaceNeeded;
@property(nonatomic) unsigned long long bytesOffset; // @synthesize bytesOffset;
@property(nonatomic) unsigned long long assetSize; // @synthesize assetSize;
@property(nonatomic) long long assetID; // @synthesize assetID;
- (void).cxx_destruct;

@end

