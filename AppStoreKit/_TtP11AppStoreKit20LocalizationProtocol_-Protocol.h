//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreKit-1103/JSExport-Protocol.h>

@class NSDate, NSNumber, NSString;

@protocol _TtP11AppStoreKit20LocalizationProtocol_ <JSExport>
- (NSString *)relativeDate:(NSDate *)arg1;
- (NSString *)formatDate:(NSString *)arg1:(NSDate *)arg2;
- (NSString *)timeAgo:(NSDate *)arg1;
- (NSString *)formattedCount:(NSNumber *)arg1;
- (NSString *)fileSize:(NSNumber *)arg1;
- (NSString *)stringWithCount:(NSString *)arg1:(long long)arg2;
- (NSString *)string:(NSString *)arg1;
- (NSString *)decimal:(NSNumber *)arg1:(long long)arg2;
@property(nonatomic, readonly) NSString *identifier;
@end

