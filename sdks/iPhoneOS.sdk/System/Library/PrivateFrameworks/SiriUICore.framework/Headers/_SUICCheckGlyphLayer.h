//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAGradientLayer, CAShapeLayer, UIColor;

@interface _SUICCheckGlyphLayer : CALayer
{
    CAShapeLayer *_checkPackageLayer;
    CAGradientLayer *_maskLayer;
    BOOL _covered;
    struct CATransform3D _uncoveredTransform;
    struct CATransform3D _coveredTransform;
    UIColor *_primaryColor;
}

@property(copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
// - (void).cxx_destruct;
- (double)_updateCovered:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (double)setCovered:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic) BOOL revealed;
- (void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_createMask;
- (double)_pointScaleToMatchBoundsSize:(CGSize)arg1;
- (void)layoutSublayers;
- (id)initWithFrame:(CGRect)arg1;

@end
