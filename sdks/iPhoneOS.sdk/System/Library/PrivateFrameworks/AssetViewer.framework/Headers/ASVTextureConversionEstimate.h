//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVTextureDescription.h>

@interface ASVTextureConversionEstimate : ASVTextureDescription
{
    long long _converterType;
    CDStruct_ba838cea _estimatedMemoryDelta;
}

+ (id)conversionEstimatesSortedByPeakMemoryUsage:(id)arg1;
+ 
+ (NSUInteger)peakMemoryForConversionEstimates:(id)arg1;
+ 
+ 
@property(nonatomic) CDStruct_ba838cea estimatedMemoryDelta; // @synthesize estimatedMemoryDelta=_estimatedMemoryDelta;
@property(nonatomic) long long converterType; // @synthesize converterType=_converterType;
- (id)debugDescription;
@property(readonly, nonatomic) NSUInteger weight;
- (NSUInteger)peakMemoryUsage;
- (void)updateFromConverter:(id)arg1;
- (id)initWithTextureDescription:(id)arg1 converter:(id)arg2;

@end
