//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, _TtC8AppStore11OfferButton, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore22InAppPurchaseTiledView;

@interface _TtC8AppStore43InAppPurchaseSearchResultCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: bodyBackgroundColor
    // Error parsing type: , name: inAppPurchaseLabel
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: offerButton
    // Error parsing type: , name: body
    // Error parsing type: , name: iconView
    // Error parsing type: , name: inAppDescription
}

+ (struct CGSize)preferredIconSize;
+ (double)compactBodyHorizontalComponentSpacingPercentage;
+ (double)compactBodySideEdgeInsetPercentage;
+ (double)compactIconDimensionPercentage;
+ (double)regularBodyHorizontalComponentSpacingPercentage;
+ (double)regularBodySideEdgeInsetPercentage;
+ (double)regularIconDimensionPercentage;
+ (struct UIEdgeInsets)viewLayoutMargins;
- (CDUnknownBlockType).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) NSString *descriptionText;
@property(nonatomic, readonly) _TtC8AppStore22InAppPurchaseTiledView *iconView; // @synthesize iconView;
@property(nonatomic, readonly) _TtC8AppStore11OfferButton *offerButton; // @synthesize offerButton;
@property(nonatomic, copy) NSString *subtitleText;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, copy) NSString *titleText;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *inAppPurchaseLabel; // @synthesize inAppPurchaseLabel;
@property(nonatomic, readonly) UIColor *bodyBackgroundColor; // @synthesize bodyBackgroundColor;

@end

