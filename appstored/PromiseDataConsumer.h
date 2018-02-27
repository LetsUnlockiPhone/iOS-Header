//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractDataConsumer.h"

#import "DataConsumer-Protocol.h"

@class DataConsumerDefinition, IXDataPromise, NSString;
@protocol PromiseProvider, StreamProcessor;

@interface PromiseDataConsumer : AbstractDataConsumer <DataConsumer>
{
    DataConsumerDefinition *_definition;
    _Bool _overrideProgress;
    IXDataPromise *_promise;
    id <PromiseProvider> _promiseProvider;
    id <StreamProcessor> _processor;
}

- (void).cxx_destruct;
- (_Bool)_setNewPromiseWithMonad:(id)arg1 error:(id *)arg2;
- (_Bool)_setNewProcessorWithMonad:(id)arg1 error:(id *)arg2;
- (id)_newStreamProcessorWithError:(id *)arg1;
- (unsigned long long)resumptionOffset;
- (double)percentComplete;
- (_Bool)overrideProgress;
- (_Bool)isDataComplete;
- (_Bool)hasConsumedData;
- (unsigned long long)diskUsage;
- (unsigned long long)bytesOffset;
- (_Bool)truncateWithError:(id *)arg1;
- (_Bool)suspendWithError:(id *)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)finishWithError:(id *)arg1;
- (_Bool)failWithReason:(id)arg1 error:(id *)arg2;
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;
- (id)initWithPromiseProvider:(id)arg1 promiseID:(id)arg2 definition:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

