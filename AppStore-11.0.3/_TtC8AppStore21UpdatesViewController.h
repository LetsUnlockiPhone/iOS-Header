//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

#import "_TtP11AppStoreKit20UpdatesPresenterView_-Protocol.h"

@class UIRefreshControl, _TtC8AppStore29UpdatesCollectionViewDelegate, _TtC8AppStore31UpdatesCollectionViewDataSource, _TtC8AppStore31UpdatesCollectionViewFlowLayout;

@interface _TtC8AppStore21UpdatesViewController : _TtC8AppStore29StoreCollectionViewController <_TtP11AppStoreKit20UpdatesPresenterView_>
{
    // Error parsing type: , name: presenter
    // Error parsing type: , name: artworkLoader
    // Error parsing type: , name: navigationDivider
    // Error parsing type: , name: noUpdatesView
    // Error parsing type: , name: updatesCollectionViewLayout
    // Error parsing type: , name: updatesCollectionViewDataSource
    // Error parsing type: , name: updatesCollectionViewDelegate
    // Error parsing type: , name: refreshControl
    // Error parsing type: , name: showingWhatsNewOverlay
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)refreshUpdateAllButton;
- (void)fetchUpdates;
- (void)showNoUpdates;
- (void)showWhatsNewOverlayWithText:(id)arg1;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)performWithDataSourceUpdates:(CDUnknownBlockType)arg1 batchUpdates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadData;
- (void)showWithUpdateError:(id)arg1;
- (void)showWithNextPageError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)setUpdateBadgeCount:(id)arg1;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) UIRefreshControl *refreshControl; // @synthesize refreshControl;
@property(nonatomic, retain) _TtC8AppStore29UpdatesCollectionViewDelegate *updatesCollectionViewDelegate; // @synthesize updatesCollectionViewDelegate;
@property(nonatomic, retain) _TtC8AppStore31UpdatesCollectionViewDataSource *updatesCollectionViewDataSource; // @synthesize updatesCollectionViewDataSource;
@property(nonatomic, readonly) _TtC8AppStore31UpdatesCollectionViewFlowLayout *updatesCollectionViewLayout; // @synthesize updatesCollectionViewLayout;

@end

