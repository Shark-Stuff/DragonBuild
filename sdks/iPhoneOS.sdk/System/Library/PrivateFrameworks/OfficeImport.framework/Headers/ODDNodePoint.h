//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/ODDDataPoint.h>

@class NSMutableArray, ODDTransitionPoint;

__attribute__((visibility("hidden")))
@interface ODDNodePoint : ODDDataPoint
{
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

// - (void).cxx_destruct;
- (void)setSiblingTransition:(id)arg1;
- (id)siblingTransition;
- (void)setParentTransition:(id)arg1;
- (id)parentTransition;
- (void)addChild:(id)arg1 order:(NSUInteger)arg2;
- (id)children;
- (id)parent;
- (void)setType:(int)arg1;

@end
