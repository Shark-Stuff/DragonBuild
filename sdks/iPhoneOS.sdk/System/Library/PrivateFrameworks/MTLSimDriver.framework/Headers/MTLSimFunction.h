//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLSimDriver/MTLFunction-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimFunction : NSObject <MTLFunction>
{
    id <MTLDevice> _device;
    unsigned int _functionRef;
    NSUInteger _functionType;
    NSString *label;
    NSUInteger patchType;
    long long patchControlPointCount;
    NSArray *vertexAttributes;
    NSArray *stageInputAttributes;
    NSString *name;
    NSDictionary *functionConstantsDictionary;
}

@property(readonly) NSDictionary *functionConstantsDictionary; // @synthesize functionConstantsDictionary;
@property(readonly) NSString *name; // @synthesize name;
@property(readonly) NSArray *stageInputAttributes; // @synthesize stageInputAttributes;
@property(readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes;
@property(readonly) long long patchControlPointCount; // @synthesize patchControlPointCount;
@property(readonly) NSUInteger patchType; // @synthesize patchType;
@property(copy) NSString *label; // @synthesize label;
@property(readonly) NSUInteger functionType; // @synthesize functionType=_functionType;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id)formattedDescription:(NSUInteger)arg1;
- (id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg1 reflection:(id )arg2;
- (id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg1;
@property(readonly) unsigned int functionRef;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 functionType:(NSUInteger)arg2 functionRef:(unsigned int)arg3;

@end
