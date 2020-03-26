//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAlarmEventEntity : HDHealthEntity
{
}

+ (id)checkConstraints;
+ (id)uniquedColumns;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_alarmEventFromAllPropertiesRow:(struct HDSQLiteRow )arg1;
+ (BOOL)deleteAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id )arg3;
+ (BOOL)deleteAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id )arg3;
+ (BOOL)deleteAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id )arg3;
+ (BOOL)insertOrReplaceAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id )arg3;
+ (id)insertOrReplaceAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id )arg3;
+ (BOOL)enumerateAllAlarmEventsWithTransaction:(id)arg1 predicate:(id)arg2 error:(id )arg3 enumerationHandler:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)enumerateAllAlarmEventsWithTransaction:(id)arg1 error:(id )arg2 enumerationHandler:(id /* CDUnknownBlockType */)arg3;
+ (BOOL)enumerateAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id )arg3 enumerationHandler:(id /* CDUnknownBlockType */)arg4;
- (id)alarmEventWithTransaction:(id)arg1 error:(id )arg2;

@end
