//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface HRListItemLabel : UIView
{
    BOOL _centerItemViewToFirstLine;
    BOOL _boldText;
    UIView *_itemView;
    UILabel *_textLabel;
    NSString *_text;
    NSLayoutConstraint *_itemViewTextAlignmentConstraint;
    NSLayoutConstraint *_topToTextLabelFirstBaselineConstraint;
    CGSize _itemViewSize;
}

@property(retain, nonatomic) NSLayoutConstraint *topToTextLabelFirstBaselineConstraint; // @synthesize topToTextLabelFirstBaselineConstraint=_topToTextLabelFirstBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *itemViewTextAlignmentConstraint; // @synthesize itemViewTextAlignmentConstraint=_itemViewTextAlignmentConstraint;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) CGSize itemViewSize; // @synthesize itemViewSize=_itemViewSize;
@property(nonatomic) BOOL boldText; // @synthesize boldText=_boldText;
@property(nonatomic) BOOL centerItemViewToFirstLine; // @synthesize centerItemViewToFirstLine=_centerItemViewToFirstLine;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
// - (void).cxx_destruct;
- (double)_textLabelLastBaselineToBottom;
- (double)_topToTextLabelFirstBaseline;
- (id)_textLabelBoldFont;
- (id)_textLabelFont;
- (id)_textLabelFontStyle;
- (void)_updateItemViewTextAlignmentConstraint;
- (void)_updateTextLabelFont;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithView:(id)arg1 size:(CGSize)arg2 text:(id)arg3;

@end
