//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayMapRegion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_disambiguationLabels:1;
        unsigned int wrote_displayMapRegion:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)disambiguationLabelType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)disambiguationLabelAtIndex:(NSUInteger)arg1;
- (NSUInteger)disambiguationLabelsCount;
- (void)_addNoFlagsDisambiguationLabel:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels;
- (void)_readDisambiguationLabels;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) BOOL hasDisplayMapRegion;
- (void)_readDisplayMapRegion;
- (id)initWithData:(id)arg1;
- (id)init;

@end

