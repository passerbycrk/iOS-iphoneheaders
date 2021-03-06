/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDate, NSDateComponents;

@interface _HKStatisticsCollectionQueryServerDataObject : _HKQueryServerDataObject {

	NSDate* _anchorDate;
	unsigned _options;
	NSDateComponents* _intervalComponents;
	unsigned _mergeStrategy;

}

@property (nonatomic,retain) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (assign,nonatomic) unsigned options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (assign,nonatomic) unsigned mergeStrategy;                             //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(char)supportsSecureCoding;
-(void)setAnchorDate:(NSDate *)arg1 ;
-(void)setIntervalComponents:(NSDateComponents *)arg1 ;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(unsigned)mergeStrategy;
-(void)setMergeStrategy:(unsigned)arg1 ;
@end

