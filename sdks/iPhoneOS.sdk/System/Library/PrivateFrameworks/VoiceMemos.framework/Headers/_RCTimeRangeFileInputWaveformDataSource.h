//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCFileInputWaveformDataSource.h>

__attribute__((visibility("hidden")))
@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource
{
    BOOL _isDecomposedFragment;
}

@property(nonatomic) BOOL isDecomposedFragment; // @synthesize isDecomposedFragment=_isDecomposedFragment;
- (void)saveGeneratedWaveformIfNecessary;

@end
