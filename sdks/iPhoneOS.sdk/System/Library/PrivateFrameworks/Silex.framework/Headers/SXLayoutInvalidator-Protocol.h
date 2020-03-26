//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NFPromise;
@protocol SXComponent;

@protocol SXLayoutInvalidator <NSObject>
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 suggestedSize:(CGSize)arg2 priority:(NSUInteger)arg3;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 suggestedSize:(CGSize)arg2;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1;
- (void)cancelPendingInvalidationForComponent:(id <SXComponent>)arg1;
- (void)mightInvalidateComponent:(id <SXComponent>)arg1;
@end
