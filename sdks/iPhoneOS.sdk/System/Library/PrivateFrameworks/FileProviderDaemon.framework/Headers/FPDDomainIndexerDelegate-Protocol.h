//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FPDDomainIndexer, NSArray, NSData, NSError;

@protocol FPDDomainIndexerDelegate <NSObject>
- (void)extensionIndexer:(FPDDomainIndexer *)arg1 didIndexOneBatchWithError:(NSError *)arg2 updatedItems:(NSArray *)arg3 deletedIDs:(NSArray *)arg4 anchor:(NSData *)arg5 anchorPersisted:(void (^)(NSError *))arg6;
- (void)extensionIndexer:(FPDDomainIndexer *)arg1 didChangeNeedsAuthentification:(BOOL)arg2;
@end

