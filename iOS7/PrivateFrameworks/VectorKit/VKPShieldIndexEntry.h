/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

// Not exported
@interface VKPShieldIndexEntry : PBCodable
{
    CDStruct_95bda58d _shieldTypes;
    NSString *_artworkIdentifier;
}

@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setShieldTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)shieldTypesAtIndex:(unsigned long long)arg1;
- (void)addShieldTypes:(int)arg1;
- (void)clearShieldTypes;
@property(readonly, nonatomic) int *shieldTypes;
@property(readonly, nonatomic) unsigned long long shieldTypesCount;
@property(readonly, nonatomic) _Bool hasArtworkIdentifier;
- (void)dealloc;

@end

