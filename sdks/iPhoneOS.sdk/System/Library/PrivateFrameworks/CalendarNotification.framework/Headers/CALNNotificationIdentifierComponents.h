//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CALNNotificationIdentifierComponents : NSObject
{
    NSString *_sourceIdentifier;
    NSString *_sourceClientIdentifier;
}

@property(readonly, copy, nonatomic) NSString *sourceClientIdentifier; // @synthesize sourceClientIdentifier=_sourceClientIdentifier;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;

@end
