//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSMutableArray, NSObject, TSDBezierPath, TSDCanvas, TSDDrawableInfo, TSDLayout, TSPObject, TSWPColumn, TSWPDrawableAttachment;
@protocol TSDHint, TSDInfo, TSWPColumnMetrics, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPStyleProvider;

@protocol TSWPLayoutTarget <NSObject>
@property(readonly, nonatomic) double maxAnchorY;
@property(readonly, nonatomic) BOOL layoutIsValid;
@property(readonly, nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) NSUInteger pageCount;
@property(readonly, nonatomic) NSUInteger pageNumber;
@property(readonly, nonatomic) BOOL wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) unsigned int naturalAlignment;
@property(readonly, nonatomic) unsigned int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) CGPoint anchorPoint;
@property(readonly, nonatomic) CGPoint position;
@property(readonly, nonatomic) CGSize currentSize;
@property(readonly, nonatomic) CGSize maxSize;
@property(readonly, nonatomic) CGSize minSize;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints nextTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
@property(readonly, retain, nonatomic) NSMutableArray *columns;
- (BOOL)isLayoutOffscreen;
- (void)addAttachmentLayout:(TSDLayout *)arg1;
- (NSArray *)currentAnchoredDrawableLayouts;
- (NSArray *)currentInlineDrawableLayouts;
- (TSDLayout *)validatedLayoutForAnchoredDrawable:(id <TSDInfo>)arg1;
- (TSDLayout *)layoutForInlineDrawable:(id <TSDInfo>)arg1;
- (NSUInteger)iterativeAttachmentPositioningMaxPassCount;
- (BOOL)shouldPositionAttachmentsIteratively;
- (CGRect)targetRectForCanvasRect:(CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(CGRect)arg1;
- (BOOL)isLastTarget;
- (NSObject<TSWPColumnMetrics> *)columnMetricsForCharIndex:(NSUInteger)arg1 outRange:(_NSRange )arg2;

@optional
@property(readonly, nonatomic) BOOL alwaysAllowWordSplit;
@property(readonly, nonatomic) BOOL pushAscendersIntoColumn;
@property(readonly, nonatomic) BOOL allowsDescendersToClip;
@property(readonly, nonatomic) BOOL ignoresEquationAlignment;
@property(readonly, nonatomic) unsigned int maxLineCount;
@property(readonly, nonatomic) double reservedWidthWhenTruncating;
@property(readonly, nonatomic) BOOL allowsLastLineTruncation;
@property(readonly, nonatomic) struct __CFLocale hyphenationLocale;
@property(readonly, nonatomic) BOOL shouldHyphenate;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) TSDCanvas *canvas;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, nonatomic) CGRect maskRect;
- (BOOL)adjustColumnOriginForAlignment;
- (BOOL)siblingTargetIsManipulatingDrawable:(TSDDrawableInfo *)arg1;
- (_NSRange)expandedRangeForLayoutRange:(_NSRange)arg1 styleProvider:(id <TSWPStyleProvider>)arg2;
- (TSDBezierPath *)interiorClippingPath;
- (BOOL)invalidateForPageCountChange;
- (unsigned int)pageIndex;
- (void)scaleTextPercentDidChange:(NSUInteger)arg1;
- (BOOL)drawableAttachment:(TSWPDrawableAttachment *)arg1 withLayout:(TSDLayout *)arg2 shouldPositionIterativelyInColumn:(TSWPColumn *)arg3;
- (void)drawableAttachment:(TSWPDrawableAttachment *)arg1 didFinalizePosition:(CGPoint)arg2;
- (void)drawableAttachment:(TSWPDrawableAttachment *)arg1 willStartNewIterationWithIndex:(NSUInteger)arg2;
- (void)startedIterativePositioningProcessForDrawableAttachment:(TSWPDrawableAttachment *)arg1;
- (CGPoint)anchoredAttachmentPositionFromLayoutPosition:(CGPoint)arg1;
- (CGPoint)layoutPositionFromAnchoredAttachmentPosition:(CGPoint)arg1;
- (CGPoint)layoutPositionFromInlineAttachmentPosition:(CGPoint)arg1;
@end
