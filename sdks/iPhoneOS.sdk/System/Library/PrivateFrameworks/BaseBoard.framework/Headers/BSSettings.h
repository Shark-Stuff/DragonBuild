//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>

@class BSMutableIntegerMap, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableIntegerMap *_settingToFlagMap;
    BSMutableIntegerMap *_settingToObjectMap;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
// - (void).cxx_destruct;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 multilinePrefix:(id)arg4;
- (id)_keyDescriptionForSetting:(NSUInteger)arg1;
- (void)_removeAllSettings;
- (void)_setObject:(id)arg1 forSetting:(NSUInteger)arg2;
- (void)_setFlag:(long long)arg1 forSetting:(NSUInteger)arg2;
- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)_newMapTable;
- (void)_enumerateSettingsForObjectsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)allSettings;
- (void)enumerateObjectsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)objectForSetting:(NSUInteger)arg1;
- (void)enumerateFlagsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)boolForSetting:(NSUInteger)arg1;
- (long long)flagForSetting:(NSUInteger)arg1;
- (BOOL)isEmpty;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)_init;
- (BOOL)isKeyedSettings;

@end
