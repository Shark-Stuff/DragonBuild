//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_workloop;

@interface RBSWorkloop : NSObject
{
    NSObject<OS_dispatch_workloop> *_calloutWorkloop;
    NSObject<OS_dispatch_workloop> *_backgroundWorkloop;
    NSObject<OS_dispatch_workloop> *_syncingWorkloop;
}

+ (id)createSyncingQueue:(id)arg1;
+ (void)performBackgroundWorkWithServiceClass:(unsigned int)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (void)performBackgroundWork:(id /* CDUnknownBlockType */)arg1;
+ (id)createBackgroundQueue:(id)arg1;
+ (id)sharedBackgroundWorkloop;
+ (void)performCalloutWithServiceClass:(unsigned int)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (void)performCallout:(id /* CDUnknownBlockType */)arg1;
+ (id)createCalloutQueue:(id)arg1;
+ (id)sharedCalloutWorkloop;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)_init;

@end
