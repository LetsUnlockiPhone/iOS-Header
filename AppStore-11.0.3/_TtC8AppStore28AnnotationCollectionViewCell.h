//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSString, UIImageView, UIView;

@interface _TtC8AppStore28AnnotationCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: disclosureView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: summaryLabel
    // Error parsing type: , name: detailViewPool
    // Error parsing type: , name: detailViews
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: titleText
    // Error parsing type: , name: explicitSummary
    // Error parsing type: , name: detailItems
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) NSArray *accessibilityDetailItems;
@property(nonatomic, copy) NSString *explicitSummary; // @synthesize explicitSummary;
@property(nonatomic, copy) NSString *titleText; // @synthesize titleText;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded;
@property(nonatomic, readonly) _Bool isSeparatorDisplayed;
@property(nonatomic, readonly) _Bool isDisclosureDisplayed;
@property(nonatomic, readonly) _Bool isSummaryExpandable;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) UIView *separatorView; // @synthesize separatorView;
@property(nonatomic, retain) UIImageView *disclosureView; // @synthesize disclosureView;

@end

