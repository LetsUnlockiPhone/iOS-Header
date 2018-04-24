//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface FMDNanoSupportProtoNeedSignatureV5 : PBCodable <NSCopying>
{
    NSString *_activationLockRequestUUIDString;
    NSData *_requestJsonData;
}

@property(retain, nonatomic) NSString *activationLockRequestUUIDString; // @synthesize activationLockRequestUUIDString=_activationLockRequestUUIDString;
@property(retain, nonatomic) NSData *requestJsonData; // @synthesize requestJsonData=_requestJsonData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasActivationLockRequestUUIDString;

@end

