//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP11AppStoreKit19ActionPresenterView_-Protocol.h"
#import "_TtP11AppStoreKit23CollectionPresenterView_-Protocol.h"
#import "_TtP11AppStoreKit23ReloadablePresenterView_-Protocol.h"

@class NSAttributedString, NSString;

@protocol _TtP11AppStoreKit20UpdatesPresenterView_ <_TtP11AppStoreKit19ActionPresenterView_, _TtP11AppStoreKit23CollectionPresenterView_, _TtP11AppStoreKit23ReloadablePresenterView_>
- (void)refreshUpdateAllButton;
- (void)showWhatsNewOverlayWithText:(NSAttributedString *)arg1;
- (void)setUpdateBadgeCount:(NSString *)arg1;
@end

