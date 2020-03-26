//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSSet, NSString;

@interface PKInstallmentPlanProduct : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _upgradeEligible;
    NSString *_identifier;
    NSString *_model;
    NSString *_capacity;
    NSString *_color;
    NSUInteger _warrantyYears;
    NSSet *_features;
    NSString *_serialNumber;
    NSDictionary *_iconURLs;
    NSDictionary *_splashImageURLs;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *splashImageURLs; // @synthesize splashImageURLs=_splashImageURLs;
@property(copy, nonatomic) NSDictionary *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSSet *features; // @synthesize features=_features;
@property(nonatomic) NSUInteger warrantyYears; // @synthesize warrantyYears=_warrantyYears;
@property(nonatomic, getter=isUpgradeEligible) BOOL upgradeEligible; // @synthesize upgradeEligible=_upgradeEligible;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *capacity; // @synthesize capacity=_capacity;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToInstallmentPlanProduct:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)_imageURLFromImageURLs:(id)arg1 forScale:(double)arg2 suffix:(id)arg3;
- (id)splashImageURLForScale:(double)arg1 suffix:(id)arg2;
- (id)iconURLForScale:(double)arg1 suffix:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end
