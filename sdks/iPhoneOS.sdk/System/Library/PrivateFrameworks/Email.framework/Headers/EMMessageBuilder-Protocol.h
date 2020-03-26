//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMutableContentItem-Protocol.h>
#import <Email/EMMutableMessageListItem-Protocol.h>

@class NSArray, NSUUID;
@protocol ECEmailAddressConvertible;

@protocol EMMessageBuilder <EMMutableContentItem, EMMutableMessageListItem>
@property(copy, nonatomic) NSUUID *documentID;
@property(copy, nonatomic) NSArray *bccList;
@property(retain, nonatomic) id <ECEmailAddressConvertible> senderAddress;
@end
