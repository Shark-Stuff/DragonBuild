//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, GEOPDAutocompleteEntry, GEOPDPlace, NSString, PBDataReader;

@interface GEORPUserSearchInput : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOLatLng *_coordinate;
    GEOPDPlace *_place;
    NSString *_searchString;
    NSString *_singleLineAddressString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _origin;
    struct {
        unsigned int has_origin:1;
        unsigned int read_autocompleteEntry:1;
        unsigned int read_coordinate:1;
        unsigned int read_place:1;
        unsigned int read_searchString:1;
        unsigned int read_singleLineAddressString:1;
        unsigned int wrote_autocompleteEntry:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_place:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_singleLineAddressString:1;
        unsigned int wrote_origin:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
- (int)StringAsOrigin:(id)arg1;
- (id)originAsString:(int)arg1;
@property(nonatomic) BOOL hasOrigin;
@property(nonatomic) int origin;
@property(retain, nonatomic) GEOLatLng *coordinate;
@property(readonly, nonatomic) BOOL hasCoordinate;
- (void)_readCoordinate;
@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property(readonly, nonatomic) BOOL hasAutocompleteEntry;
- (void)_readAutocompleteEntry;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) BOOL hasPlace;
- (void)_readPlace;
@property(retain, nonatomic) NSString *singleLineAddressString;
@property(readonly, nonatomic) BOOL hasSingleLineAddressString;
- (void)_readSingleLineAddressString;
@property(retain, nonatomic) NSString *searchString;
@property(readonly, nonatomic) BOOL hasSearchString;
- (void)_readSearchString;
- (id)initWithData:(id)arg1;
- (id)init;

@end
