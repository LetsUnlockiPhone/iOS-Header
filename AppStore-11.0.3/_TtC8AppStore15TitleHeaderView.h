//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIView, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore15TitleHeaderView : UICollectionReusableView
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: detailLabel
    // Error parsing type: , name: style
    // Error parsing type: , name: accessoryView
    // Error parsing type: , name: accessoryType
    // Error parsing type: , name: accessoryAction
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: separatorInset
    // Error parsing type: , name: topInset
}

+ (_Bool)isFourInch;
+ (id)pageWithTrailingSeparatorReuseIdentifier;
+ (id)pageWithDetailReuseIdentifier;
+ (id)pageReuseIdentifier;
+ (double)largeTitleFourInchDelta;
+ (double)tallTextLineHeightMultiple;
+ (double)accessoryMargin;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didTapWithAccessoryView:(id)arg1;
@property(nonatomic) double topInset; // @synthesize topInset;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset;
@property(nonatomic) _Bool hasSeparator;
@property(nonatomic, readonly) UIView *separatorView; // @synthesize separatorView;
@property(nonatomic, copy) CDUnknownBlockType accessoryAction; // @synthesize accessoryAction;
@property(nonatomic, retain) UIView *accessoryView; // @synthesize accessoryView;
@property(nonatomic, retain) _TtC8AppStore16DynamicTypeLabel *detailLabel; // @synthesize detailLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
- (_Bool)_disableRasterizeInAnimations;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
