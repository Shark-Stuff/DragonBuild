//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class WKWebView;

__attribute__((visibility("hidden")))
@interface LPFetcherConfiguration : NSObject <NSCopying>
{
    WKWebView *_webViewForProcessSharing;
    long long _maximumResponseCount;
}

@property(nonatomic) long long maximumResponseCount; // @synthesize maximumResponseCount=_maximumResponseCount;
@property(retain, nonatomic) WKWebView *webViewForProcessSharing; // @synthesize webViewForProcessSharing=_webViewForProcessSharing;
// - (void).cxx_destruct;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;

@end
