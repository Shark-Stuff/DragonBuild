//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface VUIMediaLibraryContentsChange : NSObject <NSCopying>
{
    NSUInteger _revision;
}

@property(nonatomic) NSUInteger revision; // @synthesize revision=_revision;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithRevision:(NSUInteger)arg1;
- (id)init;

@end
