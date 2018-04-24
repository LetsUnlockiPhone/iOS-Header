//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDBLEBeacon.h"

#import "FMDDictionaryRepresentable-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface FMDAudioChannelStatus : FMDBLEBeacon <FMDDictionaryRepresentable, NSSecureCoding>
{
    _Bool _inflated;
    FMDAudioChannelStatus *_otherBeacon;
    NSString *_channelName;
    NSString *_address;
    NSNumber *_playingSound;
    NSNumber *_inEar;
    unsigned long long _availability;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool inflated; // @synthesize inflated=_inflated;
@property(nonatomic) unsigned long long availability; // @synthesize availability=_availability;
@property(retain, nonatomic) NSNumber *inEar; // @synthesize inEar=_inEar;
@property(retain, nonatomic) NSNumber *playingSound; // @synthesize playingSound=_playingSound;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) FMDAudioChannelStatus *otherBeacon; // @synthesize otherBeacon=_otherBeacon;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)muted;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 active:(_Bool)arg2;
- (id)initWithBLEDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

