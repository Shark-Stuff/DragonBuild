//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IPAPreviewSizeRegistry : NSObject
{
    NSString *_name;
    NSMutableDictionary *_policies;
}

// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)policyForStyleObject:(id)arg1;
- (id)policyForStyle:(NSUInteger)arg1;
- (void)addPolicy:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end
