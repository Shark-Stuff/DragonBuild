//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/SBUIBannerView-Protocol.h>

@class CPSBannerItem, SBUIBannerContext;

@interface CPSBannerView : UIView <SBUIBannerView>
{
    CPSBannerItem *_bannerItem;
    SBUIBannerContext *_bannerContext;
}

@property(retain, nonatomic) SBUIBannerContext *bannerContext; // @synthesize bannerContext=_bannerContext;
@property(retain, nonatomic) CPSBannerItem *bannerItem; // @synthesize bannerItem=_bannerItem;
// - (void).cxx_destruct;
- (id)applicationIconImage;
- (void)updateBannerWithBannerItem:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
