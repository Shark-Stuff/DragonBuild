//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SVVisiblePercentageProviding-Protocol.h>

@class SXViewport;

@interface SXComponentVisiblePercentageProvider : NSObject <SVVisiblePercentageProviding>
{
    SXViewport *_viewport;
}

@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
// - (void).cxx_destruct;
- (double)visiblePercentageOfObject:(id)arg1;
- (id)initWithViewport:(id)arg1;

@end
