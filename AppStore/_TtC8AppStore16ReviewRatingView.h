//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface _TtC8AppStore16ReviewRatingView : UIView
{
    // Error parsing type: , name: rating
    // Error parsing type: , name: starSize
    // Error parsing type: , name: showsEmptyStars
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic, readonly) UIImage *starFilled;
@property(nonatomic, readonly) UIImage *starHollow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool showsEmptyStars; // @synthesize showsEmptyStars;
@property(nonatomic) double rating; // @synthesize rating;

@end

