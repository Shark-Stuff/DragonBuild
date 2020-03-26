//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGEventGeocode : NSObject
{
}

+ (id)poiCategoriesFromString:(id)arg1;
+ (void)geocodeEvent:(id)arg1 withCallback:(id /* CDUnknownBlockType */)arg2;
+ (id)geocodeEvent:(id)arg1;
+ (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
+ (void)geocodeLocation:(id)arg1 usingMode:(NSUInteger)arg2 withGeoFilters:(id)arg3 withCallback:(id /* CDUnknownBlockType */)arg4;
+ (void)geocodePOIWithName:(id)arg1 ofTypes:(id)arg2 inRegion:(id)arg3 withCallback:(id /* CDUnknownBlockType */)arg4;
+ (void)geocodeAddressWithCanonicalSearch:(id)arg1 withCallback:(id /* CDUnknownBlockType */)arg2;
+ (void)geocodeAddress:(id)arg1 withCallback:(id /* CDUnknownBlockType */)arg2;
+ (BOOL)isGeocodeCandidate:(id)arg1;
+ (BOOL)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2;
+ (BOOL)locationIsGeocoded:(id)arg1;
+ (BOOL)locationIsAirport:(id)arg1;
+ (id)_serialQueue;

@end
