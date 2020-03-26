//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CNUnfairLock : NSObject <NSLocking>
{
//     struct os_unfair_lock_s _os_unfair_lock;
}

- (void)assertCurrentThreadIsNotOwner;
- (void)assertCurrentThreadIsOwner;
- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (id)description;
- (id)init;

@end
