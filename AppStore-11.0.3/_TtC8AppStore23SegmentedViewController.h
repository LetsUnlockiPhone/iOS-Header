//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView, _TtC8AppStore21PaletteBackgroundView;

@interface _TtC8AppStore23SegmentedViewController : UIViewController
{
    // Error parsing type: , name: headerBackgroundView
    // Error parsing type: , name: headerView
    // Error parsing type: , name: segments
    // Error parsing type: , name: selectedIndex
    // Error parsing type: , name: selectedViewController
    // Error parsing type: , name: columnViewControllers
    // Error parsing type: , name: selectorControl
}

+ (long long)columnarMaxCount;
+ (long long)noSelectedIndex;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)takeSelectedIndexFrom:(id)arg1;
@property(nonatomic, readonly) _Bool isColumnar;
- (_Bool)isColumnarWith:(id)arg1;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
@property(nonatomic, retain) UIView *headerView; // @synthesize headerView;
@property(nonatomic, readonly) _TtC8AppStore21PaletteBackgroundView *headerBackgroundView; // @synthesize headerBackgroundView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

