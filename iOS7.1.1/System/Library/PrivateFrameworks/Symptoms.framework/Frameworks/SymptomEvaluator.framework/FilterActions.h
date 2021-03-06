/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class Filter;

@interface FilterActions : NSObject {

	unsigned _triggerSymptomId;
	Filter* _initialFilter;
	long long _delayValue;
	Filter* _finalFilter;

}

@property (assign,nonatomic) unsigned triggerSymptomId;              //@synthesize triggerSymptomId=_triggerSymptomId - In the implementation block
@property (nonatomic,readonly) Filter * initialFilter;               //@synthesize initialFilter=_initialFilter - In the implementation block
@property (nonatomic,readonly) long long delayValue;                 //@synthesize delayValue=_delayValue - In the implementation block
@property (nonatomic,readonly) Filter * finalFilter;                 //@synthesize finalFilter=_finalFilter - In the implementation block
+(id)initForSymptom:(unsigned)arg1 trigger:(unsigned)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5 ;
-(id)description;
-(void).cxx_destruct;
-(void)initForSymptom:(unsigned)arg1 trigger:(unsigned)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5 ;
-(unsigned)triggerSymptomId;
-(void)setTriggerSymptomId:(unsigned)arg1 ;
-(id)initialFilter;
-(long long)delayValue;
-(id)finalFilter;
@end

