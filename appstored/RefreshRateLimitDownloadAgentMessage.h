//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DownloadAgentMessage.h"

@interface RefreshRateLimitDownloadAgentMessage : DownloadAgentMessage
{
    long long _rateLimit;
}

+ (id)forPID:(long long)arg1 supervisor:(id)arg2;
+ (id)forAgent:(id)arg1;
@property(readonly, nonatomic) long long rateLimit; // @synthesize rateLimit=_rateLimit;
- (id)__apply__rateLimit:(long long)arg1;

@end

