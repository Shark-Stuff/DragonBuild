//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentSetupProduct;

@interface PKPaymentSetupProductCell : PKTableViewCell
{
    BOOL _drawsTopSeperator;
    PKPaymentSetupProduct *_product;
    double _textLabelOffset;
}

+ (id)reuseIdentifier;
@property(nonatomic) BOOL drawsTopSeperator; // @synthesize drawsTopSeperator=_drawsTopSeperator;
@property(nonatomic) double textLabelOffset; // @synthesize textLabelOffset=_textLabelOffset;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateDisplay;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
