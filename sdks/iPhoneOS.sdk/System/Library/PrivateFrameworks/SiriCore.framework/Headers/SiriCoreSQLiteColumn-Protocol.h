//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol SiriCoreSQLiteValue;

@protocol SiriCoreSQLiteColumn <NSObject>
@property(readonly, copy, nonatomic) id <SiriCoreSQLiteValue> defaultValue;
@property(readonly, nonatomic) BOOL isNotNull;
@property(readonly, nonatomic) BOOL isPrimaryKey;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) long long identifier;
@end
