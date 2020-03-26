//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase
{
    CEMSecurityInformationCommand_StatusSecurityInfo *_statusSecurityInfo;
}

+ (id)buildRequiredOnlyWithSecurityInfo:(id)arg1;
+ (id)buildWithSecurityInfo:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfo *statusSecurityInfo; // @synthesize statusSecurityInfo=_statusSecurityInfo;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end
