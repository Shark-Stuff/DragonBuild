//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSchema.h>

@interface NUSourceSchema : NUSchema
{
}

+ (id)requiredAttributes;
+ (id)supportedAttributes;
+ (id)identifier;
- (NSArray )schemaDependencies;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id )arg2;
- (id)deserializeAssetIdentifierFromDictionary:(id)arg1 error:(out id )arg2;
- (BOOL)serializeAssetIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id )arg3;
- (id)deserializeSource:(id)arg1 error:(out id )arg2;
- (id)serializeSource:(id)arg1 error:(out id )arg2;
- (id)deserialize:(id)arg1 error:(out id )arg2;
- (id)serialize:(id)arg1 error:(out id )arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id )arg3;
- (id)copy:(id)arg1;
- (BOOL)validateSource:(id)arg1 error:(out id )arg2;
- (BOOL)validate:(id)arg1 error:(out id )arg2;
- (id)init;
- (id)identifier;
- (long long)type;

@end
