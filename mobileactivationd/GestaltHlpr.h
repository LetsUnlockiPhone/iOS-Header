//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GestaltHlpr : NSObject
{
}

+ (id)getSharedInstance;
- (void)updateRecertInfo:(id)arg1 storebag_recert:(_Bool)arg2 errors:(id *)arg3;
- (id)copyRegulatoryImagesInfo:(id *)arg1;
- (id)copyDeviceInfo:(id *)arg1;
- (id)copyDeviceIDInfo:(id *)arg1;
- (void)addAGestaltKey:(struct __CFString *)arg1 toDictionary:(id)arg2 required:(_Bool)arg3 errors:(id)arg4;
- (_Bool)getBoolAnswer:(struct __CFString *)arg1;
- (id)copyAnswer:(struct __CFString *)arg1;

@end

