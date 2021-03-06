//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreKit-1103/ASKResourceRequest.h>

@class NSURLRequest, SSVURLDataConsumer;
@protocol ASKImageRequestDelegate;

@interface ASKImageRequest : ASKResourceRequest
{
    SSVURLDataConsumer *_dataConsumer;
    NSURLRequest *_urlRequest;
    id <ASKImageRequestDelegate> _delegate;
}

+ (id)searchBundles;
+ (void)setSearchBundles:(id)arg1;
@property(readonly, nonatomic) __weak id <ASKImageRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) SSVURLDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (void).cxx_destruct;
- (void)didLoadResource:(id)arg1 error:(id)arg2;
- (id)makeLoadOperation;
- (unsigned long long)cacheOptions;
@property(readonly, nonatomic) _Bool isResourceRequest;
- (id)description;
- (id)init;
- (id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 delegate:(id)arg3;

@end

