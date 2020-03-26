//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CRKApplicationInfo : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_shortVersionString;
}

+ (id)bundleIdentifiersFromDictionaryRepresentations:(id)arg1;
+ (id)bundleIdentifierFromDictionaryRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 shortVersionString:(id)arg2;

@end
