//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class VideosExtrasCarouselViewController;

@protocol VideosExtrasCarouselViewControllerDelegate <NSObject>

@optional
- (void)carouselViewController:(VideosExtrasCarouselViewController *)arg1 didSelectItemAtIndex:(NSUInteger)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)carouselViewController:(VideosExtrasCarouselViewController *)arg1 didHighlightItemAtIndex:(NSUInteger)arg2;
@end
