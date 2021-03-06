/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOLocalizedName : PBCodable <NSCopying> {

	NSString* _languageCode;
	NSString* _name;
	unsigned _nameRank;
	NSString* _nameType;
	NSString* _phoneticName;
	char _isDefault;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasIsDefault; 
@property (assign,nonatomic) char isDefault;                       //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) char hasNameType; 
@property (nonatomic,retain) NSString * nameType;                  //@synthesize nameType=_nameType - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char hasNameRank; 
@property (assign,nonatomic) unsigned nameRank;                    //@synthesize nameRank=_nameRank - In the implementation block
@property (nonatomic,readonly) char hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;              //@synthesize phoneticName=_phoneticName - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)hasLanguageCode;
-(void)setPhoneticName:(NSString *)arg1 ;
-(char)hasPhoneticName;
-(NSString *)phoneticName;
-(id)initWithPlaceDataLocalizedString:(id)arg1 ;
-(void)setNameType:(NSString *)arg1 ;
-(void)setIsDefault:(char)arg1 ;
-(void)setHasIsDefault:(char)arg1 ;
-(char)hasIsDefault;
-(char)hasNameType;
-(void)setNameRank:(unsigned)arg1 ;
-(void)setHasNameRank:(char)arg1 ;
-(char)hasNameRank;
-(char)isDefault;
-(NSString *)nameType;
-(unsigned)nameRank;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end

