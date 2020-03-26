//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CADIdleChangeTrackingCleanupInfo : NSObject
{
    int _numberOfChanges;
    double _languishPeriod;
}

+ (id)serverIdleChangeTrackingCleanupInfo;
@property(nonatomic) int numberOfChanges; // @synthesize numberOfChanges=_numberOfChanges;
@property(nonatomic) double languishPeriod; // @synthesize languishPeriod=_languishPeriod;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToInfo:(id)arg1;
- (id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2;

@end
