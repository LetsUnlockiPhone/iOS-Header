//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface ASKCellularDataInquiry : NSObject
{
    NSBundle *_bundle;
}

+ (id)settingsURL;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isEnabledForBundle;
@property(readonly, nonatomic) _Bool isEnabledForDevice;
@property(readonly, nonatomic) _Bool isSupported;
- (id)init;
- (id)initWithBundle:(id)arg1;

@end

