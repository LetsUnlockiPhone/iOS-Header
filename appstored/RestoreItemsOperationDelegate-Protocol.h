//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISOperationDelegate-Protocol.h"

@class RestoreItemsOperation, RestoreItemsResponse;

@protocol RestoreItemsOperationDelegate <ISOperationDelegate>

@optional
- (void)restoreItemsOperation:(RestoreItemsOperation *)arg1 didReceiveResponse:(RestoreItemsResponse *)arg2;
@end

