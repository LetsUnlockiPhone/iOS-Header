//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString;

@interface _TtC8AppStore17StarRatingControl : UIControl
{
    // Error parsing type: , name: starCount
    // Error parsing type: , name: defaultStarPadding
    // Error parsing type: , name: rating
    // Error parsing type: , name: lastSentRating
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilitySetStarRatingFive;
- (void)accessibilitySetStarRatingFour;
- (void)accessibilitySetStarRatingThree;
- (void)accessibilitySetStarRatingTwo;
- (void)accessibilitySetStarRatingOne;
- (void)accessibilitySetStarRatingZero;
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRating:(unsigned long long)arg1;
@property(nonatomic) unsigned long long rating; // @synthesize rating;

@end

