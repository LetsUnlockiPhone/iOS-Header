//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASGreenTeaLogger : NSObject
{
    struct ct_green_tea_logger_s *_logger;
}

@property(readonly, nonatomic) struct ct_green_tea_logger_s *logger; // @synthesize logger=_logger;
- (void)willTransmitLocationForSearch;
- (void)willAccessLocationForSearch;
- (void)dealloc;
- (id)init;

@end

