//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, FARequestConfigurator;

@interface FASharedServicesRequest : AARequest
{
    FARequestConfigurator *_requestConfigurator;
    ACAccount *_appleAccount;
}

+ (Class)responseClass;
// - (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAppleAccount:(id)arg1 urlString:(id)arg2;

@end
