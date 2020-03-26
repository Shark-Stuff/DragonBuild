//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface WBSAnalyticsSafariSharedPasswordEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _initiatedSharePasswordOutcome;
    int _passwordSharingMechanism;
    int _receivedSharedPasswordOutcome;
    struct {
        unsigned int timestamp:1;
        unsigned int initiatedSharePasswordOutcome:1;
        unsigned int passwordSharingMechanism:1;
        unsigned int receivedSharedPasswordOutcome:1;
    } _has;
}

@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPasswordSharingMechanism:(id)arg1;
- (id)passwordSharingMechanismAsString:(int)arg1;
@property(nonatomic) BOOL hasPasswordSharingMechanism;
@property(nonatomic) int passwordSharingMechanism; // @synthesize passwordSharingMechanism=_passwordSharingMechanism;
- (int)StringAsReceivedSharedPasswordOutcome:(id)arg1;
- (id)receivedSharedPasswordOutcomeAsString:(int)arg1;
@property(nonatomic) BOOL hasReceivedSharedPasswordOutcome;
@property(nonatomic) int receivedSharedPasswordOutcome; // @synthesize receivedSharedPasswordOutcome=_receivedSharedPasswordOutcome;
- (int)StringAsInitiatedSharePasswordOutcome:(id)arg1;
- (id)initiatedSharePasswordOutcomeAsString:(int)arg1;
@property(nonatomic) BOOL hasInitiatedSharePasswordOutcome;
@property(nonatomic) int initiatedSharePasswordOutcome; // @synthesize initiatedSharePasswordOutcome=_initiatedSharePasswordOutcome;
@property(nonatomic) BOOL hasTimestamp;

@end
