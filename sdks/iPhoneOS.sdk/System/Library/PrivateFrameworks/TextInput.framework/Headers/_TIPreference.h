//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TIPreference : NSObject
{
    NSString *_key;
    NSString *_domain;
    id _defaultValue;
    id _currentValue;
}

+ (id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;
@property(retain, nonatomic) id currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;

@end
