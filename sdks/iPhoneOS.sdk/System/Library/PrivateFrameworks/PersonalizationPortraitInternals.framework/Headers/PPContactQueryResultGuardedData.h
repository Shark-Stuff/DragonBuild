//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface PPContactQueryResultGuardedData : NSObject
{
    BOOL _joined;
    NSArray *_cnContacts;
    NSArray *_fiaContacts;
    NSError *_latestError;
}

@property(nonatomic) BOOL joined; // @synthesize joined=_joined;
@property(retain, nonatomic) NSError *latestError; // @synthesize latestError=_latestError;
@property(retain, nonatomic) NSArray *fiaContacts; // @synthesize fiaContacts=_fiaContacts;
@property(retain, nonatomic) NSArray *cnContacts; // @synthesize cnContacts=_cnContacts;
// - (void).cxx_destruct;

@end
