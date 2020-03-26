//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARObserverHashTable, EAAccessoryManager, NSMutableDictionary;
@protocol CRVehicleAccessoryManagerDelegate;

@interface CRVehicleAccessoryManager : NSObject
{
    id <CRVehicleAccessoryManagerDelegate> _vehicleAccessoryDelegate;
    EAAccessoryManager *_accessoryManager;
    NSMutableDictionary *_vehiclesBySerialNumber;
    CARObserverHashTable *_observers;
}

+ (id)_certificateSerialNumberForAccessory:(id)arg1;
+ (BOOL)_isVehicleAccessory:(id)arg1;
+ (BOOL)_isValidAccessoryMacAddress:(id)arg1;
+ (id)managerInfoDataCache;
+ (id)vehicleAccessQueue;
+ (id)sharedInstance;
@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *vehiclesBySerialNumber; // @synthesize vehiclesBySerialNumber=_vehiclesBySerialNumber;
@property(retain, nonatomic) EAAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(nonatomic) __weak id <CRVehicleAccessoryManagerDelegate> vehicleAccessoryDelegate; // @synthesize vehicleAccessoryDelegate=_vehicleAccessoryDelegate;
// - (void).cxx_destruct;
- (id)vehicleAccessoryForiAPConnectionIdentifier:(NSUInteger)arg1;
- (id)vehicleAccessoryForCertificateSerial:(id)arg1;
- (id)connectedVehicleAccessories;
- (id)connectedAccessories;
- (void)handleAccessoryInformationUpdate:(id)arg1;
- (void)handleAccessoryDisconnect:(id)arg1;
- (void)handleAccessoryConnect:(id)arg1;
- (id)_vehicleInfoDataForAccessory:(id)arg1;
- (void)_updateVehicle:(id)arg1 usingAccessory:(id)arg2;
- (id)_vehicleForAccessory:(id)arg1;
- (void)_primeConnectedVehicleAccessories;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
