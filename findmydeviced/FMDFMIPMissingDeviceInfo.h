//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMDFMIPMissingDeviceInfo : NSObject
{
    NSString *_udid;
    NSString *_serialNumber;
    NSString *_imei;
    NSString *_meid;
    NSString *_productType;
    NSString *_productVersion;
    NSString *_buildVersion;
}

@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *meid; // @synthesize meid=_meid;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
- (void).cxx_destruct;

@end

