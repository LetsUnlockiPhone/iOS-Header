//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, _TtC8AppStore17LockupScreenshots, _TtC8AppStore21SmallSearchLockupView, _TtC8AppStore9VideoView;

@interface _TtC8AppStore37ContentSearchResultCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: regularWidthColumnSpacing
    // Error parsing type: , name: lockupView
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: screenshots
    // Error parsing type: , name: preferredImageSizes
}

+ (struct CGSize)itemSizeWithDescriptionText:(id)arg1 hasScreenshots:(_Bool)arg2 fitting:(struct CGSize)arg3 in:(id)arg4 on:(id)arg5;
+ (struct CGSize)availableScreenshotsSpaceForSize:(struct CGSize)arg1 traitCollection:(id)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool includeVideo;
@property(nonatomic, retain) _TtC8AppStore9VideoView *videoView;
@property(nonatomic, readonly) _TtC8AppStore17LockupScreenshots *screenshots; // @synthesize screenshots;
@property(nonatomic, copy) NSString *descriptionText;
@property(nonatomic, readonly) _TtC8AppStore21SmallSearchLockupView *lockupView; // @synthesize lockupView;
@property(nonatomic) double regularWidthColumnSpacing; // @synthesize regularWidthColumnSpacing;

@end

