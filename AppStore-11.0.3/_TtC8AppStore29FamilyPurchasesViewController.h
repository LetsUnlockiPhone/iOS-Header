//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

#import "_TtP11AppStoreKit28FamilyPurchasesPresenterView_-Protocol.h"

@interface _TtC8AppStore29FamilyPurchasesViewController : _TtC8AppStore29StoreCollectionViewController <_TtP11AppStoreKit28FamilyPurchasesPresenterView_>
{
    // Error parsing type: , name: presenter
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)showWithUpdateError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)reloadWithSections:(id)arg1;
- (void)reloadData;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;

@end

