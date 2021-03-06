/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ALCity : NSObject {

	int _identifier;
	NSString* _localeCode;
	NSString* _timeZone;
	float _longitude;
	float _latitude;
	NSString* _yahooCode;
	NSString* _name;
	NSString* _unlocalizedName;
	NSString* _countryName;
	NSString* _unlocalizedCountryName;
	NSString* _countryOverride;
	NSString* _unlocalizedCountryOverride;
	NSString* _identifierForCPCity;
	bool _localizationAttempted;

}

@property (nonatomic,readonly) NSString * classicIdentifier; 
@property (nonatomic,readonly) NSDictionary * properties; 
@property (assign,nonatomic) int identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localeCode;                              //@synthesize localeCode=_localeCode - In the implementation block
@property (nonatomic,retain) NSString * timeZone;                                //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) float longitude;                                    //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float latitude;                                     //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * yahooCode;                               //@synthesize yahooCode=_yahooCode - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * unlocalizedName; 
@property (nonatomic,retain) NSString * countryName; 
@property (nonatomic,retain) NSString * unlocalizedCountryName; 
@property (nonatomic,retain) NSString * countryOverride; 
@property (nonatomic,retain) NSString * unlocalizedCountryOverride;              //@synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride - In the implementation block
-(id)countryName;
-(void)setCountryName:(id)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(id)displayNameIncludingCountry:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)identifier;
-(id)timeZone;
-(void)setIdentifier:(int)arg1 ;
-(id)properties;
-(id)initWithProperties:(id)arg1 ;
-(id)localeCode;
-(void)setCountryOverride:(id)arg1 ;
-(id)unlocalizedName;
-(id)initWithSQLRow:(char**)arg1 ;
-(id)countryOverride;
-(id)displayNameIncludingCountry:(bool)arg1 withFormat:(id)arg2 ;
-(void)ensureLocalized;
-(id)unlocalizedCountryOverride;
-(id)classicIdentifier;
-(void)setUnlocalizedName:(id)arg1 ;
-(void)setLocaleCode:(id)arg1 ;
-(id)yahooCode;
-(void)setYahooCode:(id)arg1 ;
-(void)setUnlocalizedCountryOverride:(id)arg1 ;
-(float)latitude;
-(float)longitude;
-(id)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(id)arg1 ;
@end

