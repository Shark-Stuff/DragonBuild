//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGSublayoutComposition.h>

@interface PXGStackedSublayoutComposition : PXGSublayoutComposition
{
    long long _axis;
    double _interlayoutSpacing;
    UIEdgeInsets _padding;
}

@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interlayoutSpacing; // @synthesize interlayoutSpacing=_interlayoutSpacing;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (CGRect)contentBounds;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(id /* CDUnknownBlockType */)arg2;
- (void)updateEstimatedSublayoutGeometries;
- (void)referenceSizeDidChange;
- (id)init;

@end
