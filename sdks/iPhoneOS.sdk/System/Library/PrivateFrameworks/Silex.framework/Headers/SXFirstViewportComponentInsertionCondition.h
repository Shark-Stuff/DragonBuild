//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionCondition-Protocol.h>

@interface SXFirstViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition>
{
    BOOL _allowFirstViewportException;
}

@property(nonatomic) BOOL allowFirstViewportException; // @synthesize allowFirstViewportException=_allowFirstViewportException;
- (BOOL)validateMarker:(id)arg1 componentTraits:(NSUInteger)arg2 layoutProvider:(id)arg3;
- (id)initWithAllowFirstViewportException:(BOOL)arg1;
- (id)init;

@end
