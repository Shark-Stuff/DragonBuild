//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableDictionary, NSOperationQueue, PFSharingRemakerOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PFSharingRemaker : NSObject
{
    NSObject<OS_dispatch_queue> *_remakerQueue;
    float _progress;
    NSMutableDictionary *_inProgressOperationByUUID;
    BOOL _remakerSuccess;
    BOOL _abortedRemaker;
    BOOL _cancelledRemaker;
    NSError *_remakerError;
    NSOperationQueue *_remakeOperationQueue;
    NSObject<OS_dispatch_source> *_progressTimer;
    PFSharingRemakerOptions *__options;
    NSArray *__operations;
    id /* CDUnknownBlockType */ __progressHandler;
    id /* CDUnknownBlockType */ __completionHandler;
}

+ (id)remakerWithOperations:(id)arg1 options:(id)arg2;
@property(copy, nonatomic, setter=_setCompletionHandler:) id /* CDUnknownBlockType */ _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(copy, nonatomic, setter=_setProgressHandler:) id /* CDUnknownBlockType */ _progressHandler; // @synthesize _progressHandler=__progressHandler;
@property(retain, nonatomic, setter=_setOperations:) NSArray *_operations; // @synthesize _operations=__operations;
@property(retain, nonatomic, setter=_setOptions:) PFSharingRemakerOptions *_options; // @synthesize _options=__options;
// - (void).cxx_destruct;
- (void)_abortWithUnderlyingOperationError:(id)arg1;
- (void)_completeOperationWithUUID:(id)arg1;
- (void)_configurePhotoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_configureVideoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_endSessionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)cancelRemaking;
- (void)_callProgressBlockWithProgress:(double)arg1;
- (double)_computeProgress;
- (void)_updateProgress;
- (void)remakeWithProgressHandler:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end
