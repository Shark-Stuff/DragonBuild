//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PHMemory;

@interface PXDebugMemoryGeneratorsCollectionItem : NSObject
{
    NSString *_name;
    NSString *_description;
    NSDictionary *_options;
    PHMemory *_memory;
    NSString *_rejectionCause;
}

@property(readonly) NSString *rejectionCause; // @synthesize rejectionCause=_rejectionCause;
@property(readonly) PHMemory *memory; // @synthesize memory=_memory;
@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(readonly) NSString *description; // @synthesize description=_description;
@property(readonly) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithMemory:(id)arg1 memoryInfo:(id)arg2;
- (id)initWithOptions:(id)arg1;

@end
