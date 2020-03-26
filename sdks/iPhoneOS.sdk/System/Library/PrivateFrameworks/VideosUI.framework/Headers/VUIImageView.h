//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VUIImageView : UIImageView
{
    BOOL _selected;
    UIImage *_flatImage;
    UIImage *_highlightOrSelectedImage;
}

+ (id)imageWithImage:(id)arg1 existingImageView:(id)arg2;
@property(retain, nonatomic) UIImage *highlightOrSelectedImage; // @synthesize highlightOrSelectedImage=_highlightOrSelectedImage;
// - (void).cxx_destruct;
- (void)_updateImage;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;

@end
