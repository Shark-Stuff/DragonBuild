//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@interface PLInstrumentedOperationQueue : NSOperationQueue
{
    id /* CDUnknownBlockType */ _pl_operationCountChangedBlock;
}

@property(copy) id /* CDUnknownBlockType */ pl_operationCountChangedBlock; // @synthesize pl_operationCountChangedBlock=_pl_operationCountChangedBlock;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)init;

@end
