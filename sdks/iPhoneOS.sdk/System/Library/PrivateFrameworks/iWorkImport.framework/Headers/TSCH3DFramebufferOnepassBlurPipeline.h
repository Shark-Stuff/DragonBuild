//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline
{
    tvec2_84d5962d mPixelSize;
}

+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2_84d5962d )arg3;
@property(readonly, nonatomic) tvec2_84d5962d pixelSize; // @synthesize pixelSize=mPixelSize;
- (id).cxx_construct;
- (void)updateShaderEffectsStates;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2_84d5962d )arg3;

@end
