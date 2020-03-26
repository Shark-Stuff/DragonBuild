//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLModelSerialize-Protocol.h>

@class NSString;

@interface TMLPropertyDescriptor : NSObject <TMLModelSerialize>
{
    NSString *_propertyName;
    NSString *_propertyType;
    BOOL _readonly;
    BOOL _optional;
    NSUInteger _type;
}

+ (id)decode:(const struct ProtobufCMessage )arg1;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(readonly, nonatomic, getter=isReadonly) BOOL readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
// - (void).cxx_destruct;
- (void)encode:(struct ProtobufCMessage )arg1;
- (BOOL)canMergeFromPropertyDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *typeClassName;
- (id)initWithName:(id)arg1 typeName:(id)arg2 attributes:(id)arg3;
- (id)initWithName:(id)arg1 type:(NSUInteger)arg2 attributes:(id)arg3;

@end
