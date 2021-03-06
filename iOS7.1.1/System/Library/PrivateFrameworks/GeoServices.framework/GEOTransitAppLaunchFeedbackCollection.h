/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, GEOLatLng;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _bundleIdentifier;
	GEOLatLng* _destination;
	GEOLatLng* _source;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,readonly) bool hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) bool hasSource; 
@property (nonatomic,retain) GEOLatLng * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) bool hasDestination; 
@property (nonatomic,retain) GEOLatLng * destination;                  //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(id)bundleIdentifier;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)source;
-(void)setSource:(id)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(bool)hasBundleIdentifier;
-(bool)hasSource;
-(bool)hasDestination;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
@end

