//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreKit-1103/_TtP11AppStoreKit19ActionPresenterView_-Protocol.h>
#import <AppStoreKit-1103/_TtP11AppStoreKit23ReloadablePresenterView_-Protocol.h>

@class NSString;

@protocol _TtP11AppStoreKit20AccountPresenterView_ <_TtP11AppStoreKit19ActionPresenterView_, _TtP11AppStoreKit23ReloadablePresenterView_>
- (void)reloadWithSection:(long long)arg1;
- (void)showSignInErrorText:(NSString *)arg1;
@property(nonatomic) _Bool authenticating;
@end

