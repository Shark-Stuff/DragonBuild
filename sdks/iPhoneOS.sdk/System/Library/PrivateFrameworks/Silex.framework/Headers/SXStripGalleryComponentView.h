//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXGalleryComponentView.h>

#import <Silex/SXFullscreenCanvasShowable-Protocol.h>
#import <Silex/SXFullscreenCaptionDataSource-Protocol.h>
#import <Silex/SXImageViewDelegate-Protocol.h>
#import <Silex/SXItemizedScrollViewDataSource-Protocol.h>
#import <Silex/SXItemizedScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, SXFullscreenCanvasController, SXImageView, SXItemizedScrollView, SXMediaViewEvent, UIView;
@protocol SXFullscreenCanvasControllerFactory, SXImageViewFactory;

@interface SXStripGalleryComponentView : SXGalleryComponentView <SXFullscreenCanvasShowable, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXImageViewDelegate, SXFullscreenCaptionDataSource>
{
    BOOL _loadedAtleastOneImage;
    id <SXImageViewFactory> _imageViewFactory;
    id <SXFullscreenCanvasControllerFactory> _canvasControllerFactory;
    double _xOffset;
    double _rightContentInset;
    NSArray *_imageResources;
    NSMutableArray *_imageViews;
    SXItemizedScrollView *_itemizedScrollView;
    long long _visibleImageViewIndex;
    UIView *_fullscreenGestureView;
    SXFullscreenCanvasController *_fullScreenCanvasController;
    SXMediaViewEvent *_mediaViewEvent;
    double _contentOffset;
    double _contentWidth;
    NSUInteger _lastPreloadViewIndex;
    SXImageView *_targetGalleryItem;
    NSMutableSet *_exposedGalleryItems;
}

@property(retain, nonatomic) NSMutableSet *exposedGalleryItems; // @synthesize exposedGalleryItems=_exposedGalleryItems;
@property(retain, nonatomic) SXImageView *targetGalleryItem; // @synthesize targetGalleryItem=_targetGalleryItem;
@property(nonatomic) NSUInteger lastPreloadViewIndex; // @synthesize lastPreloadViewIndex=_lastPreloadViewIndex;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(readonly, nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) BOOL loadedAtleastOneImage; // @synthesize loadedAtleastOneImage=_loadedAtleastOneImage;
@property(retain, nonatomic) SXMediaViewEvent *mediaViewEvent; // @synthesize mediaViewEvent=_mediaViewEvent;
@property(retain, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // @synthesize fullScreenCanvasController=_fullScreenCanvasController;
@property(nonatomic) __weak UIView *fullscreenGestureView; // @synthesize fullscreenGestureView=_fullscreenGestureView;
@property(nonatomic) long long visibleImageViewIndex; // @synthesize visibleImageViewIndex=_visibleImageViewIndex;
@property(retain, nonatomic) SXItemizedScrollView *itemizedScrollView; // @synthesize itemizedScrollView=_itemizedScrollView;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSArray *imageResources; // @synthesize imageResources=_imageResources;
@property(readonly, nonatomic) double rightContentInset; // @synthesize rightContentInset=_rightContentInset;
@property(readonly, nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(readonly, nonatomic) id <SXFullscreenCanvasControllerFactory> canvasControllerFactory; // @synthesize canvasControllerFactory=_canvasControllerFactory;
@property(readonly, nonatomic) id <SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
// - (void).cxx_destruct;
- (BOOL)allowHierarchyRemoval;
- (void)preloadAdjacentViewsForIndex:(NSUInteger)arg1;
- (void)finishMediaViewEvent;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (void)submitEvents;
- (void)trackExposedGalleryItems;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)contentSizeCategoryForCaption:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (id)textStyleForIdentifier:(id)arg1;
- (id)textRulesForCaption:(id)arg1;
- (id)textResizerForCaption:(id)arg1;
- (BOOL)gestureShouldBegin:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (CGRect)snapRegion;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)imageViewForLocation:(CGPoint)arg1;
- (id)hostingView;
- (BOOL)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(NSUInteger)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(NSUInteger)arg3;
- (id)fullScreenCanvasController:(id)arg1 copyViewForShowable:(id)arg2 viewIndex:(NSUInteger)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(NSUInteger)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(NSUInteger)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(NSUInteger)arg3;
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(NSUInteger)arg3;
- (BOOL)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(NSUInteger)arg3;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(NSUInteger)arg3;
- (NSUInteger)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(CGPoint)arg2 inShowable:(id)arg3;
- (CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(NSUInteger)arg3 withinRect:(CGRect)arg4;
- (CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(NSUInteger)arg4;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(NSUInteger)arg3;
- (NSUInteger)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(NSUInteger)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (id)visibleGalleryItemViewForImageIdentifier:(id)arg1;
- (NSUInteger)analyticsGalleryType;
- (NSUInteger)analyticsMediaType;
- (BOOL)usesThumbnailWithImageIdentifier:(id)arg1;
- (CGRect)transitionContentFrame;
- (CGRect)transitionVisibleFrame;
- (id)transitionContentView;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)itemizedScrollViewWillReindex:(id)arg1;
- (BOOL)itemizedScrollView:(id)arg1 isAllowedToAddViewInHierarchy:(NSUInteger)arg2;
- (void)itemizedScrollView:(id)arg1 didShowViewWithIndex:(NSUInteger)arg2;
- (void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(NSUInteger)arg2;
- (double)gutterBetweenItemsInNotPagingItemizedScrollView:(id)arg1;
- (id)itemizedScrollView:(id)arg1 viewAtIndex:(NSUInteger)arg2;
- (CGRect)itemizedScrollView:(id)arg1 frameForViewAtIndex:(NSUInteger)arg2;
- (NSUInteger)numberOfViewsInItemizedScrollView:(id)arg1;
- (id)createViewForViewIndex:(NSUInteger)arg1;
- (void)discardContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)loadComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 imageViewFactory:(id)arg8 canvasControllerFactory:(id)arg9;

@end
