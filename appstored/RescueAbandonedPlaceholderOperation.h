//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface RescueAbandonedPlaceholderOperation : ISOperation
{
    NSString *_bundleID;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_fetchAppProxyForBundleID:(id)arg1 error:(id *)arg2;
- (_Bool)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id *)arg3;
- (void)_attemptRescueForBundleID:(id)arg1;
- (void)run;
@property(copy, nonatomic) CDUnknownBlockType outputBlock;
- (id)initWithBundleID:(id)arg1;

@end

