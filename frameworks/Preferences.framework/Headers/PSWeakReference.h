//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PSWeakReference : NSObject <NSCopying>
{
    id _location;
}

+ (id)weakReferenceWithObject:(id)arg1;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)object;
- (id)initWithObject:(id)arg1;

@end
