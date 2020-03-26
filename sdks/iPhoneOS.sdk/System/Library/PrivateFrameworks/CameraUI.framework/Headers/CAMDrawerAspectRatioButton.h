//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlDrawerMenuButton.h>

@class NSMutableDictionary;

@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton
{
    long long _aspectRatio;
    NSMutableDictionary *__imagesByText;
}

@property(readonly, nonatomic) NSMutableDictionary *_imagesByText; // @synthesize _imagesByText=__imagesByText;
@property(nonatomic) long long aspectRatio; // @synthesize aspectRatio=_aspectRatio;
// - (void).cxx_destruct;
- (id)hudItemForMenuItem:(id)arg1;
- (id)hudItemForMenuHeader;
- (void)updateImage;
- (id)_imageForAspectRatio:(long long)arg1;
- (id)_titleForAspectRatio:(long long)arg1;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (id)loadMenuItems;
- (BOOL)isMenuItemSelected:(id)arg1;
- (long long)controlType;
- (id)initWithLayoutStyle:(long long)arg1;

@end
