/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSSecureCoding.h>
#import <HealthKit/NSCopying.h>

@class NSData, NSString, NSDate, HKQuantity, NSNumber, NSArray;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying> {

	char _isDisabled;
	NSData* _pictureData;
	NSString* _name;
	NSDate* _birthdate;
	HKQuantity* _height;
	HKQuantity* _weight;
	int _bloodType;
	NSNumber* _isOrganDonor;
	NSArray* _emergencyContacts;
	NSString* _medicalConditions;
	NSString* _medicalNotes;
	NSString* _allergyInfo;
	NSString* _medicationInfo;
	NSDate* _dateSaved;
	int _schemaVersion;

}

@property (assign,nonatomic) char isDisabled;                           //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,retain) NSData * pictureData;                      //@synthesize pictureData=_pictureData - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * birthdate;                        //@synthesize birthdate=_birthdate - In the implementation block
@property (nonatomic,retain) HKQuantity * height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) HKQuantity * weight;                       //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) int bloodType;                             //@synthesize bloodType=_bloodType - In the implementation block
@property (nonatomic,retain) NSNumber * isOrganDonor;                   //@synthesize isOrganDonor=_isOrganDonor - In the implementation block
@property (nonatomic,retain) NSArray * emergencyContacts;               //@synthesize emergencyContacts=_emergencyContacts - In the implementation block
@property (nonatomic,retain) NSString * medicalConditions;              //@synthesize medicalConditions=_medicalConditions - In the implementation block
@property (nonatomic,retain) NSString * medicalNotes;                   //@synthesize medicalNotes=_medicalNotes - In the implementation block
@property (nonatomic,retain) NSString * allergyInfo;                    //@synthesize allergyInfo=_allergyInfo - In the implementation block
@property (nonatomic,retain) NSString * medicationInfo;                 //@synthesize medicationInfo=_medicationInfo - In the implementation block
@property (nonatomic,retain) NSDate * dateSaved;                        //@synthesize dateSaved=_dateSaved - In the implementation block
@property (assign,nonatomic) int schemaVersion;                         //@synthesize schemaVersion=_schemaVersion - In the implementation block
+(char)supportsSecureCoding;
-(int)schemaVersion;
-(int)bloodType;
-(void)setDateSaved:(NSDate *)arg1 ;
-(void)setIsDisabled:(char)arg1 ;
-(void)setPictureData:(NSData *)arg1 ;
-(void)setBirthdate:(NSDate *)arg1 ;
-(void)setBloodType:(int)arg1 ;
-(void)setIsOrganDonor:(NSNumber *)arg1 ;
-(void)setEmergencyContacts:(NSArray *)arg1 ;
-(void)setMedicalConditions:(NSString *)arg1 ;
-(void)setMedicalNotes:(NSString *)arg1 ;
-(void)setAllergyInfo:(NSString *)arg1 ;
-(void)setMedicationInfo:(NSString *)arg1 ;
-(NSNumber *)isOrganDonor;
-(NSArray *)emergencyContacts;
-(NSString *)medicalConditions;
-(NSString *)medicalNotes;
-(NSString *)allergyInfo;
-(NSString *)medicationInfo;
-(NSDate *)dateSaved;
-(char)hasAnyData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(HKQuantity *)height;
-(void)setHeight:(HKQuantity *)arg1 ;
-(HKQuantity *)weight;
-(void)setWeight:(HKQuantity *)arg1 ;
-(void)setSchemaVersion:(int)arg1 ;
-(NSData *)pictureData;
-(char)isDisabled;
-(NSDate *)birthdate;
@end

