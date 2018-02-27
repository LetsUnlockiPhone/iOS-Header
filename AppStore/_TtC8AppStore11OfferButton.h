//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "_TtP11AppStoreKit24OfferButtonPresenterView_-Protocol.h"

@class CAShapeLayer, NSString, UIImageView, UIView, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore11OfferButton : UIControl <_TtP11AppStoreKit24OfferButtonPresenterView_>
{
    // Error parsing type: , name: effectShape
    // Error parsing type: , name: outlineShape
    // Error parsing type: , name: imageView
    // Error parsing type: , name: label
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: presenter
    // Error parsing type: , name: layoutDelegate
    // Error parsing type: , name: isEnabledObserver
    // Error parsing type: , name: isConfigurationLayoutEnabled
    // Error parsing type: , name: configuration
    // Error parsing type: , name: effectStyle
}

- (CDUnknownBlockType).cxx_destruct;
- (void)configureOutlineShapeTo:(const struct CGPath *)arg1 isIndeterminateProgress:(_Bool)arg2 animated:(_Bool)arg3;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 backgroundBlur:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performWithoutAnimationOrLayout:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool isConfigurationLayoutEnabled; // @synthesize isConfigurationLayoutEnabled;
@property(nonatomic) __weak UIView *layoutDelegate; // @synthesize layoutDelegate;
@property(nonatomic, copy) id presenter; // @synthesize presenter;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *label; // @synthesize label;
@property(nonatomic, readonly) UIImageView *imageView; // @synthesize imageView;
@property(nonatomic, readonly) CAShapeLayer *outlineShape; // @synthesize outlineShape;
@property(nonatomic, readonly) CAShapeLayer *effectShape; // @synthesize effectShape;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)removeAllActionsForTarget:(id)arg1;
- (void)addButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)showWithUpdateError:(id)arg1;
- (void)showWithProgress:(double)arg1 aligned:(long long)arg2 theme:(long long)arg3;
- (void)showRedownloadWithAligned:(long long)arg1 theme:(long long)arg2;
- (void)showWithConfirmation:(id)arg1 theme:(long long)arg2;
- (void)showWithText:(id)arg1 theme:(long long)arg2;
- (void)showWithText:(id)arg1 subtitleText:(id)arg2 subtitlePosition:(long long)arg3 theme:(long long)arg4;
- (void)showWithEnabled:(_Bool)arg1;
- (void)showLoadingWithAligned:(long long)arg1 theme:(long long)arg2;
- (void)showLoading;
- (void)hideLoading;
@property(nonatomic, copy) NSString *accessibilityOfferButtonString;

@end
