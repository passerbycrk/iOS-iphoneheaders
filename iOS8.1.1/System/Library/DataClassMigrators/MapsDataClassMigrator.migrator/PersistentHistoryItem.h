/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/NSCopying.h>

@class PersistentAddressBookAddress, PersistentDirectionsHistoryItem, PersistentSearchRequestHistoryItem, PersistentSearchResultHistoryItem;

@interface PersistentHistoryItem : PBCodable <NSCopying> {

	PersistentAddressBookAddress* _addressBookItem;
	PersistentDirectionsHistoryItem* _directionsHistoryItem;
	PersistentSearchRequestHistoryItem* _searchRequestHistoryItem;
	PersistentSearchResultHistoryItem* _searchResultHistoryItem;

}

@property (nonatomic,readonly) BOOL hasAddressBookItem; 
@property (nonatomic,retain) PersistentAddressBookAddress * addressBookItem;                             //@synthesize addressBookItem=_addressBookItem - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchRequestHistoryItem; 
@property (nonatomic,retain) PersistentSearchRequestHistoryItem * searchRequestHistoryItem;              //@synthesize searchRequestHistoryItem=_searchRequestHistoryItem - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchResultHistoryItem; 
@property (nonatomic,retain) PersistentSearchResultHistoryItem * searchResultHistoryItem;                //@synthesize searchResultHistoryItem=_searchResultHistoryItem - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsHistoryItem; 
@property (nonatomic,retain) PersistentDirectionsHistoryItem * directionsHistoryItem;                    //@synthesize directionsHistoryItem=_directionsHistoryItem - In the implementation block
-(BOOL)isEmpty;
-(id)item;
-(void)setItem:(id)arg1 ;
-(BOOL)hasAddressBookItem;
-(PersistentSearchResultHistoryItem *)searchResultHistoryItem;
-(BOOL)hasSearchRequestHistoryItem;
-(PersistentSearchRequestHistoryItem *)searchRequestHistoryItem;
-(BOOL)hasDirectionsHistoryItem;
-(PersistentDirectionsHistoryItem *)directionsHistoryItem;
-(void)setSearchRequestHistoryItem:(PersistentSearchRequestHistoryItem *)arg1 ;
-(void)setDirectionsHistoryItem:(PersistentDirectionsHistoryItem *)arg1 ;
-(BOOL)hasSearchResultHistoryItem;
-(void)setSearchResultHistoryItem:(PersistentSearchResultHistoryItem *)arg1 ;
-(void)setAddressBookItem:(PersistentAddressBookAddress *)arg1 ;
-(PersistentAddressBookAddress *)addressBookItem;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

