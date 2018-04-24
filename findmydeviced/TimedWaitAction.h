//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class FMDispatchTimer, NSDate, NSString;
@protocol Action;

@interface TimedWaitAction : NSObject <Action>
{
    id <Action> _embeddedAction;
    NSDate *_executionDate;
    FMDispatchTimer *_timer;
}

@property(retain, nonatomic) FMDispatchTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *executionDate; // @synthesize executionDate=_executionDate;
@property(retain, nonatomic) id <Action> embeddedAction; // @synthesize embeddedAction=_embeddedAction;
- (void).cxx_destruct;
- (void)willCancelAction;
- (_Bool)shouldWaitForAction:(id)arg1;
- (_Bool)shouldCancelAction:(id)arg1;
- (id)actionType;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1 executeAt:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
