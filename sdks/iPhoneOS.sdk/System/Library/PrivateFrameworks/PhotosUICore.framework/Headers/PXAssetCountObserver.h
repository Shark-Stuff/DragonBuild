//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class PHFetchResult, PHPhotoLibrary;
@protocol OS_dispatch_queue, PXAssetCountObserverDelegate;

@interface PXAssetCountObserver : NSObject <PXPhotoLibraryUIChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
    NSUInteger _numberOfAssets;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <PXAssetCountObserverDelegate> _delegate;
    PHFetchResult *_fetchResult;
}

@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(nonatomic) NSUInteger numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(nonatomic) __weak id <PXAssetCountObserverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_serialQueue_observeInternalFetchPredicate:(id)arg1;
- (void)_serialQueue_observeReferencedAssets;
- (id)_fetchOptions;
- (void)observeInternalFetchPredicate:(id)arg1;
- (void)observeReferencedAssets;
- (id)initWithPhotoLibrary:(id)arg1 qosClass:(unsigned int)arg2;
- (id)init;

@end
