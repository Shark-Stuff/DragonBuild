//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPSearchMatcher, NSMutableDictionary;

@interface _MFSearchMatcherContext : NSObject
{
    CPSearchMatcher *_lastMatcher;
    char _lastSearchString;
    NSUInteger _lastSearchStringLength;
    NSMutableDictionary *_matchers;
}

@property(retain, nonatomic) NSMutableDictionary *matchers; // @synthesize matchers=_matchers;
@property(nonatomic) NSUInteger lastSearchStringLength; // @synthesize lastSearchStringLength=_lastSearchStringLength;
@property(nonatomic) char lastSearchString; // @synthesize lastSearchString=_lastSearchString;
@property(retain, nonatomic) CPSearchMatcher *lastMatcher; // @synthesize lastMatcher=_lastMatcher;
// - (void).cxx_destruct;
- (void)flush;
- (void)dealloc;

@end
